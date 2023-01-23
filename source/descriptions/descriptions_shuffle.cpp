#include "descriptions.hpp"

// clang-format off
/*------------------------------
|   SHUFFLE DUNGEON REWARDS    |                            *SCREEN WIDTH*
------------------------------*/       /*--------------------------------------------------*/
Description shuffleRewardsEndOfDungeon= Description({                                      //
                          /* English */ "Medallions and Spiritual Stones will be given as\n"
                                        "rewards for beating dungeons.\n"                  //
                                        "\n"                                               //
                                        "This setting will force Link's Pocket to be a\n"  //
                                        "Medallion or Spiritual Stone.",                   //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
Description shuffleRewardsAnyDungeon  = Description({                                      //
                          /* English */ "Medallions and Spiritual Stones can only appear\n"//
                                        "inside of dungeons.",                             //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
Description shuffleRewardsOverworld   = Description({                                      //
                          /* English */ "Medallions and Spiritual Stones can only appear\n"//
                                        "outside of dungeons.",                            //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
Description shuffleRewardsAnywhere    = Description({                                      //
                          /* English */ "Medallions and Spiritual Stones can appear\n"     //
                                        "anywhere.",                                       //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
/*------------------------------                                                           //
|        LINK'S POCKET         |                                                           //
------------------------------*/                                                           //
Description linksPocketDungeonReward  = Description({                                      //
                          /* English */ "Link will start with a Dungeon Reward in his\n"   //
                                        "inventory.",                                      //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
Description linksPocketAdvancement    = Description({                                      //
                          /* English */ "Link will receive a random advancement item at the"
                                        "beginning of the playthrough.",                   //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
Description linksPocketAnything       = Description({                                      //
                          /* English */ "Link will receive a random item from the item pool"
                                        "at the beginning of the playthrough.",            //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
Description linksPocketNothing        = Description({                                      //
                          /* English */ "Link will start with a very useful green rupee.", //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
/*------------------------------                                                           //
|         SONG SHUFFLE         |                                                           //
------------------------------*/                                                           //
Description songsSongLocations        = Description({                                      //
                          /* English */ "Songs will only appear at locations that normally\n"
                                        "teach songs.",                                    //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
Description songsDungeonRewards       = Description({                                      //
                          /* English */ "Songs appear at the end of dungeons. For major\n" //
                                        "dungeons, they will be at the boss heart container"
                                        "location. The remaining 4 songs are placed at:\n" //
                                        "- Zelda's Lullaby Location\n"                     //
                                        "- Ice Cavern's Serenade of Water Location\n"      //
                                        "- Bottom of the Well's Lens of Truth Location\n"  //
                                        "- Gerudo Training Ground's Ice Arrow Location",   //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
Description songsAllLocations         = Description({                                      //
                          /* English */ "Songs can appear in any location.",               //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
/*------------------------------                                                           //
|         SHOPSANITY           |                                                           //
------------------------------*/                                                           //
Description shopsOff                  = Description({                                      //
                          /* English */ "All shop items will be the same as vanilla.",     //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
Description shopsZero                 = Description({                                      //
                          /* English */ "Vanilla shop items will be shuffled among\n"      //
                                        "different shops.",                                //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
Description shopsOne                  = Description({                                      //
                          /* English */ "Vanilla shop items will be shuffled among\n"      //
                                        "different shops, and each shop will contain\n"    //
                                        "one non-vanilla shop item.",                      //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
Description shopsTwo                  = Description({                                      //
                          /* English */ "Vanilla shop items will be shuffled among\n"      //
                                        "different shops, and each shop will contain\n"    //
                                        "two non-vanilla shop items.",                     //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
Description shopsThree                = Description({                                      //
                          /* English */ "Vanilla shop items will be shuffled among\n"      //
                                        "different shops, and each shop will contain\n"    //
                                        "three non-vanilla shop items.",                   //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
Description shopsFour                 = Description({                                      //
                          /* English */ "Vanilla shop items will be shuffled among\n"      //
                                        "different shops, and each shop will contain\n"    //
                                        "four non-vanilla shop items.",                    //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
Description shopsRandom               = Description({                                      //
                          /* English */ "Vanilla shop items will be shuffled among\n"      //
                                        "different shops, and each shop will contain\n"    //
                                        "1-4 non-vanilla shop items.",                     //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
/*------------------------------                                                           //
|         TOKENSANITY          |                                                           //
------------------------------*/                                                           //
Description tokensOff                 = Description({                                      //
                          /* English */ "GS locations will not be shuffled.",              //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
Description tokensDungeon             = Description({                                      //
                          /* English */ "This only shuffles the GS locations that are\n"   //
                                        "within dungeons, increasing the value of most\n"  //
                                        "dungeons and making internal dungeon exploration\n"
                                        "more diverse.",                                   //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
Description tokensOverworld           = Description({                                      //
                          /* English */ "This only shuffles the GS locations that are\n"   //
                                        "outside of dungeons.",                            //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
Description tokensAllTokens           = Description({                                      //
                          /* English */ "Effectively adds 100 new locations for items to\n"//
                                        "appear.",                                         //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
/*------------------------------                                                           //
|        SCRUB SHUFFLE         |                                                           //
------------------------------*/                                                           //
Description scrubsOff                 = Description({                                      //
                          /* English */ "Only the 3 Scrubs that give one-time items in the\n"
                                        "vanilla game (PoH, Deku Nut capacity, and Deku\n" //
                                        "Stick capacity) will have random items.",         //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
Description scrubsAffordable          = Description({                                      //
                          /* English */ "All Scrub prices will be reduced to 10 rupees each",
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
Description scrubsExpensive           = Description({                                      //
                          /* English */ "All Scrub prices will be their vanilla prices.\n" //
                                        "This will require spending over 1000 rupees on\n" //
                                        "Scrubs.",                                         //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
Description scrubsRandomPrices        = Description({                                      //
                          /* English */ "All Scrub prices will be between 0-95 rupees. This"
                                        "will on average be very, very expensive overall.",//
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
/*------------------------------                                                           //
|         SHUFFLE COWS         |                                                           //
------------------------------*/                                                           //
Description shuffleCowsDesc           = Description({                                      //
                          /* English */ "Enabling this will let cows give you items upon\n"//
                                        "performing Epona's song in front of them. There\n"//
                                        "are 9 cows, and an extra in MQ Jabu.",            //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
/*------------------------------                                                           //
|     SHUFFLE KOKIRI SWORD     |                                                           //
------------------------------*/                                                           //
Description kokiriSwordDesc           = Description({                                      //
                          /* English */ "Enabling this shuffles the Kokiri Sword into the\n"
                                        "item pool.\n"                                     //
                                        "\n"                                               //
                                        "This will require extensive use of sticks until\n"//
                                        "the sword is found.",                             //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
/*------------------------------                                                           //
|     SHUFFLE MASTER SWORD     |                                                           //
------------------------------*/                                                           //
Description masterSwordDesc           = Description({                                      //
                          /* English */ "Enabling this shuffles the Master Sword into the\n"
                                        "item pool.\n"                                     //
                                        "\n"                                               //
                                        "Adult Link will start with a second free item\n"  //
                                        "instead of the Master Sword. If you haven't found\n"
                                        "the Master Sword before facing Ganon, you won't\n"//
                                        "receive it during the fight.",                    //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
/*------------------------------                                                           //
|       SHUFFLE OCARINAS       |                                                           //
------------------------------*/                                                           //
Description ocarinasDesc              = Description({                                      //
                          /* English */ "Enabling this shuffles the Fairy Ocarina and the\n"
                                        "Ocarina of Time into the item pool.\n"            //
                                        "\n"                                               //
                                        "This will require finding an Ocarina before being\n"
                                        "able to play songs.",                             //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
/*------------------------------                                                           //
|      SHUFFLE WEIRD EGG       |                                                           //
------------------------------*/                                                           //
Description weirdEggDesc              = Description({                                      //
                          /* English */ "Enabling this shuffles the Weird Egg from Malon\n"//
                                        "into the item pool.\n"                            //
                                        "This will require finding the Weird Egg to talk to"
                                        "Zelda in Hyrule Castle, which in turn locks\n"    //
                                        "rewards from Impa, Saria, Malon, and Talon.",     //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
/*------------------------------                                                           //
|    SHUFFLE ZELDAS LETTER     |                                                           //
------------------------------*/                                                           //
Description zeldasLetterDesc          = Description({                                      //
                          /* English */ "Enabling this shuffles Zelda's Letter into the\n" //
                                        "item pool.\n"                                     //
                                        "This will require finding the letter to open the\n"
                                        "Happy Mask Shop and the gate in Kakariko if it is\n"
                                        "set to closed.",                                  //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
/*------------------------------                                                           //
|     SHUFFLE GERUDO TOKEN     |                                                           //
------------------------------*/                                                           //
Description gerudoTokenDesc           = Description({                                      //
                          /* English */ "Enabling this shuffles the Gerudo Token into the\n"
                                        "item pool.\n"                                     //
                                        "\n"                                               //
                                        "The Gerudo Token is required to enter the Gerudo\n"
                                        "Training Ground.",                                //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
/*------------------------------                                                           //
|      SHUFFLE MAGIC BEANS     |                                                           //
------------------------------*/                                                           //
Description magicBeansDesc            = Description({                                      //
                          /* English */ "Enabling this adds a pack of 10 beans to the item\n"
                                        "pool and changes the Magic Bean Salesman to sell a"
                                        "random item at a price of 60 rupees.",            //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
/*------------------------------                                                           //
|   SHUFFLE FROG SONG RUPEES   |                                                           //
------------------------------*/                                                           //
Description frogSongRupeesDesc        = Description({                                      //
                          /* English */ "Enabling this adds 5 Purple Rupees to the item\n" //
                                        "pool and shuffles the rewards from playing Zelda's"
                                        "Lullaby, Epona's Song, Saria's Song, Sun's Song,\n"
                                        "and Song of Time to the frogs in Zora's River.\n",//
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
/*------------------------------                                                           //
|       SHUFFLE MERCHANTS      |                                                           //
------------------------------*/                                                           //
Description merchantsDesc             = Description({                                      //
                          /* English */ "Enabling this changes Medigoron, Granny and the\n"//
                                        "Carpet Salesman to sell a random item once at a\n"//
                                        "high price (100 for Granny, 200 for the others).\n\n"
                                        "A Giant's Knife and a pack of Bombchus will be\n" //
                                        "added to the item pool, and one of the bottles\n" //
                                        "will contain a Blue Potion.",                     //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
Description merchantsHintsDesc        = Description({                                      //
                          /* English */ "These hints will make the merchants tell you\n"   //
                                        "which item they're selling.\n"                    //
                                        "\n"                                               //
                                        "The Hint Clarity setting will affect how they\n"  //
                                        "refer to the item.",                              //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
/*------------------------------                                                           //
|     SHUFFLE ADULT TRADE      |                                                           //
------------------------------*/                                                           //
Description adultTradeDesc            = Description({                                      //
                          /* English */ "Enabling this adds all of the adult trade quest\n"//
                                        "items to the pool, each of which can be traded\n" //
                                        "for a unique reward. You will be able to choose\n"//
                                        "which of your owned adult trade items is visible\n"
                                        "in the inventory by selecting the item and using\n"
                                        "the L and R buttons. If disabled, only the Claim\n"
                                        "Check will be found in the pool.",                //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
/*------------------------------                                                           //
|    SHUFFLE CHEST MINIGAME    |                                                           //
------------------------------*/                                                           //
Description chestMinigameDesc         = Description({                                      //
                          /* English */ "The 5 key chests in the Treasure Chest Shop will\n"
                                        "be randomized, and the 6 keys will be added to the"
                                        "pool. The rupee chests will be replaced by traps.\n"
                                        "Also, the shop owner is on vacation, so he can't\n"
                                        "close any chests or doors once you leave.\n"      //
                                        "\n"                                               //
                                        "If you choose the \"pack\" option, you will get\n"//
                                        "all the keys at once, in a single item.",         //
                          /* French  */ "",                                                //
                          /* Spanish */ "",                                                //
                          /* Italian */ "",                                                //
                          /* German  */ "",                                                //
                                        });                                                //
