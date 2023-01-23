#include "descriptions.hpp"

//clang-format off
/*------------------------------
|         STARTING AGE         |                            *SCREEN WIDTH*
------------------------------*/       /*--------------------------------------------------*/
Description ageDesc                   = Description({                                      //
                          /* English */ "Choose which age Link will start as.\n"           //
                                        "\n"                                               //
                                        "Only the child option is compatible with Closed\n"//
                                        "Forest.\n"                                        //
                                        "\n"                                               //
                                        "Child will also be forced if Door of Time is set\n"
                                        "to intended and ocarinas are unshuffled unless you"
                                        "start with an ocarina already in your inventory.",//
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
/*------------------------------                                                           //
|      SHUFFLE ENTRANCES       |                                                           //
------------------------------*/                                                           //
Description shuffleEntrancesDesc      = Description({                                      //
                          /* English */ "Shuffle where the entrances between areas lead to."
                                        "If turned on, select which kinds of entrances you\n"
                                        "want shuffled in the options below. Note that some"
                                        "types of entrances can have wildly varying\n"     //
                                        "generation times.",                               //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
/*------------------------------                                                           //
|       DUNGEON ENTRANCES      |                                                           //
------------------------------*/                                                           //
Description dungeonEntrancesDesc      = Description({                                      //
                          /* English */ "Shuffle the pool of dungeon entrances, including\n"
                                        "Bottom of the Well, Ice Cavern, and Gerudo\n"     //
                                        "Training Grounds. Shuffling Ganon's Castle can\n" //
                                        "be enabled separately.\n"                         //
                                        "\n"                                               //
                                        "Additionally, the entrances of Deku Tree, Fire\n" //
                                        "Temple, Bottom of the Well and Gerudo Training\n" //
                                        "Ground are opened for both adult and child.",     //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
/*------------------------------                                                           //
|       BOSS ENTRANCES         |                                                           //
------------------------------*/                                                           //
Description bossEntrancesDesc         = Description({                                      //
                          /* English */ "Shuffle the pool of dungeon boss entrances.\n"    //
                                        "This affects the boss rooms of all stone and\n"   //
                                        "medallion dungeons.\n"                            //
                                        "\n"                                               //
                                        "Child and adult boss rooms can be shuffled\n"     //
                                        "separately.\n"                                    //
                                        "Child may be expected to defeat Phantom Ganon\n"  //
                                        "and/or Bongo Bongo.",                             //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
/*------------------------------                                                           //
|      OVERWORLD ENTRANCES     |                                                           //
------------------------------*/                                                           //
Description overworldEntrancesDesc    = Description({                                      //
                          /* English */ "Shuffle the pool of Overworld entrances, which\n" //
                                        "corresponds to almost all loading zones between\n"//
                                        "Overworld areas.\n"                               //
                                        "\n"                                               //
                                        "Some entrances are unshuffled to avoid issues:\n" //
                                        "- Hyrule Castle Courtyard and Garden entrance\n"  //
                                        "- Both Market Back Alley entrances\n"             //
                                        "- Gerudo Valley to Lake Hylia (unless entrances\n"//
                                        "  are decoupled)",                                //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
/*------------------------------                                                           //
|      INTERIOR ENTRANCES      |                                                           //
------------------------------*/                                                           //
Description interiorEntrancesOff      = Description({                                      //
                          /* English */ "Interior entrances will not be shuffled.",        //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
Description interiorEntrancesSimple   = Description({                                      //
                          /* English */ "Shuffle the pool of interior entrances which\n"   //
                                        "contains most Houses and all Great Fairies.",     //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
Description interiorEntrancesAll      = Description({                                      //
                          /* English */ "An extended version of 'Simple' with some extra\n"//
                                        "places:\n"                                        //
                                        "- Windmill\n"                                     //
                                        "- Link's House\n"                                 //
                                        "- Temple of Time\n"                               //
                                        "- Kakariko Potion Shop.",                         //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
/*------------------------------                                                           //
|       GROTTO ENTRANCES       |                                                           //
------------------------------*/                                                           //
Description grottoEntrancesDesc       = Description({                                      //
                          /* English */ "Shuffle the pool of grotto entrances, including\n"//
                                        "all graves, small Fairy Fountains and the Lost\n" //
                                        "Woods Stage.",                                    //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
/*------------------------------                                                           //
|          OWL DROPS           |                                                           //
------------------------------*/                                                           //
Description owlDropsDesc              = Description({                                      //
                          /* English */ "Randomize where Kaepora Gaebora (the Owl) drops\n"//
                                        "you at when you talk to him at Lake Hylia or at\n"//
                                        "the top of Death Mountain Trail.",                //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
/*------------------------------                                                           //
|          WARP SONGS          |                                                           //
------------------------------*/                                                           //
Description warpSongsDesc             = Description({                                      //
                          /* English */ "Randomize where each of the 6 warp songs leads to.",
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
/*------------------------------                                                           //
|       OVERWORLD SPAWNS       |                                                           //
------------------------------*/                                                           //
Description overworldSpawnsDesc       = Description({                                      //
                          /* English */ "Randomize where you start as Child or Adult when\n"
                                        "loading a save in the Overworld. This means you\n"//
                                        "may not necessarily spawn inside Link's House or\n"
                                        "Temple of Time.\n"                                //
                                        "\n"                                               //
                                        "This stays consistent after saving and loading the"
                                        "game again.",                                     //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
/*------------------------------                                                           //
|     MIXED ENTRANCE POOLS     |                                                           //
------------------------------*/                                                           //
Description mixedPoolsDesc            = Description({                                      //
                          /* English */ "Shuffle entrances into a mixed pool instead of\n" //
                                        "separate ones. For example, enabling the settings\n"
                                        "to shuffle grotto, dungeon, and overworld\n"      //
                                        "entrances and selecting grotto and dungeon\n"     //
                                        "entrances here will allow a dungeon to be inside a"
                                        "grotto or vice versa, while overworld entrances\n"//
                                        "are shuffled in their own separate pool and\n"    //
                                        "indoors stay vanilla.",                           //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
Description mixDungeonsDesc           = Description({                                      //
                          /* English */ "Dungeon entrances will be part of the mixed pool.",
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
Description mixOverworldDesc          = Description({                                      //
                          /* English */ "Overworld entrances will be part of the mixed\n"  //
                                        "pool.",                                           //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
Description mixInteriorsDesc          = Description({                                      //
                          /* English */ "Interior entrances will be part of the mixed pool.",
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
Description mixGrottosDesc            = Description({                                      //
                          /* English */ "Grotto entrances will be part of the mixed pool.",//
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
/*------------------------------                                                           //
|      DECOUPLED ENTRANCES     |                                                           //
------------------------------*/                                                           //
Description decoupledEntrancesDesc    = Description({                                      //
                          /* English */ "Decouple entrances when shuffling them. This means"
                                        "you are no longer guaranteed to end up back where "
                                        "you came from when you go back through an\n"      //
                                        "entrance. This also adds the one-way entrance from"
                                        "Gerudo Valley to Lake Hylia in the pool of\n"     //
                                        "overworld entrances when they are shuffled.\n"    //
                                        "Boss entrances are currently excluded from this\n"//
                                        "and remain coupled regardless.",                  //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
/*------------------------------                                                           //
|      BOMBCHUS IN LOGIC       |                                                           //
------------------------------*/                                                           //
Description bombchuLogicDesc          = Description({                                      //
                          /* English */ "Bombchus are properly considered in logic.\n"     //
                                        "They can be replenished in shops, or through\n"   //
                                        "bombchu drops, if those are enabled.\n"           //
                                        "\n"                                               //
                                        "Bombchu Bowling is opened by bombchus.",          //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
/*------------------------------                                                           //
|          AMMO DROPS          |                                                           //
------------------------------*/                                                           //
Description defaultAmmoDropsDesc      = Description({                                      //
                          /* English */ "Bombs, arrows, seeds, nuts, sticks and\n"         //
                                        "magic jars appear as normal.\n",                  //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
Description bombchuDropsDesc          = Description({                                      //
                          /* English */ "Bombs, arrows, seeds, nuts, sticks and\n"         //
                                        "magic jars appear as normal.\n"                   //
                                        "Bombchus can sometimes replace bomb drops.",      //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
Description noAmmoDropsDesc           = Description({                                      //
                          /* English */ "All ammo drops will be replaced by blue rupees,\n"//
                                        "except for Deku Sticks.\n"                        //
                                        "Ammo upgrades will only refill ammo by 10 units.",//
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
/*------------------------------                                                           //
|    HEART DROPS AND REFILLS   |                                                           //
------------------------------*/                                                           //
Description defaultHeartDropsDesc     = Description({                                      //
                          /* English */ "Heart drops will appear as normal.\n"             //
                                        "Health upgrades fully heal Link when picked up.\n"//
                                        "Fairies heal Link as normal.",                    //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
Description noHeartDropsDesc          = Description({                                      //
                          /* English */ "Heart drops will be replaced by green rupees.\n"  //
                                        "Health upgrades fully heal Link when picked up.\n"//
                                        "Fairies heal Link as normal.",                    //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
Description noHeartRefillDesc         = Description({                                      //
                          /* English */ "Heart drops will appear as normal.\n"             //
                                        "Health upgrades don't heal Link when picked up.\n"//
                                        "Fairies heal Link by only 3 hearts.",             //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
Description scarceHeartsDesc          = Description({                                      //
                          /* English */ "Heart drops will be replaced by green rupees.\n"  //
                                        "Health upgrades don't heal Link when picked up.\n"//
                                        "Fairies heal Link by only 3 hearts.",             //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
/*------------------------------                                                           //
|       MQ DUNGEON COUNT       |                                                           //
------------------------------*/                                                           //
Description mqDungeonCountDesc        = Description({                                      //
                          /* English */ "Specify the number of Master Quest dungeons to\n" //
                                        "appear in the game. Which dungeons become Master\n"
                                        "Quest will be chosen at random.",                 //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
/*------------------------------                                                           //
|        SET MQ DUNGEONS       |                                                           //
------------------------------*/                                                           //
Description setDungeonTypesDesc       = Description({                                      //
                          /* English */ "If set, you can choose specific dungeons to be\n" //
                                        "vanilla, MQ, or random",                          //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
