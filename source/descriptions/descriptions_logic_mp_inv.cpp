#include "descriptions.hpp"

// clang-format off
/*------------------------------
|            LOGIC             |                            *SCREEN WIDTH*
------------------------------*/       /*--------------------------------------------------*/
Description logicGlitchless           = Description({                                      //
                          /* English */ "No glitches are required, but may require some\n" //
                                        "minor tricks. Add minor tricks to consider for\n" //
                                        "logic in Logical Tricks.",                        //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
Description logicGlitched             = Description({                                      //
                          /* English */ "The glitches you enable at the set difficulty\n"  //
                                        "or below may be required.\n"                      //
                                        "\n"                                               //
                                        "In development, but still usable.",               //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
Description logicNoLogic              = Description({                                      //
                          /* English */ "Maximize randomization, All locations are\n"      //
                                        "considered available. MAY BE IMPOSSIBLE TO BEAT.",//
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
Description logicVanilla              = Description({                                      //
                          /* English */ "For those who want to play the game normally but\n"
                                        "with the improvements of the randomizer. All\n"   //
                                        "locations will contain their vanilla items. This\n"
                                        "supercedes all item shuffle, logic, hint, and\n"  //
                                        "item pool settings. You can still use non-vanilla\n"
                                        "world settings such as adult start or entrance\n" //
                                        "shuffle, but the game may require glitches to\n"  //
                                        "complete if you do.",                             //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
/*------------------------------                                                           //
|   ALL LOCATIONS REACHABLE    |                                                           //
------------------------------*/                                                           //
Description locationsReachableDesc    = Description({                                      //
                          /* English */ "When this options is enabled, the randomizer will\n"
                                        "guarantee that every item is obtainable and every\n"
                                        "location is reachable. When disabled, only\n"     //
                                        "required items and locations to beat the game\n"  //
                                        "will be guaranteed reachable.",                   //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
/*------------------------------                                                           //
|     NIGHT GS EXPECT SUNS     |                                                           //
------------------------------*/                                                           //
Description nightGSDesc               = Description({                                      //
                          /* English */ "GS Tokens that can only be obtained during the\n" //
                                        "night expect you to have Sun's Song to collect\n" //
                                        "them. This prevents needing to wait until night\n"//
                                        "for some locations.",                             //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
/*------------------------------                                                           //
|     START WITH CONSUMABLES   |                                                           //
------------------------------*/                                                           //
Description startWithConsumablesDesc  = Description({                                      //
                          /* English */ "Start the game with maxed out Deku Sticks and Deku"
                                        "Nuts.",                                           //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
/*------------------------------                                                           //
|     START WITH MAX RUPEES    |                                                           //
------------------------------*/                                                           //
Description startWithMaxRupeesDesc    = Description({                                      //
                          /* English */ "Start the game with a full wallet.\n"             //
                                        "Wallet upgrades will also fill the wallet.",      //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
/*------------------------------                                                           //
|        STARTING HEALTH       |                                                           //
------------------------------*/                                                           //
Description startingHealthDesc        = Description({                                      //
                          /* English */ "If you start with 0 hearts, Link will be instantly"
                                        "KO'd not only by any damage source, but also by\n"//
                                        "recovery hearts and fairies. Sometimes guards too.\n"
                                        "You can safely pick up Heart Pieces and Containers"
                                        "though, and the effects will end when you obtain\n"
                                        "at least one heart.",                             //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
/*------------------------------                                                           //
|      STARTING BUNNY HOOD     |                                                           //
------------------------------*/                                                           //
Description startingBunnyHoodDesc     = Description({                                      //
                          /* English */ "NOTE: Staring with the bunny hood is experimental."
                                        "Currently the bunny hood will get overwriten when "
                                        "you obtain the Weird Egg and you will need to get "
                                        "it again afterwards.",                            //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
/*------------------------------                                                           //
|          ITEM POOL           |                                                           //
------------------------------*/                                                           //
Description itemPoolPlentiful         = Description({                                      //
                          /* English */ "Extra major items are added to the pool.",        //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
Description itemPoolBalanced          = Description({                                      //
                          /* English */ "Original item pool.",                             //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
Description itemPoolScarce            = Description({                                      //
                          /* English */ "Some excess items are removed, including health\n"//
                                        "upgrades.",                                       //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
Description itemPoolMinimal           = Description({                                      //
                          /* English */ "Most excess items are removed.",                  //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
/*------------------------------                                                           //
|          ICE TRAPS           |                                                           //
------------------------------*/                                                           //
Description iceTrapsOff               = Description({                                      //
                          /* English */ "All Ice Traps are removed.",                      //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
Description iceTrapsNormal            = Description({                                      //
                          /* English */ "Only Ice Traps from the base item pool are placed.",
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
Description iceTrapsExtra             = Description({                                      //
                          /* English */ "Chance to add extra Ice Traps when junk items are\n"
                                        "added to the itempool.",                          //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
Description iceTrapsMayhem            = Description({                                      //
                          /* English */ "All added junk items will be Ice Traps.",         //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
Description iceTrapsOnslaught         = Description({                                      //
                          /* English */ "All junk items will be replaced by Ice Traps, even"
                                        "those in the base pool.",                         //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
/*------------------------------                                                           //
|    REMOVE DOUBLE DEFENSE     |                                                           //
------------------------------*/                                                           //
Description removeDDDesc              = Description({                                      //
                          /* English */ "If set the double defense item will be removed\n" //
                                        "from the item pool for balanced and plentiful.",  //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
/*------------------------------                                                           //
|   PROGRESSSIVE GORON SOWRD   |                                                           //
------------------------------*/                                                           //
Description progGoronSword            = Description({                                      //
                          /* English */ "Giant's Knife will always be found\n"             //
                                        "before Biggoron's Sword. Medigoron only starts\n" //
                                        "selling new knives once the Giant's Knife\n"      //
                                        "has been found and broken.",                      //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
/*------------------------------                                                           //
|       RUPEES AS AMMO         |                                                           //
------------------------------*/                                                           //
Description retroAmmoDesc             = Description({                                      //
                          /* English */ "If you run out of ammo or magic, you'll use\n"    //
                                        "rupees instead.",                                 //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
/*------------------------------                                                           //
|         MULTIPLAYER          |                                                           //
------------------------------*/                                                           //
Description mp_EnabledDesc            = Description({                                      //
                          /* English */ "Enables multiplayer.\n"                           //
                                        "Other players will always be seen and heard\n"    //
                                        "regardless of the other settings.",               //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
Description mp_SharedProgressDesc     = Description({                                      //
                          /* English */ "Progress and certain actors will be synced between"
                                        "everyone in the network that has this option on,\n"
                                        "the same seed hash, and the same sync id.",       //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
Description mp_SyncIdDesc             = Description({                                      //
                          /* English */ "Limits shared progress to only sync with other\n" //
                                        "players that have the same sync ID. This is only\n"
                                        "necessary to set if multiple groups of players\n" //
                                        "play on the same seed hash, but only want to share"
                                        "their progress with certain people.\n"            //
                                        "For example, when doing a 2v2 race.\n"            //
                                        "\n"                                               //
                                        "Does not affect seed generation.",                //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
Description mp_SharedHealthDesc       = Description({                                      //
                          /* English */ "Syncs health when shared progress is on,\n"       //
                                        "otherwise just shares the damage and recovery.",  //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
Description mp_SharedRupeesDesc       = Description({                                      //
                          /* English */ "Syncs rupees when shared progress is on,\n"       //
                                        "otherwise just shares the gain and loss.",        //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
Description mp_SharedAmmoDesc         = Description({                                      //
                          /* English */ "Syncs ammo when shared progress is on,\n"         //
                                        "otherwise just shares the gain and loss.",        //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
/*------------------------------                                                           //
|       EXCLUDE LOCATIONS      |                                                           //
------------------------------*/                                                           //
Description excludeLocationDesc       = Description({                                      //
                          /* English */ "Decide which locations you want to exclude from\n"//
                                        "the location pool. Locations that require an item\n"
                                        "to be placed at them based on your current\n"     //
                                        "settings cannot be excluded and won't be shown\n" //
                                        "unless you change your settings.\n"               //
                                        "\n"                                               //
                                        "If you exclude too many locations, it might not\n"//
                                        "be possible to fill the world.",                  //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
