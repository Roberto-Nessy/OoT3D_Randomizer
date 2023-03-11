#include "rHeap.h"
#include "item_override.h"
#include "actor.h"
#include "input.h"
#include "models.h"
#include "entrance.h"
#include "settings.h"
#include "title_screen.h"
#include "draw.h"
#include "common.h"
#include "savefile.h"
#include "multiplayer.h"
#include "grotto.h"
#include "item_effect.h"

#include "z3D/z3D.h"
#include "3ds/extdata.h"

GlobalContext* gGlobalContext = NULL;
static u8 rRandomizerInit     = 0;

void set_GlobalContext(GlobalContext* globalCtx) {
    gGlobalContext = globalCtx;
}

void Randomizer_Init() {
    rHeap_Init();
    Actor_Init();
    Entrance_Init();
    ItemOverride_Init();
    extDataInit();
}

void before_GlobalContext_Update(GlobalContext* globalCtx) {
    if (!rRandomizerInit) {
        Randomizer_Init();
        set_GlobalContext(globalCtx);
        rRandomizerInit = 1;
    }
    ItemOverride_Update();
    Model_UpdateAll(globalCtx);
    Input_Update();
    SaveFile_EnforceHealthLimit();

    Settings_SkipSongReplays();

    Multiplayer_Run();

    ItemEffect_RupeeAmmo(&gSaveContext);
}

void after_GlobalContext_Update() {
    // The alert is always displayed on the Title Screen, and for 10 seconds after opening a save file.
    if (missingRomfsAlert && romfsAlertFrames > 0) {
        Draw_DrawFormattedStringTop(75, 180, COLOR_WHITE,
                                    "WARNING: THE ROMFS FOLDER IS MISSING!\nCOPY IT FROM AND TO THE SAME "
                                    "LOCATIONS\nUSED FOR CODE.IPS AND EXHEADER.BIN");
        if (IsInGame()) {
            romfsAlertFrames--;
        }
    }

    if (drawActorInfo) {
        for (size_t type = 0; type <= ACTORTYPE_CHEST; type++) {
            for (Actor* actor = gGlobalContext->actorCtx.actorList[type].first; actor != NULL; actor = actor->next) {
                s16 posX;
                s16 posY;

                Actor_GetScreenPos(gGlobalContext, actor, &posX, &posY);

                if (posX < 0 || posX > SCREEN_TOP_WIDTH - (SPACING_X * 6) || //
                    posY < 0 || posY > SCREEN_TOP_HEIGHT - (SPACING_Y * 2)) {
                    continue;
                }

                Draw_DrawFormattedStringTop(posX, posY, COLOR_WHITE, "ID: 0x%X\n0x%X", actor->id, actor->params);
            }
        }
    }

    Multiplayer_Sync_Update();
}
