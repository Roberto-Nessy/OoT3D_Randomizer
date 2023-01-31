#include "descriptions.hpp"

// clang-format off
/*------------------------------
|            RACING            |                            *SCREEN WIDTH*
------------------------------*/       /*--------------------------------------------------*/
Description racingDesc                = Description({                                      //
                          /* English */ "Overrides personalization options that could\n"   //
                                        "affect how fast a seed is beaten.",               //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
/*------------------------------                                                           //
|     GOSSIP STONE HINTS       |                                                           //
------------------------------*/                                                           //
Description gossipStonesHintsDesc     = Description({                                      //
                          /* English */ "Gossip Stones can be made to give hints about\n"  //
                                        "where items can be found.\n"                      //
                                        "Different settings can be chosen to decide which\n"
                                        "item is needed to speak to Gossip Stones. Choosing"
                                        "to stick with the Mask of Truth will make the\n"  //
                                        "hints very difficult to obtain.\n"                //
                                        "Hints for 'on the way of the hero' are locations\n"
                                        "that contain items that are required to beat the\n"
                                        "game.",                                           //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
/*------------------------------                                                           //
|        HINT CLARITY          |                                                           //
------------------------------*/                                                           //
Description obscureHintsDesc          = Description({                                      //
                          /* English */ "Sets the difficulty of hints.\n"                  //
                                        "Obscure: Hints are unique for each thing, but\n"  //
                                        "the writing may be confusing.\n"                  //
                                        "E.g. Kokiri Sword > a butter knife",              //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
Description ambiguousHintsDesc        = Description({                                      //
                          /* English */ "Sets the difficulty of hints.\n"                  //
                                        "Ambiguous: Hints are clearly written, but may\n"  //
                                        "refer to more than one thing.\n"                  //
                                        "E.g. Kokiri Sword > a sword",                     //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
Description clearHintsDesc            = Description({                                      //
                          /* English */ "Sets the difficulty of hints.\n"                  //
                                        "Clear: Hints are clearly written and are unique\n"//
                                        "for each thing.\n"                                //
                                        "E.g. Kokiri Sword > the Kokiri Sword",            //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
/*------------------------------                                                           //
|      HINT DISTRIBUTION       |                                                           //
------------------------------*/                                                           //
Description uselessHintsDesc          = Description({                                      //
                          /* English */ "Only junk hints.",                                //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
Description balancedHintsDesc         = Description({                                      //
                          /* English */ "Recommended hint spread.",                        //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
Description strongHintsDesc           = Description({                                      //
                          /* English */ "More useful hints.",                              //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
Description veryStrongHintsDesc       = Description({                                      //
                          /* English */ "Many powerful hints.",                            //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
/*------------------------------                                                           //
|     MISCELLANEOUS HINTS      |                                                           //
------------------------------*/                                                           //
Description miscHintsDesc             = "Toggle some specific hints at locations other\n"  //
                                        "than Gossip Stones.";                             //
Description totAltarHintsDesc         = "The Temple of Time altar will reveal the locations"
                                        "of the Spiritual Stones as child and the\n"       //
                                        "Medallions as adult, but only if Compasses Show\n"//
                                        "Rewards is disabled.\n"                           //
                                        "\n"                                               //
                                        "It will also always reveal the requirements for\n"//
                                        "the Door of Time as child, and for Ganon Boss Key\n"
                                        "and Rainbow Bridge as adult.";                    //
Description ganonHintsDesc            = "Talking to Ganondorf in his boss room will tell\n"//
                                        "you the location of the Light Arrows and, if it\n"//
                                        "was shuffled, the Master Sword.";                 //
/*------------------------------                                                           //
|  MAP AND COMPASS GIVES INFO  |                                                           //
------------------------------*/                                                           //
Description compassesShowRewardsDesc  = Description({                                      //
                          /* English */ "Obtaining a dungeon compass will hint at the\n"   //
                                        "location of a Spiritual Stone or Medallion.\n"    //
                                        "\n"                                               //
                                        "If rewards are at the end of dungeons, the compass"
                                        "for dungeon X will show what reward is at X.\n"   //
                                        "Otherwise, it will show the area for the reward\n"//
                                        "that, in the vanilla game, is located at X.\n"    //
                                        "\n"                                               //
                                        "These hints will appear in the Gear menu on the\n"//
                                        "empty reward slots.",                             //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
Description compassesShowWotHDesc     = Description({                                      //
                          /* English */ "The in-game menu will reveal whether each\n"      //
                                        "dungeon is on the Way of the Hero, a barren\n"    //
                                        "location, or neither, if the compass for that\n"  //
                                        "dungeon has been collected.",                     //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
Description mapsShowDungeonModesDesc  = Description({                                      //
                          /* English */ "If any Master Quest dungeons will be randomly\n"  //
                                        "shuffled, the in-game menu will reveal whether\n" //
                                        "it is in its Vanilla or Master Quest form, if\n"  //
                                        "the map for the dungeon has been collected.\n"    //
                                        "Ganon's Castle and Gerudo Training Grounds are\n" //
                                        "always revealed, as they do not have maps.",      //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
/*------------------------------                                                           //
|       DAMAGE MULTIPLIER      |                                                           //
------------------------------*/                                                           //
Description damageMultiDesc           = Description({                                      //
                          /* English */ "Changes the amount of damage taken.\n"            //
                                        "\n"                                               //
                                        "If set to OHKO, Link will die in one hit.",       //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
/*------------------------------                                                           //
|        STARTING TIME         |                                                           //
------------------------------*/                                                           //
Description startingTimeDesc          = Description({                                      //
                          /* English */ "Change up Link's sleep routine.",                 //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
/*------------------------------                                                           //
|       CHEST ANIMATIONS       |                                                           //
------------------------------*/                                                           //
Description chestAnimDesc             = Description({                                      //
                          /* English */ "Choose if you want the slow animation to play\n"  //
                                        "if a chest contains a major item.\n",             //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
/*------------------------------                                                           //
|     CHEST SIZE AND COLOR     |                                                           //
------------------------------*/                                                           //
Description chestSizeDesc             = Description({                                      //
                          /* English */ "This option will change the appearance of all\n"  //
                                        "regular chests depending on their contents:\n"    //
                                        "Major Items    =    Big Wooden Chests\n"          //
                                        "Lesser Items   =    Small Wooden Chests\n"        //
                                        "Boss Keys      =    Big Fancy Chests\n"           //
                                        "Small Keys     =    Small Fancy Chests",          //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
/*------------------------------                                                           //
|        INGAME SPOILERS       |                                                           //
------------------------------*/                                                           //
Description ingameSpoilersShowDesc    = Description({                                      //
                          /* English */ "Every spoiler is shown.",                         //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
Description ingameSpoilersHideDesc    = Description({                                      //
                          /* English */ "Hides the spheres page and only shows a\n"        //
                                        "location's item after it has been found.",        //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
/*------------------------------                                                           //
|    RANDOM TRAP DAMAGE TYPE   |                                                           //
------------------------------*/                                                           //
Description randomTrapDmgDesc         = Description({                                      //
                          /* English */ "All traps will be the base game ice trap",        //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
                                                                                           //
Description basicTrapDmgDesc          = Description({                                      //
                          /* English */ "All alternative traps will cause a small damage\n"//
                                        "and no other negative effects",                   //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
                                                                                           //
Description advancedTrapDmgDesc       = Description({                                      //
                          /* English */ "Choose which advanced traps may appear from the\n"//
                                        "list below",                                      //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
                                                                                           //
Description fireTrapDesc              = Description({                                      //
                          /* English */ "This trap will set you on fire, burning your\n"   //
                                        "Deku Shield if it's equipped.",                   //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
                                                                                           //
Description antiFairyTrapDesc         = Description({                                      //
                          /* English */ "This dangerous fairy will inflict up to 8 hearts\n"
                                        "of damage, but it usually doesn't kill you if you\n"
                                        "have less than that.",                            //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
                                                                                           //
Description curseTrapsDesc            = Description({                                      //
                          /* English */ "Some traps will apply status effects for 1 minute.",
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
/*------------------------------                                                           //
|      EXTRA ARROW EFFECTS     |                                                           //
------------------------------*/                                                           //
Description extraArrowEffectsDesc     = Description({                                      //
                          /* English */ "Ice Arrows will act like blue fire, melting red\n"//
                                        "ice and breaking mud walls in Dodongo's Cavern.\n\n"
                                        "Light Arrows will activate Sun Switches like in\n"//
                                        "Majora's Mask.",                                  //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
