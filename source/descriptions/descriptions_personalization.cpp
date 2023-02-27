#include "descriptions.hpp"

// clang-format off
/*------------------------------                                                           //
|          QUICK TEXT          |                                                           //
------------------------------*/                                                           //
Description quickTextDesc0            = Description({                                      //
                          /* English */ "Quick text will be unchanged, requiring\n"        //
                                        "frame-perfect inputs like in the vanilla game.",  //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
Description quickTextDesc1            = Description({                                      //
                          /* English */ "Every text box will be completable by pressing B\n"
                                        "at any point while it's scrolling.",              //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
Description quickTextDesc2            = Description({                                      //
                          /* English */ "Every text box will auto-complete instantly.\n"   //
                                        "No scrolling allowed!",                           //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
Description quickTextDesc3            = Description({                                      //
                          /* English */ "Holding B will advance and close text boxes\n"    //
                                        "automatically, except for choice selections.",    //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
/*------------------------------                                                           //
|       SKIP SONG REPLAYS      |                                                           //
------------------------------*/                                                           //
Description skipSongReplaysDesc       = Description({                                      //
                          /* English */ "The automatic replay after you play a song will\n"//
                                        "be skipped.\n"                                    //
                                        "You can choose to keep the sfx anyway, but you\n" //
                                        "will have control of Link during it.",            //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
/*------------------------------                                                           //
|      MENU OPENING BUTTON     |                                                           //
------------------------------*/                                                           //
Description menuButtonDesc            = Description({                                      //
                          /* English */ "Choose which button will bring up the Custom\n"   //
                                        "Information Menu.",                               //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
/*------------------------------                                                           //
|    ARROW SWITCHING BUTTON    |                                                           //
------------------------------*/                                                           //
Description arrowSwitchDesc           = Description({                                      //
                          /* English */ "Choose how you want to cycle through the arrow\n" //
                                        "types while you're aiming the bow.\n"             //
                                        "The touch screen option refers to the middle part\n"
                                        "of the screen where the map is displayed.",       //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
/*------------------------------                                                           //
|       INGAME DEFAULTS        |                                                           //
------------------------------*/                                                           //
Description silenceNaviDesc           = Description({                                      //
                          /* English */ "Prevents Navi from alerting you about advice.",   //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
Description ignoreMaskReactionDesc    = Description({                                      //
                          /* English */ "Causes NPCs to respond normally when wearing\n"   //
                                        "masks. Does not apply to trade quest dialouges.", //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
/*------------------------------                                                           //
|       COSMETIC OPTIONS       |                                                           //
------------------------------*/                                                           //
Description randomChoiceDesc          = Description({                                      //
                          /* English */ "A random color from the list of colors will be\n" //
                                        "chosen.",                                         //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
Description randomColorDesc           = Description({                                      //
                          /* English */ "A completely random color will be chosen.",       //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
Description customColorDesc           = Description({                                      //
                          /* English */ "Press A and type in a custom 6 digit hex color.", //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
Description colorListDesc             = Description({                                      //
                          /* English */ "This will only affect the color on Link's model.",//
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
/*------------------------------                                                           //
|      NAVI & TRAIL COLORS     |                                                           //
------------------------------*/                                                           //
Description naviColorsDesc            = Description({                                      //
                          /* English */ "Inner color is for the main light orb, outer color"
                                        "is for the aura.\n\n"                             //
                                        "The Rainbow option will make the color change\n"  //
                                        "continuously in a 3 seconds loop.",               //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
Description necessarySimpleModeDesc   = Description({                                      //
                          /* English */ "For boomerang and sword trails, OoT3D uses a\n"   //
                                        "special texture that doesn't support every color.\n\n"
                                        "Unsupported colors will always use the plain\n"   //
                                        "texture from OoT instead:\n"                      //
                                        "- Black and Purple sword trails\n"                //
                                        "- White, Black and Purple boomerang trails\n"     //
                                        "- Random or Custom colors without at least one\n" //
                                        "  maxed out RGB component.",                      //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
Description alwaysSimpleModeDesc      = Description({                                      //
                          /* English */ "All boomerang and sword trails will use the plain\n"
                                        "texture from OoT, regardless of what color is\n"  //
                                        "chosen.",                                         //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
Description swordTrailInnerDesc       = Description({                                      //
                          /* English */ "Select the color that appears from the base\n"    //
                                        "of the sword.",                                   //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
Description swordTrailOuterDesc       = Description({                                      //
                          /* English */ "Select the color that appears from the tip\n"     //
                                        "of the sword.",                                   //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
Description swordTrailDurationDesc    = Description({                                      //
                          /* English */ "Select the duration for sword trails.\n\n"        //
                                        "If too many trails are on screen, the duration\n" //
                                        "may be capped at Long for some of them.",         //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
Description boomerangTrailDesc        = Description({                                      //
                          /* English */ "Select the color for boomerang trails.",          //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
Description boomerangDurationDesc     = Description({                                      //
                          /* English */ "Select the duration for boomerang trails.",       //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
Description bombchuTrailInnerDesc     = Description({                                      //
                          /* English */ "Select the color for the center of the\n"         //
                                        "bombchu trail.",                                  //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
Description bombchuTrailOuterDesc     = Description({                                      //
                          /* English */ "Select the color for the sides of the\n"          //
                                        "bombchu trail.",                                  //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
Description bombchuDurationDesc       = Description({                                      //
                          /* English */ "Select the duration for bombchu trails.",         //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
/*------------------------------                                                           //
|         COLORED KEYS         |                                                           //
------------------------------*/                                                           //
Description coloredKeysDesc           = Description({                                      //
                          /* English */ "If set, small key models will be colored\n"       //
                                        "differently depending on which dungeon they can be"
                                        "used in. Forest Temple keys are green. Fire Temple"
                                        "keys are red. etc.",                              //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
Description coloredBossKeysDesc       = Description({                                      //
                          /* English */ "If set, boss key models will be colored\n"        //
                                        "differently depending on which dungeon they can be"
                                        "used in. The Forest Temple boss key is green. The "
                                        "Fire Temple boss key is red. etc.",               //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
/*------------------------------                                                           //
|         MIRROR WORLD         |                                                           //
------------------------------*/                                                           //
Description mirrorWorldOffDesc        = Description({                                      //
                          /* English */ "The world will not be mirrored.",                 //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
Description mirrorWorldOnDesc         = Description({                                      //
                          /* English */ "The world will be mirrored.",                     //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
Description mirrorWorldSceneDesc      = Description({                                      //
                          /* English */ "Some regions will be mirrored while others won't.",
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
Description mirrorWorldEntranceDesc   = Description({                                      //
                          /* English */ "Different entrances to the same region will alter\n"
                                        "whether it is mirrored or not.",                  //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
Description mirrorWorldRandomDesc     = Description({                                      //
                          /* English */ "Whether the world is mirrored may change after\n" //
                                        "every loading zone inconsistently.",              //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
/*------------------------------                                                           //
|        SHUFFLE MUSIC         |                                                           //
------------------------------*/                                                           //
Description musicRandoDesc            = Description({                                      //
                          /* English */ "Randomize the music in the game.",                //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
Description shuffleBGMDesc            = Description({                                      //
                          /* English */ "Randomize area background music, either\n"        //
                                        "grouped into categories or all mixed together.\n" //
                                        "The group categories are World, Event, and Battle.",
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
Description fanfaresOffDesc           = Description({                                      //
                          /* English */ "Fanfares are not shuffled.",                      //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
Description onlyFanfaresDesc          = Description({                                      //
                          /* English */ "Fanfares and ocarina songs are shuffled in\n"     //
                                        "separate pools.",                                 //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
Description fanfaresOcarinaDesc       = Description({                                      //
                          /* English */ "Fanfares and ocarina songs are shuffled together\n"
                                        "in the same pool.",                               //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
Description shuffleOcaMusicDesc       = Description({                                      //
                          /* English */ "The music that plays back after you play an\n"    //
                                        "ocarina song is randomized.",                     //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
/*------------------------------                                                           //
|         SHUFFLE SFX          |                                                           //
------------------------------*/                                                           //
Description shuffleSFXOff             = Description({                                      //
                          /* English */ "Sound effects will stay vanilla.",                //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
Description shuffleSFXAll             = Description({                                      //
                          /* English */ "All sound effects will be shuffled.",             //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
Description shuffleSFXSceneSpecific   = Description({                                      //
                          /* English */ "All sound effects will be shuffled, but will also\n"
                                        "be different in each scene.",                     //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
Description shuffleSFXChaos           = Description({                                      //
                          /* English */ "Each sound effect will become random about\n"     //
                                        "every second.",                                   //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
Description shuffleSFXCategorically   = Description({                                      //
                          /* English */ "Sound effects will be shuffled in categories.\n"  //
                                        "\n"                                               //
                                        "The sound may get annoying fast when disabled.",  //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
