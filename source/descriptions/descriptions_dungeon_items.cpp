#include "descriptions.hpp"

// clang-format off
/*------------------------------
|      MAPS AND COMPASSES      |                            *SCREEN WIDTH*
------------------------------*/       /*--------------------------------------------------*/
Description mapCompassStartWith       = Description({                                      //
                          /* English */ "Maps and Compasses are given to you from the\n"   //
                                        "start. This will add a small amount of money and\n"
                                        "refill items to the pool.",                       //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
Description mapCompassVanilla         = Description({                                      //
                          /* English */ "Maps and Compasses will appear in their vanilla\n"//
                                        "locations.",                                      //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
Description mapCompassOwnDungeon      = Description({                                      //
                          /* English */ "Maps and Compasses can only appear in their\n"    //
                                        "respective dungeon.",                             //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
Description mapCompassAnyDungeon      = Description({                                      //
                          /* English */ "Maps and Compasses can only appear in a dungeon,\n"
                                        "but not necessarily the dungeon they are for.",   //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
Description mapCompassOverworld       = Description({                                      //
                          /* English */ "Maps and Compasses can only appear outside of\n"  //
                                        "dungeons.",                                       //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
Description mapCompassAnywhere        = Description({                                      //
                          /* English */ "Maps and Compasses can appear anywhere in the\n"  //
                                        "world.",                                          //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
/*------------------------------                                                           //
|         SMALL KEYS           |                                                           //
------------------------------*/                                                           //
Description smallKeyStartWith         = Description({                                      //
                          /* English */ "Small Keys are given to you from the start so you\n"
                                        "won't have to worry about locked doors. An easier\n"
                                        "mode.",                                           //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
Description smallKeyVanilla           = Description({                                      //
                          /* English */ "Small Keys will appear in their vanilla locations."
                                        "You start with 3 keys in Spirit Temple MQ because\n"
                                        "the vanilla key layout is not beatable in logic.",//
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
Description smallKeyOwnDungeon        = Description({                                      //
                          /* English */ "Small Keys can only appear in their respective\n" //
                                        "dungeon. If Fire Temple is not a Master Quest\n"  //
                                        "dungeon, the door to the Boss Key chest will be\n"//
                                        "unlocked.",                                       //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
Description smallKeyAnyDungeon        = Description({                                      //
                          /* English */ "Small Keys can only appear inside of any dungeon,\n"
                                        "but won't necessarily be in the dungeon that the\n"
                                        "key is for. A difficult mode since it is more\n"  //
                                        "likely to need to enter a dungeon multiple times.",
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
Description smallKeyOverworld         = Description({                                      //
                          /* English */ "Small Keys can only appear outside of dungeons.\n"//
                                        "You may need to enter a dungeon multiple times to\n"
                                        "gain items to access the overworld locations with\n"
                                        "the keys required to finish a dungeon.",          //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
Description smallKeyAnywhere          = Description({                                      //
                          /* English */ "Small Keys can appear anywhere in the world. A\n" //
                                        "difficult mode since it is more likely to need to\n"
                                        "enter a dungeon multiple times.",                 //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
/*------------------------------                                                           //
|     GERUDO FORTRESS KEYS     |                                                           //
------------------------------*/                                                           //
Description gerudoKeysVanilla         = Description({                                      //
                          /* English */ "Gerudo Fortress Keys will appear in their vanilla\n"
                                        "location, dropping from fighting Gerudo guards\n" //
                                        "that attack when trying to free the jailed\n"     //
                                        "carpenters.",                                     //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
Description gerudoKeysAnyDungeon      = Description({                                      //
                          /* English */ "Gerudo Fortress Keys can only appear inside of\n" //
                                        "dungeons.",                                       //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
Description gerudoKeysOverworld       = Description({                                      //
                          /* English */ "Gerudo Fortress Keys can only appear outside of\n"//
                                        "dungeons.",                                       //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
Description gerudoKeysAnywhere        = Description({                                      //
                          /* English */ "Gerudo Fortress Keys can appear anywhere in the\n"//
                                        "world.",                                          //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
/*------------------------------                                                           //
|           Key Rings          |                                                           //
------------------------------*/                                                           //
Description keyRingDesc               = Description({                                      //
                          /* English */ "Selected key ring dungeons will have all of their\n"
                                        "keys found at once in a ring rather than\n"       //
                                        "individually.\n\n"                                //
                                        "For example, instead of shuffling 5 Forest Temple\n"
                                        "small keys into the pool, you will find a single\n"
                                        "key ring which will give you all 5 keys at once.\n",
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
/*------------------------------                                                           //
|          BOSS KEYS           |                                                           //
------------------------------*/                                                           //
Description bossKeyStartWith          = Description({                                      //
                          /* English */ "Boss Keys are given to you from the start so you\n"
                                        "won't have to worry about boss doors. An easier\n"//
                                        "mode.",                                           //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
Description bossKeyVanilla            = Description({                                      //
                          /* English */ "Boss Keys will appear in their vanilla locations.",
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
Description bossKeyOwnDungeon         = Description({                                      //
                          /* English */ "Boss Keys can only appear in their respective\n"  //
                                        "dungeon.",                                        //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
Description bossKeyAnyDungeon         = Description({                                      //
                          /* English */ "Boss Keys can only appear inside of any dungeon,\n"
                                        "but won't necessarily be in the dungeon that the\n"
                                        "key is for. A difficult mode since it is more\n"  //
                                        "likely to need to enter a dungeon multiple times.",
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
Description bossKeyOverworld          = Description({                                      //
                          /* English */ "Boss Keys can only appear outside of dungeons.\n" //
                                        "You may need to enter a dungeon without the boss\n"
                                        "key to get items required to find the key in the\n"
                                        "overworld.",                                      //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
Description bossKeyAnywhere           = Description({                                      //
                          /* English */ "Boss Keys can appear anywhere in the world. A\n"  //
                                        "difficult mode since it is more likely to need to\n"
                                        "enter a dungeon multiple times.",                 //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
/*------------------------------                                                           //
|   GANON'S CASTLE BOSS KEY    |                                                           //
------------------------------*/                                                           //
Description ganonKeyStartWith         = Description({                                      //
                          /* English */ "Ganon's Castle Boss Key is given to you from the\n"
                                        "start and you don't have to worry about finding it",
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
Description ganonKeyVanilla           = Description({                                      //
                          /* English */ "Ganon's Castle Boss Key will appear in the vanilla"
                                        "location.",                                       //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
Description ganonKeyOwnDungeon        = Description({                                      //
                          /* English */ "Ganon's Castle Boss Key can only appear inside\n" //
                                        "Ganon's Castle.",                                 //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
Description ganonKeyAnyDungeon        = Description({                                      //
                          /* English */ "Ganon's Castle Boss Key can only appear inside of\n"
                                        "a dungeon, but not necessarily Ganon's Castle.",  //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
Description ganonKeyOverworld         = Description({                                      //
                          /* English */ "Ganon's Castle Boss Key can only appear outside of"
                                        "dungeons.",                                       //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
Description ganonKeyAnywhere          = Description({                                      //
                          /* English */ "Ganon's Castle Boss Key can appear anywhere in the"
                                        "world.",                                          //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
Description ganonKeyLACS              = Description({                                      //
                          /* English */ "These settings put the boss key on the Light Arrow"
                                        "Cutscene location, from Zelda in Temple of Time as"
                                        "adult, with differing requirements.",             //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
/*------------------------------                                                           //
|        LACS CONDITIONS       |                                                           //
------------------------------*/                                                           //
Description lacsMedallionCountDesc    = Description({                                      //
                          /* English */ "Set the number of Medallions required to trigger\n"
                                        "the Light Arrow Cutscene.",                       //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
Description lacsStoneCountDesc        = Description({                                      //
                          /* English */ "Set the number of Spiritual Stones required to\n" //
                                        "trigger the Light Arrow Cutscene.",               //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
Description lacsRewardCountDesc       = Description({                                      //
                          /* English */ "Set the number of Dungeon Rewards (Spiritual\n"   //
                                        "Stones and Medallions) required to trigger the\n" //
                                        "Light Arrow Cutscene.",                           //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
Description lacsDungeonCountDesc      = Description({                                      //
                          /* English */ "Set the number of completed dungeons required to\n"
                                        "trigger the Light Arrow Cutscene.\n"              //
                                        "\n"                                               //
                                        "Dungeons are considered complete when Link steps\n"
                                        "into the blue warp at the end of them.",          //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
Description lacsTokenCountDesc        = Description({                                      //
                          /* English */ "Set the number of Gold Skulltula Tokens required\n"
                                        "to trigger the Light Arrow Cutscene.",            //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
