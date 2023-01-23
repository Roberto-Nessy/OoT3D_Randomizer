#include "descriptions.hpp"

//clang-format off
/*------------------------------
|           FOREST             |                            *SCREEN WIDTH*
------------------------------*/       /*--------------------------------------------------*/
Description forestOpen                = Description({                                      //
                          /* English */ "Mido no longer blocks the path to the Deku Tree,\n"
                                        "and the Kokiri boy no longer blocks the path out\n"
                                        "of the forest.",                                  //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
Description forestClosed              = Description({                                      //
                          /* English */ "Beating Deku Tree is logically required to leave\n"
                                        "the forest area (Kokiri Forest/Lost Woods/Sacred\n"
                                        "Forest Meadow/Deku Tree), while the Kokiri Sword\n"
                                        "and a Deku Shield are required to access the Deku\n"
                                        "Tree. Items needed for this will be guaranteed\n" //
                                        "inside the forest area. This setting is\n"        //
                                        "incompatible with starting as adult.",            //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
Description forestClosedDeku          = Description({                                      //
                          /* English */ "The Kokiri boy no longer blocks the path out of\n"//
                                        "the forest, but Mido still blocks the path to the\n"
                                        "Deku Tree, requiring Kokiri Sword and Deku Shield\n"
                                        "to access the Deku Tree.",                        //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
/*------------------------------                                                           //
|        KAKARIKO GATE         |                                                           //
------------------------------*/                                                           //
Description kakGateOpen               = Description({                                      //
                          /* English */ "The gate is always open instead of needing\n"     //
                                        "Zelda's Letter. The Happy Mask Shop opens upon\n" //
                                        "obtaining Zelda's Letter without needing to show\n"
                                        "it to the guard.",                                //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
Description kakGateClosed             = Description({                                      //
                          /* English */ "The gate and the Happy Mask Shop both remain\n"   //
                                        "closed until showing Zelda's Letter to the guard\n"
                                        "in Kakariko.",                                    //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
/*------------------------------                                                           //
|        DOOR OF TIME          |                                                           //
------------------------------*/                                                           //
Description doorOfTimeOpen            = Description({                                      //
                          /* English */ "The Door of Time starts opened instead of needing\n"
                                        "to play the Song of Time.",                       //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
Description doorOfTimeClosed          = Description({                                      //
                          /* English */ "Only an Ocarina and the Song of Time need to be\n"//
                                        "found to open the Door of Time.",                 //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
Description doorOfTimeIntended        = Description({                                      //
                          /* English */ "The Ocarina of Time, the Song of Time, and\n"     //
                                        "all Spiritual Stones need to be found to\n"       //
                                        "open the Door of Time.",                          //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
/*------------------------------                                                           //
|       ZORA'S FOUNTAIN        |                                                           //
------------------------------*/                                                           //
Description fountainNormal            = Description({                                      //
                          /* English */ "King Zora obstructs the way to Zora's Fountain.\n"//
                                        "Ruto's Letter must be shown as child in order to\n"
                                        "move him for both eras.",                         //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
Description fountainAdult             = Description({                                      //
                          /* English */ "King Zora is always moved in the adult era. This\n"
                                        "means Ruto's Letter is only required to access\n" //
                                        "Zora's Fountain as child.",                       //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
Description fountainOpen              = Description({                                      //
                          /* English */ "King Zora starts as moved in both the child and\n"//
                                        "adult eras. This also removes Ruto's Letter from\n"
                                        "the pool since it can't be used.",                //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
/*------------------------------                                                           //
|         JABU-JABU            |                                                           //
------------------------------*/                                                           //
Description jabuJabuCloseDesc         = Description({                                      //
                          /* English */ "Jabu-Jabu's mouth stays closed until a fish is\n" //
                                        "fed.",                                            //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
Description jabuJabuOpenDesc          = Description({                                      //
                          /* English */ "Jabu-Jabu's mouth is always open.",               //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
/*------------------------------                                                           //
|       GERUDO FORTRESS        |                                                           //
------------------------------*/                                                           //
Description gerudoNormal              = Description({                                      //
                          /* English */ "All 4 carpenters can be rescued.",                //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
Description gerudoFast                = Description({                                      //
                          /* English */ "Only the bottom left carpenter must be rescued.", //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
Description gerudoOpen                = Description({                                      //
                          /* English */ "The carpenters are rescued from the start of the\n"
                                        "game, and if Shuffle Gerudo Card is disabled,\n"  //
                                        "the player starts with the Gerudo Card in the\n"  //
                                        "inventory allowing access to Gerudo Training\n"   //
                                        "Grounds.",                                        //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
/*------------------------------                                                           //
|        RAINBOW BRIDGE        |                                                           //
------------------------------*/                                                           //
Description bridgeOpen                = Description({                                      //
                          /* English */ "The Rainbow Bridge is always present.",           //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
Description bridgeVanilla             = Description({                                      //
                          /* English */ "The Rainbow Bridge requires Shadow and Spirit\n"  //
                                        "Medallions as well as Light Arrows.",             //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
Description bridgeStones              = Description({                                      //
                          /* English */ "The Rainbow Bridge requires collecting a\n"       //
                                        "configurable number of Spiritual Stones.",        //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
Description bridgeMedallions          = Description({                                      //
                          /* English */ "The Rainbow Bridge requires collecting a\n"       //
                                        "configurable number of Medallions.",              //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
Description bridgeRewards             = Description({                                      //
                          /* English */ "The Rainbow Bridge requires collecting a\n"       //
                                        "configurable number of Dungeon Rewards.",         //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
Description bridgeDungeons            = Description({                                      //
                          /* English */ "The Rainbow Bridge requires completing a\n"       //
                                        "configurable number of Dungeons.\n"               //
                                        "\n"                                               //
                                        "Dungeons are considered complete when Link steps\n"
                                        "into the blue warp at the end of them.",          //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
Description bridgeTokens              = Description({                                      //
                          /* English */ "The Rainbow Bridge requires collecting a\n"       //
                                        "configurable number of Gold Skulltula Tokens.",   //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
/*------------------------------                                                           //
|      BRIDGE CONDITIONS       |                                                           //
------------------------------*/                                                           //
Description bridgeStoneCountDesc      = Description({                                      //
                          /* English */ "Set the number of Spiritual Stones required to\n" //
                                        "spawn the Rainbow Bridge.",                       //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
Description bridgeMedallionCountDesc  = Description({                                      //
                          /* English */ "Set the number of Medallions required to spawn the"
                                        "Rainbow Bridge.",                                 //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
Description bridgeRewardCountDesc     = Description({                                      //
                          /* English */ "Set the number of Dungeon Rewards (Spiritual\n"   //
                                        "Stones and Medallions) required to spawn the\n"   //
                                        "Rainbow Bridge.",                                 //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
Description bridgeDungeonCountDesc    = Description({                                      //
                          /* English */ "Set the number of completed dungeons required to\n"
                                        "spawn the Rainbow Bridge.",                       //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
Description bridgeTokenCountDesc      = Description({                                      //
                          /* English */ "Set the number of Gold Skulltula Tokens required\n"
                                        "to spawn the Rainbow Bridge.",                    //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
/*------------------------------                                                           //
|     RANDOM GANONS TRIALS     |                                                           //
------------------------------*/                                                           //
Description randomGanonsTrialsDesc    = Description({                                      //
                          /* English */ "Sets a random number of required trials to enter\n"
                                        "Ganon's Tower.",                                  //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
/*------------------------------                                                           //
|     GANON'S TRIAL COUNT      |                                                           //
------------------------------*/                                                           //
Description ganonsTrialCountDesc      = Description({                                      //
                          /* English */ "Set the number of trials required to enter\n"     //
                                        "Ganon's Tower. Trials will be randomly selected.",//
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
