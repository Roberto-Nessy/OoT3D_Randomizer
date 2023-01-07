#include "location_access.hpp"
#include "logic.hpp"
#include "entrance.hpp"
#include "dungeon.hpp"

using namespace Logic;
using namespace Settings;

void AreaTable_Init_BottomOfTheWell() {
    /*--------------------------
    |    VANILLA/MQ DECIDER    |
    ---------------------------*/
    areaTable[BOTTOM_OF_THE_WELL_ENTRYWAY] = Area(
        "Bottom of the Well Entryway", "Bottom of the Well", BOTTOM_OF_THE_WELL, NO_DAY_NIGHT_CYCLE, {}, {},
        {
            // Exits
            Entrance(BOTTOM_OF_THE_WELL_MAIN_AREA,
                     { [] { return Dungeon::BottomOfTheWell.IsVanilla() && IsChild && (CanChildAttack || Nuts); } }),
            Entrance(BOTTOM_OF_THE_WELL_MQ_PERIMETER, { [] { return Dungeon::BottomOfTheWell.IsMQ() && IsChild; },
                                                        /*Glitched*/
                                                        [] {
                                                            return Dungeon::BottomOfTheWell.IsMQ() &&
                                                                   CanDoGlitch(GlitchType::HookshotClip,
                                                                               GlitchDifficulty::INTERMEDIATE) &&
                                                                   Longshot && false;
                                                        } }), // TODO: Rewrite logic to account for adult in MQ BotW
            Entrance(KAKARIKO_VILLAGE, { [] { return true; } }),
        });

    /*--------------------------
    |     VANILLA DUNGEON      |
    ---------------------------*/
    if (Dungeon::BottomOfTheWell.IsVanilla()) {
        areaTable[BOTTOM_OF_THE_WELL_MAIN_AREA] = Area(
            "Bottom of the Well Main Area", "Bottom of the Well", BOTTOM_OF_THE_WELL, NO_DAY_NIGHT_CYCLE,
            {
                // Events
                EventAccess(&StickPot, { [] { return true; } }),
                EventAccess(&BotWLowerWater, { [] { return BotWLowerWater || CanPlay(ZeldasLullaby); },
                                               /*Glitched*/
                                               [] { return ZeldasLullaby && (CanDoGlitch(GlitchType::DungeonBombOI, GlitchDifficulty::INTERMEDIATE) || (((Bugs || Fish) && CanShield) && (CanDoGlitch(GlitchType::QPA, GlitchDifficulty::ADVANCED) || (HasBombchus && CanDoGlitch(GlitchType::ActionSwap, GlitchDifficulty::ADVANCED))))); } }),
            },
            {
                // Locations
                LocationAccess(BOTTOM_OF_THE_WELL_FRONT_LEFT_FAKE_WALL_CHEST,
                               { [] { return LogicLensBotw || CanUse(LENS_OF_TRUTH); } }),
                LocationAccess(BOTTOM_OF_THE_WELL_FRONT_CENTER_BOMBABLE_CHEST,
                               { [] { return HasExplosives; },
                                 /*Glitched*/
                                 [] { return (LogicLensBotw || CanUse(LENS_OF_TRUTH)) && CanDoGlitch(GlitchType::HookshotClip, GlitchDifficulty::NOVICE); } }),
                LocationAccess(BOTTOM_OF_THE_WELL_RIGHT_BOTTOM_FAKE_WALL_CHEST,
                               { [] { return LogicLensBotw || CanUse(LENS_OF_TRUTH); } }),
                LocationAccess(BOTTOM_OF_THE_WELL_COMPASS_CHEST,
                               { [] { return LogicLensBotw || CanUse(LENS_OF_TRUTH); } }),
                LocationAccess(BOTTOM_OF_THE_WELL_CENTER_SKULLTULA_CHEST,
                               { [] { return LogicLensBotw || CanUse(LENS_OF_TRUTH); } }),
                LocationAccess(BOTTOM_OF_THE_WELL_BACK_LEFT_BOMBABLE_CHEST,
                               { [] { return (LogicLensBotw || CanUse(LENS_OF_TRUTH)) && HasExplosives; } }),
                LocationAccess(BOTTOM_OF_THE_WELL_UNDERWATER_FRONT_CHEST, { [] { return BotWLowerWater; } }),
                LocationAccess(BOTTOM_OF_THE_WELL_UNDERWATER_LEFT_CHEST, { [] { return BotWLowerWater; } }),
            },
            {
                // Exits
                Entrance(BOTTOM_OF_THE_WELL_ENTRYWAY, { [] { return true; } }),
                Entrance(BOTTOM_OF_THE_WELL_BASEMENT, { [] { return true; } }),
                Entrance(BOTTOM_OF_THE_WELL_COFFIN_ROOM, { [] { return IsChild || CanDive || IronBoots || Hookshot; } }),
                Entrance(BOTTOM_OF_THE_WELL_FIRE_KEESE_ROOM, { [] { return SmallKeys(BOTTOM_OF_THE_WELL, 3) && (LogicLensBotw || CanUse(LENS_OF_TRUTH)); } }),
                Entrance(BOTTOM_OF_THE_WELL_BOSS_ROOM, { [] { return BotWLowerWater; },
                                                         /*Glitched*/
                                                         [] { return CanDoGlitch(GlitchType::HookshotClip, GlitchDifficulty::NOVICE); } }),
                Entrance(BOTTOM_OF_THE_WELL_EAST_INNER_ROOM, { [] { return SmallKeys(BOTTOM_OF_THE_WELL, 3); } }),
                Entrance(BOTTOM_OF_THE_WELL_WEST_INNER_ROOM, { [] { return SmallKeys(BOTTOM_OF_THE_WELL, 3); } }),
                Entrance(BOTTOM_OF_THE_WELL_LIKE_LIKE_CAGE, { [] { return false; },
                                                              /*Glitched*/
                                                              [] { return CanDoGlitch(GlitchType::HookshotClip, GlitchDifficulty::NOVICE); } }),
            });

        areaTable[BOTTOM_OF_THE_WELL_BASEMENT] = Area(
            "Bottom of the Well Basement", "Bottom of the Well", BOTTOM_OF_THE_WELL, NO_DAY_NIGHT_CYCLE,
            {
                // Events
                EventAccess(&StickPot, { [] { return true; } }),
                EventAccess(&NutPot, { [] { return true; } }),
            },
            {
                // Locations
                LocationAccess(BOTTOM_OF_THE_WELL_MAP_CHEST, { [] { return CanBlastOrSmash || Here(BOTTOM_OF_THE_WELL_BASEMENT_BOMB_FLOWERS, [] { return GoronBracelet; }); },
                                                               /*Glitched*/
                                                               [] { return (CanUse(STICKS) && CanDoGlitch(GlitchType::QPA, GlitchDifficulty::NOVICE)) || (CanUse(LONGSHOT) && CanDoGlitch(GlitchType::HookshotClip, GlitchDifficulty::INTERMEDIATE)); } }),
            },
            {
                // Exits
                Entrance(BOTTOM_OF_THE_WELL_MAIN_AREA, { [] { return true; } }),
                Entrance(BOTTOM_OF_THE_WELL_BASEMENT_BOMB_FLOWERS, { [] { return CanBlastOrSmash || CanUse(DINS_FIRE) || Here(BOTTOM_OF_THE_WELL_BASEMENT_BOMB_FLOWERS, [] { return CanUse(BOW) || GoronBracelet; }); } }),
            });

        areaTable[BOTTOM_OF_THE_WELL_BASEMENT_BOMB_FLOWERS] = Area(
            "Bottom of the Well Basement Bomb Flowers", "Bottom of the Well", BOTTOM_OF_THE_WELL, NO_DAY_NIGHT_CYCLE, {}, {},
            {
                // Exits
                Entrance(BOTTOM_OF_THE_WELL_BASEMENT, { [] { return CanBlastOrSmash || CanUse(BOW) || GoronBracelet || CanUse(DINS_FIRE); } }),
            });

        areaTable[BOTTOM_OF_THE_WELL_COFFIN_ROOM] = Area(
            "Bottom of the Well Coffin Room", "Bottom of the Well", BOTTOM_OF_THE_WELL, NO_DAY_NIGHT_CYCLE, {},
            {
                // Locations
                LocationAccess(BOTTOM_OF_THE_WELL_FREESTANDING_KEY, { [] { return HasFireSourceWithTorch || CanUse(BOOMERANG); } }),
            },
            {
                // Exits
                Entrance(BOTTOM_OF_THE_WELL_MAIN_AREA, { [] { return true; } }),
            });

        areaTable[BOTTOM_OF_THE_WELL_FIRE_KEESE_ROOM] = Area(
            "Bottom of the Well Fire Keese Room", "Bottom of the Well", BOTTOM_OF_THE_WELL, NO_DAY_NIGHT_CYCLE, {},
            {
                // Locations
                LocationAccess(BOTTOM_OF_THE_WELL_FIRE_KEESE_CHEST, { [] { return LogicLensBotw || CanUse(LENS_OF_TRUTH); } }),
            },
            {
                // Exits
                Entrance(BOTTOM_OF_THE_WELL_MAIN_AREA, { [] { return SmallKeys(BOTTOM_OF_THE_WELL, 3) && (LogicLensBotw || CanUse(LENS_OF_TRUTH)); } }),
                Entrance(BOTTOM_OF_THE_WELL_BASEMENT_BOMB_FLOWERS, { [] { return true; } }),
                Entrance(BOTTOM_OF_THE_WELL_LIKE_LIKE_CAGE, { [] { return LogicLensBotw || CanUse(LENS_OF_TRUTH); } }),
            });

        areaTable[BOTTOM_OF_THE_WELL_BOSS_ROOM] = Area(
            "Bottom of the Well Boss Room", "Bottom of the Well", BOTTOM_OF_THE_WELL, NO_DAY_NIGHT_CYCLE, {},
            {
                // Locations
                LocationAccess(BOTTOM_OF_THE_WELL_LENS_OF_TRUTH_CHEST, { [] { return CanUse(KOKIRI_SWORD) || CanUse(MASTER_SWORD) || CanUse(BIGGORON_SWORD) || (CanUse(STICKS) && LogicChildDeadhand); } }),
                LocationAccess(BOTTOM_OF_THE_WELL_INVISIBLE_CHEST, { [] { return LogicLensBotw || CanUse(LENS_OF_TRUTH); } }),
            },
            {
                // Exits
                Entrance(BOTTOM_OF_THE_WELL_MAIN_AREA, { [] { return CanUse(KOKIRI_SWORD) || CanUse(MASTER_SWORD) || CanUse(BIGGORON_SWORD) || (CanUse(STICKS) && LogicChildDeadhand); } }),
            });

        areaTable[BOTTOM_OF_THE_WELL_EAST_INNER_ROOM] = Area(
            "Bottom of the Well East Inner Room", "Bottom of the Well", BOTTOM_OF_THE_WELL, NO_DAY_NIGHT_CYCLE, {},
            {
                // Locations
                LocationAccess(BOTTOM_OF_THE_WELL_GS_EAST_INNER_ROOM, { [] { return HookshotOrBoomerang; },
                                                                        /*Glitched*/
                                                                        [] { return Bombs && CanDoGlitch(GlitchType::ISG, GlitchDifficulty::INTERMEDIATE) && CanDoGlitch(GlitchType::BombHover, GlitchDifficulty::INTERMEDIATE); } }),
            },
            {
                // Exits
                Entrance(BOTTOM_OF_THE_WELL_MAIN_AREA, { [] { return SmallKeys(BOTTOM_OF_THE_WELL, 3); } }),
            });

        areaTable[BOTTOM_OF_THE_WELL_WEST_INNER_ROOM] = Area(
            "Bottom of the Well West Inner Room", "Bottom of the Well", BOTTOM_OF_THE_WELL, NO_DAY_NIGHT_CYCLE,
            {
                // Events
                EventAccess(&DekuBabaSticks, { [] { return DekuBabaSticks || CanUse(KOKIRI_SWORD) || CanUse(MASTER_SWORD) || CanUse(BIGGORON_SWORD) || CanUse(BOOMERANG); } }),
                EventAccess(&DekuBabaNuts, { [] { return DekuBabaNuts || CanChildDamage || CanAdultDamage; } }),
            },
            {
                // Locations
                LocationAccess(BOTTOM_OF_THE_WELL_GS_WEST_INNER_ROOM, { [] { return HookshotOrBoomerang; },
                                                                        /*Glitched*/
                                                                        [] { return Bombs && CanDoGlitch(GlitchType::ISG, GlitchDifficulty::INTERMEDIATE) && CanDoGlitch(GlitchType::BombHover, GlitchDifficulty::INTERMEDIATE); } }),
            },
            {
                // Exits
                Entrance(BOTTOM_OF_THE_WELL_MAIN_AREA, { [] { return SmallKeys(BOTTOM_OF_THE_WELL, 3); } }),
            });

        areaTable[BOTTOM_OF_THE_WELL_LIKE_LIKE_CAGE] = Area(
            "Bottom of the Well Like Like Cage", "Bottom of the Well", BOTTOM_OF_THE_WELL, NO_DAY_NIGHT_CYCLE, {},
            {
                // Locations
                LocationAccess(BOTTOM_OF_THE_WELL_LIKE_LIKE_CHEST, { [] { return true; } }),
                LocationAccess(BOTTOM_OF_THE_WELL_GS_LIKE_LIKE_CAGE, { [] { return HookshotOrBoomerang; },
                                                                       /*Glitched*/
                                                                       [] { return Bombs && CanDoGlitch(GlitchType::ISG, GlitchDifficulty::INTERMEDIATE) && CanDoGlitch(GlitchType::BombHover, GlitchDifficulty::INTERMEDIATE); } }),

            },
            {
                // Exits
                Entrance(BOTTOM_OF_THE_WELL_FIRE_KEESE_ROOM, { [] { return true; } }),
            });
    }

    /*---------------------------
    |   MASTER QUEST DUNGEON    |
    ---------------------------*/
    if (Dungeon::BottomOfTheWell.IsMQ()) {
        areaTable[BOTTOM_OF_THE_WELL_MQ_PERIMETER] =
            Area("Bottom of the Well MQ Perimeter", "Bottom of the Well", BOTTOM_OF_THE_WELL, NO_DAY_NIGHT_CYCLE,
                 {
                     // Events
                     // EventAccess(&WallFairy, {[]{return WallFairy || Slingshot;}}),
                 },
                 {
                     // Locations
                     LocationAccess(BOTTOM_OF_THE_WELL_MQ_COMPASS_CHEST,
                                    { [] { return KokiriSword || (Sticks && LogicChildDeadhand); } }),
                     LocationAccess(BOTTOM_OF_THE_WELL_MQ_DEAD_HAND_FREESTANDING_KEY, { [] { return HasExplosives; } }),
                     // Trick: HasExplosives || (LogicBotWMQDeadHandKey && Boomerang)
                     LocationAccess(BOTTOM_OF_THE_WELL_MQ_GS_BASEMENT, { [] { return CanChildAttack; } }),
                     LocationAccess(BOTTOM_OF_THE_WELL_MQ_GS_COFFIN_ROOM,
                                    { [] { return CanChildAttack && SmallKeys(BOTTOM_OF_THE_WELL, 2); } }),
                 },
                 {
                     // Exits
                     Entrance(BOTTOM_OF_THE_WELL_ENTRYWAY, { [] { return true; } }),
                     Entrance(BOTTOM_OF_THE_WELL_MQ_MIDDLE, { [] { return CanPlay(ZeldasLullaby); } }),
                     // Trick: CanPlay(ZeldasLullaby) || (LogicBotWMQPits && HasExplosives)
                 });

        areaTable[BOTTOM_OF_THE_WELL_MQ_MIDDLE] =
            Area("Bottom of the Well MQ Middle", "Bottom of the Well", BOTTOM_OF_THE_WELL, NO_DAY_NIGHT_CYCLE, {},
                 {
                     // Locations
                     LocationAccess(BOTTOM_OF_THE_WELL_MQ_MAP_CHEST, { [] { return true; } }),
                     LocationAccess(BOTTOM_OF_THE_WELL_MQ_LENS_OF_TRUTH_CHEST,
                                    { [] { return HasExplosives && SmallKeys(BOTTOM_OF_THE_WELL, 2); } }),
                     LocationAccess(BOTTOM_OF_THE_WELL_MQ_EAST_INNER_ROOM_FREESTANDING_KEY, { [] { return true; } }),
                     LocationAccess(BOTTOM_OF_THE_WELL_MQ_GS_WEST_INNER_ROOM,
                                    { [] { return CanChildAttack && HasExplosives; } }),
                     // Trick: CanChildAttack && (LogicBotWMQPits || HasExplosives)
                 },
                 {
                     // Exits
                     Entrance(BOTTOM_OF_THE_WELL_MQ_PERIMETER, { [] { return true; } }),
                 });
    }
}
