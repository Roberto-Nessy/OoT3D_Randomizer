#include "descriptions.hpp"

// clang-format off
const std::vector<std::string_view> GlitchDifficulties{
    //            English        Fr  Es  It  De
    Description({"Disabled",     "", "", "", ""}),
    Description({"Novice",       "", "", "", ""}),
    Description({"Intermediate", "", "", "", ""}),
    Description({"Advanced",     "", "", "", ""}),
    Description({"Expert",       "", "", "", ""}),
    Description({"Hero",         "", "", "", ""}),
};

/*------------------------------
|           GLITCHES           |                                           *SCREEN WIDTH*
------------------------------*/                       /*--------------------------------------------------*/
Description ToggleAllGlitchesDesc                     = Description({                                      //
                                          /* English */ "Set all glitches to the selected difficulty, or\n"//
                                                        "the closest available below.",                    //
                                          /* French  */ "",                                                //
                                          /* Spanish */ "",                                                //
                                          /* Italian */ "",                                                //
                                          /* German  */ "",                                                //
                                                        });                                                //
/* Restricted Items */                                                                                     //
Description GlitchRestrictedItemsDescDisabled         = Description({                                      //
                                          /* English */ "Swapping an item that can normally be used in an\n"
                                                        "area with one that would be dimmed will let you\n"//
                                                        "use that item for 1 frame after closing your\n"   //
                                                        "inventory. This can be useful on its own or in\n" //
                                                        "combination with other glitches.",                //
                                          /* French  */ "",                                                //
                                          /* Spanish */ "",                                                //
                                          /* Italian */ "",                                                //
                                          /* German  */ "",                                                //
                                                        });                                                //
Description GlitchRestrictedItemsDescNovice           = Description({                                      //
                                          /* English */ "You may be required to use restricted items.",    //
                                          /* French  */ "",                                                //
                                          /* Spanish */ "",                                                //
                                          /* Italian */ "",                                                //
                                          /* German  */ "",                                                //
                                                        });                                                //
/* Super Stab */                                                                                           //
Description GlitchSuperStabDescDisabled               = Description({                                      //
                                          /* English */ "Forcing sticks to unequip during a crouch stab by\n"
                                                        "breaking it and moving them in your inventory has\n"
                                                        "the effect of hitting all spherical collision.",  //
                                          /* French  */ "",                                                //
                                          /* Spanish */ "",                                                //
                                          /* Italian */ "",                                                //
                                          /* German  */ "",                                                //
                                                        });                                                //
Description GlitchSuperStabDescNovice                 = Description({                                      //
                                          /* English */ "You may be expected to hit switches or kill gold\n"
                                                        "skulltulas with a super stab.",                   //
                                          /* French  */ "",                                                //
                                          /* Spanish */ "",                                                //
                                          /* Italian */ "",                                                //
                                          /* German  */ "",                                                //
                                                        });                                                //
/* ISG */                                                                                                  //
Description GlitchISGDescDisabled                     = Description({                                      //
                                          /* English */ "Shortened to ISG, allows Link's melee weapon to\n"//
                                                        "be in a constant swinging state. Simply touching\n"
                                                        "objects with this causes them to get hit.\n"      //
                                                        "Putting away the weapon while ISG is on hits\n"   //
                                                        "any object with a spherical hitbox,\n"            //
                                                        "such as small skulltulas. It is initiated by\n"   //
                                                        "interrupting a crouch stab.",                     //
                                          /* French  */ "",                                                //
                                          /* Spanish */ "",                                                //
                                          /* Italian */ "",                                                //
                                          /* German  */ "",                                                //
                                                        });                                                //
Description GlitchISGDescNovice                       = Description({                                      //
                                          /* English */ "ISG may be required to kill certain enemies,\n"   //
                                                        "or to Bomb Hover when enabled.",                  //
                                          /* French  */ "",                                                //
                                          /* Spanish */ "",                                                //
                                          /* Italian */ "",                                                //
                                          /* German  */ "",                                                //
                                                        });                                                //
Description GlitchISGDescIntermediate                 = Description({                                      //
                                          /* English */ "You may be required to use a bomb to activate ISG.",
                                          /* French  */ "",                                                //
                                          /* Spanish */ "",                                                //
                                          /* Italian */ "",                                                //
                                          /* German  */ "",                                                //
                                                        });                                                //
Description GlitchISGDescAdvanced                     = Description({                                      //
                                          /* English */ "You may be required to use a bomb to activate ISG\n"
                                                        "repeatedly or while under attack.",               //
                                          /* French  */ "",                                                //
                                          /* Spanish */ "",                                                //
                                          /* Italian */ "",                                                //
                                          /* German  */ "",                                                //
                                                        });                                                //
/* Hover */                                                                                                //
Description GlitchHoverDescDisabled                   = Description({                                      //
                                          /* English */ "Hovering allows Link to consecutively backflip\n" //
                                                        "in the air without falling. By shielding\n"       //
                                                        "damage with ISG on, Link will stay in midair.\n"  //
                                                        "While bombs aren't always required, this option\n"//
                                                        "will always expect them to be used.\n"            //
                                                        "\n"                                               //
                                                        "Requires ISG to be enabled.",                     //
                                          /* French  */ "",                                                //
                                          /* Spanish */ "",                                                //
                                          /* Italian */ "",                                                //
                                          /* German  */ "",                                                //
                                                        });                                                //
Description GlitchHoverDescNovice                     = Description({                                      //
                                          /* English */ "Only bombchus are required for hovering.",        //
                                          /* French  */ "",                                                //
                                          /* Spanish */ "",                                                //
                                          /* Italian */ "",                                                //
                                          /* German  */ "",                                                //
                                                        });                                                //
Description GlitchHoverDescIntermediate               = Description({                                      //
                                          /* English */ "Some hovers may require that you start from flat\n"
                                                        "terrain, which requires somewhat precise timing.",//
                                          /* French  */ "",                                                //
                                          /* Spanish */ "",                                                //
                                          /* Italian */ "",                                                //
                                          /* German  */ "",                                                //
                                                        });                                                //
Description GlitchHoverDescAdvanced                   = Description({                                      //
                                          /* English */ "Usage of regular bombs will now also be expected,\n"
                                                        "which may require consecutive precise timings.",  //
                                          /* French  */ "",                                                //
                                          /* Spanish */ "",                                                //
                                          /* Italian */ "",                                                //
                                          /* German  */ "",                                                //
                                                        });                                                //
/* Bomb OI */                                                                                              //
Description GlitchBombOIDescDisabled                  = Description({                                      //
                                          /* English */ "Allowing a bomb to explode in Link's hands while\n"
                                                        "moving and then attempting to pull out a cutscene\n"
                                                        "item on a specific frame will cause Link to play\n"
                                                        "an invisible ocarina instead.\n"                  //
                                                        "This will only work if bombs are not dimmed on the"
                                                        "frame you use the cutscene item.",                //
                                          /* French  */ "",                                                //
                                          /* Spanish */ "",                                                //
                                          /* Italian */ "",                                                //
                                          /* German  */ "",                                                //
                                                        });                                                //
Description GlitchBombOIDescNovice                    = Description({                                      //
                                          /* English */ "You may be expected to use ocarina items with a\n"//
                                                        "bomb to play warp songs.",                        //
                                          /* French  */ "",                                                //
                                          /* Spanish */ "",                                                //
                                          /* Italian */ "",                                                //
                                          /* German  */ "",                                                //
                                                        });                                                //
Description GlitchBombOIDescIntermediate              = Description({                                      //
                                          /* English */ "You may be expected to use ocarina items with a\n"//
                                                        "bomb to play the ocarina where Link's position\n" //
                                                        "matters.",                                        //
                                          /* French  */ "",                                                //
                                          /* Spanish */ "",                                                //
                                          /* Italian */ "",                                                //
                                          /* German  */ "",                                                //
                                                        });                                                //
Description GlitchBombOIDescAdvanced                  = Description({                                      //
                                          /* English */ "You may be expected to use restricted items to use"
                                                        "the cutscene item or to make the bombs usable on\n"
                                                        "the correct frame.",                              //
                                          /* French  */ "",                                                //
                                          /* Spanish */ "",                                                //
                                          /* Italian */ "",                                                //
                                          /* German  */ "",                                                //
                                                        });                                                //
Description GlitchBombOIDescExpert                    = Description({                                      //
                                          /* English */ "You may be expected to use restricted items to\n" //
                                                        "perform ocarina items where Link's position isn't\n"
                                                        "particularly lenient",
                                                        });                                                //
/* Hover Boost */                                                                                          //
Description GlitchHoverBoostDescDisabled              = Description({                                      //
                                          /* English */ "Equipping hover boots when Link takes damage will\n"
                                                        "cause him to keep the high knockback speed and\n" //
                                                        "lets him traverse large gaps.\n"                  //
                                                        "If performed at the edge of a platform Link will\n"
                                                        "instead perform a mega jump which has less range\n"
                                                        "but more height than a hover boost.",             //
                                          /* French  */ "",                                                //
                                          /* Spanish */ "",                                                //
                                          /* Italian */ "",                                                //
                                          /* German  */ "",                                                //
                                                        });                                                //
Description GlitchHoverBoostDescNovice                = Description({                                      //
                                          /* English */ "Hover boosts that do not need the maximum speed\n"//
                                                        "may be required.",                                //
                                          /* French  */ "",                                                //
                                          /* Spanish */ "",                                                //
                                          /* Italian */ "",                                                //
                                          /* German  */ "",                                                //
                                                        });                                                //
Description GlitchHoverBoostDescIntermediate          = Description({                                      //
                                          /* English */ "Hover boosts that do need the maximum speed may be"
                                                        "required.",                                       //
                                          /* French  */ "",                                                //
                                          /* Spanish */ "",                                                //
                                          /* Italian */ "",                                                //
                                          /* German  */ "",                                                //
                                                        });                                                //
Description GlitchHoverBoostDescAdvanced              = Description({                                      //
                                          /* English */ "Hover boosts that use more complex movement during"
                                                        "the hover may be required.",                      //
                                          /* French  */ "",                                                //
                                          /* Spanish */ "",                                                //
                                          /* Italian */ "",                                                //
                                          /* German  */ "",                                                //
                                                        });                                                //
/* Super Slide */                                                                                          //
Description GlitchSuperSlideDescDisabled              = Description({                                      //
                                          /* English */ "Holding the circle pad just outside the dead zone\n"
                                                        "will cause Link to turn on the spot which locks\n"//
                                                        "his speed. This can be used to preserve high\n"   //
                                                        "speeds indefinitely.",                            //
                                          /* French  */ "",                                                //
                                          /* Spanish */ "",                                                //
                                          /* Italian */ "",                                                //
                                          /* German  */ "",                                                //
                                                        });                                                //
Description GlitchSuperSlideDescNovice                = Description({                                      //
                                          /* English */ "Forward extended super slides (FESSes) where Link\n"
                                                        "is damaged by an explosion may be required.",     //
                                          /* French  */ "",                                                //
                                          /* Spanish */ "",                                                //
                                          /* Italian */ "",                                                //
                                          /* German  */ "",                                                //
                                                        });                                                //
Description GlitchSuperSlideDescIntermediate          = Description({                                      //
                                          /* English */ "Hammer extended super slides where the recoil from"
                                                        "a hammer crouch stab is used may be required.",   //
                                          /* French  */ "",                                                //
                                          /* Spanish */ "",                                                //
                                          /* Italian */ "",                                                //
                                          /* German  */ "",                                                //
                                                        });                                                //
Description GlitchSuperSlideDescAdvanced              = Description({                                      //
                                          /* English */ "Hyper Extended Super Slides (HESSes) and\n"       //
                                                        "damageless FESSes where Link rolls into a bomb may"
                                                        "be required.",                                    //
                                          /* French  */ "",                                                //
                                          /* Spanish */ "",                                                //
                                          /* Italian */ "",                                                //
                                          /* German  */ "",                                                //
                                                        });                                                //
Description GlitchSuperSlideDescExpert                = Description({                                      //
                                          /* English */ "HESSes with more precise movement may be required.",
                                          /* French  */ "",                                                //
                                          /* Spanish */ "",                                                //
                                          /* Italian */ "",                                                //
                                          /* German  */ "",                                                //
                                                        });                                                //
/* Megaflip */                                                                                             //
Description GlitchMegaflipDescDisabled                = Description({                                      //
                                          /* English */ "A backflip or sidehop with high speed from an\n"  //
                                                        "attack hitting your shield during i-frames. This\n"
                                                        "is normally achieved by rolling into an explosion.\n"
                                                        "Equipping hover boots to preserve the high speed\n"
                                                        "when landing is known as a hoverflip.",           //
                                          /* French  */ "",                                                //
                                          /* Spanish */ "",                                                //
                                          /* Italian */ "",                                                //
                                          /* German  */ "",                                                //
                                                        });                                                //
Description GlitchMegaflipDescNovice                  = Description({                                      //
                                          /* English */ "You may be expected to perform megaflips on flat\n"
                                                        "ground with bombs.",                              //
                                          /* French  */ "",                                                //
                                          /* Spanish */ "",                                                //
                                          /* Italian */ "",                                                //
                                          /* German  */ "",                                                //
                                                        });                                                //
Description GlitchMegaflipDescIntermediate            = Description({                                      //
                                          /* English */ "You may be expected to perform megaflips in small\n"
                                                        "areas, distance megaflips, or hoverflips with a\n"//
                                                        "bomb.",                                           //
                                          /* French  */ "",                                                //
                                          /* Spanish */ "",                                                //
                                          /* Italian */ "",                                                //
                                          /* German  */ "",                                                //
                                                        });                                                //
Description GlitchMegaflipDescAdvanced                = Description({                                      //
                                          /* English */ "You may be expected to perform hoverflips with\n" //
                                                        "difficult midair movement, or distance megaflips\n"
                                                        "under time pressure with a bomb.\n\n"             //
                                                        "Additionally, you may be expected to perform\n"   //
                                                        "novice megaflips with a bombchu",                 //
                                          /* French  */ "",                                                //
                                          /* Spanish */ "",                                                //
                                          /* Italian */ "",                                                //
                                          /* German  */ "",                                                //
                                                        });                                                //
Description GlitchMegaflipDescExpert                  = Description({                                      //
                                          /* English */ "You may be expected to perform intermediate\n"    //
                                                        "megaflips with a bombchu.",                       //
                                          /* French  */ "",                                                //
                                          /* Spanish */ "",                                                //
                                          /* Italian */ "",                                                //
                                          /* German  */ "",                                                //
                                                        });                                                //
Description GlitchMegaflipDescHero                    = Description({                                      //
                                          /* English */ "You may be expected to perform any megaflip with a"
                                                        "bombchu.",                                        //
                                          /* French  */ "",                                                //
                                          /* Spanish */ "",                                                //
                                          /* Italian */ "",                                                //
                                          /* German  */ "",                                                //
                                                        });                                                //
/* A-Slide */                                                                                              //
Description GlitchASlideDescDisabled                  = Description({                                      //
                                          /* English */ "An A-slide is performed the same as a megaflip\n" //
                                                        "except without pressing the A button at the end.\n"
                                                        "This causes child Link's collision to glitch below"
                                                        "the ground and lets him bypass certain actors.",  //
                                          /* French  */ "",                                                //
                                          /* Spanish */ "",                                                //
                                          /* Italian */ "",                                                //
                                          /* German  */ "",                                                //
                                                        });                                                //
Description GlitchASlideDescNovice                    = Description({                                      //
                                          /* English */ "You may be expected to perform A-slides to pass\n"//
                                                        "actors you can't press A to interact with.",      //
                                          /* French  */ "",                                                //
                                          /* Spanish */ "",                                                //
                                          /* Italian */ "",                                                //
                                          /* German  */ "",                                                //
                                                        });                                                //
Description GlitchASlideDescIntermediate              = Description({                                      //
                                          /* English */ "You may be expected to perform A-slides quickly or"
                                                        "around actors that can be interacted with.",      //
                                          /* French  */ "",                                                //
                                          /* Spanish */ "",                                                //
                                          /* Italian */ "",                                                //
                                          /* German  */ "",                                                //
                                                        });                                                //
Description GlitchASlideDescAdvanced                  = Description({                                      //
                                          /* English */ "You may be expected to perform novice A-slides\n" //
                                                        "with a bombchu.",                                 //
                                          /* French  */ "",                                                //
                                          /* Spanish */ "",                                                //
                                          /* Italian */ "",                                                //
                                          /* German  */ "",                                                //
                                                        });                                                //
Description GlitchASlideDescExpert                    = Description({                                      //
                                          /* English */ "You may be expected to perform intermediate\n"    //
                                                        "A-slides with a bombchu.",                        //
                                          /* French  */ "",                                                //
                                          /* Spanish */ "",                                                //
                                          /* Italian */ "",                                                //
                                          /* German  */ "",                                                //
                                                        });                                                //
/* Hammer Slide */                                                                                         //
Description GlitchHammerSlideDescDisabled             = Description({                                      //
                                          /* English */ "Equipping hover boots after a hammer crouch stab\n"
                                                        "against a wall preserves the recoil speed which\n"//
                                                        "allows Link to cross larger gaps than usual.",    //
                                          /* French  */ "",                                                //
                                          /* Spanish */ "",                                                //
                                          /* Italian */ "",                                                //
                                          /* German  */ "",                                                //
                                                        });                                                //
Description GlitchHammerSlideDescNovice               = Description({                                      //
                                          /* English */ "Simple hammer slides may be required",            //
                                          /* French  */ "",                                                //
                                          /* Spanish */ "",                                                //
                                          /* Italian */ "",                                                //
                                          /* German  */ "",                                                //
                                                        });                                                //
Description GlitchHammerSlideDescIntermediate         = Description({                                      //
                                          /* English */ "Hammer slides which require good movement and high"
                                                        "speed may be required.",                          //
                                          /* French  */ "",                                                //
                                          /* Spanish */ "",                                                //
                                          /* Italian */ "",                                                //
                                          /* German  */ "",                                                //
                                                        });                                                //
/* Ledge Cancel */                                                                                         //
Description GlitchLedgeCancelDescDisabled             = Description({                                      //
                                          /* English */ "Climbing a short ledge and shielding damage will\n"
                                                        "prevent the ledge climbing state from ending.\n"  //
                                                        "This state allows Link to walk through some actors"
                                                        "such as boulders and NPCs.",                      //
                                          /* French  */ "",                                                //
                                          /* Spanish */ "",                                                //
                                          /* Italian */ "",                                                //
                                          /* German  */ "",                                                //
                                                        });                                                //
Description GlitchLedgeCancelDescNovice               = Description({                                      //
                                          /* English */ "You may be expected to perform ledge cancels using"
                                                        "bombs as a damage source.",                       //
                                          /* French  */ "",                                                //
                                          /* Spanish */ "",                                                //
                                          /* Italian */ "",                                                //
                                          /* German  */ "",                                                //
                                                        });                                                //
Description GlitchLedgeCancelDescIntermediate         = Description({                                      //
                                          /* English */ "You may be expected to perform ledge cancels in\n"//
                                                        "places with little room.",                        //
                                          /* French  */ "",                                                //
                                          /* Spanish */ "",                                                //
                                          /* Italian */ "",                                                //
                                          /* German  */ "",                                                //
                                                        });                                                //
Description GlitchLedgeCancelDescAdvanced             = Description({                                      //
                                          /* English */ "You may be expected to perform ledge cancels using"
                                                        "bombchus as a damage source.",                    //
                                          /* French  */ "",                                                //
                                          /* Spanish */ "",                                                //
                                          /* Italian */ "",                                                //
                                          /* German  */ "",                                                //
                                                        });                                                //
/* Action Swap */                                                                                          //
Description GlitchActionSwapDescDisabled              = Description({                                      //
                                          /* English */ "Action swap allows Link to switch between 2 held\n"
                                                        "items without the put away/equip animations.\n"   //
                                                        "This can be exploited to produce various effects.",
                                          /* French  */ "",                                                //
                                          /* Spanish */ "",                                                //
                                          /* Italian */ "",                                                //
                                          /* German  */ "",                                                //
                                                        });                                                //
Description GlitchActionSwapDescNovice                = Description({                                      //
                                          /* English */ "You may be expected to use shallow water to set up"
                                                        "action swap.",                                    //
                                          /* French  */ "",                                                //
                                          /* Spanish */ "",                                                //
                                          /* Italian */ "",                                                //
                                          /* German  */ "",                                                //
                                                        });                                                //
Description GlitchActionSwapDescAdvanced              = Description({                                      //
                                          /* English */ "You may be expected to use bombchus to set up\n"  //
                                                        "action swap.",                                    //
                                          /* French  */ "",                                                //
                                          /* Spanish */ "",                                                //
                                          /* Italian */ "",                                                //
                                          /* German  */ "",                                                //
                                                        });                                                //
/* QPA */                                                                                                  //
Description GlitchQPADescDisabled                     = Description({                                      //
                                          /* English */ "Certain events can cancel putting away an item\n" //
                                                        "which later lets Link put it away without an\n"   //
                                                        "animation. This can be used with sticks to access\n"
                                                        "a glitched damage value with the properties of\n" //
                                                        "hammer and fire arrows, or with a bottle to store\n"
                                                        "a cutscene for ocarina items.",                   //
                                          /* French  */ "",                                                //
                                          /* Spanish */ "",                                                //
                                          /* Italian */ "",                                                //
                                          /* German  */ "",                                                //
                                                        });                                                //
Description GlitchQPADescNovice                       = Description({                                      //
                                          /* English */ "You may be expected to get QPA using the boots\n" //
                                                        "animation to delay putting away the item and a\n" //
                                                        "bomb.",                                           //
                                          /* French  */ "",                                                //
                                          /* Spanish */ "",                                                //
                                          /* Italian */ "",                                                //
                                          /* German  */ "",                                                //
                                                        });                                                //
Description GlitchQPADescIntermediate                 = Description({                                      //
                                          /* English */ "You may be expected to get QPA using only a bomb.",
                                          /* French  */ "",                                                //
                                          /* Spanish */ "",                                                //
                                          /* Italian */ "",                                                //
                                          /* German  */ "",                                                //
                                                        });                                                //
Description GlitchQPADescAdvanced                     = Description({                                      //
                                          /* English */ "You may be expected to get QPA using a ledge grab\n"
                                                        "to interrupt putting away the item.",             //
                                          /* French  */ "",                                                //
                                          /* Spanish */ "",                                                //
                                          /* Italian */ "",                                                //
                                          /* German  */ "",                                                //
                                                        });                                                //
Description GlitchQPADescExpert                       = Description({                                      //
                                          /* English */ "You may be expected to get QPA from enemy attacks.",
                                          /* French  */ "",                                                //
                                          /* Spanish */ "",                                                //
                                          /* Italian */ "",                                                //
                                          /* German  */ "",                                                //
                                                        });                                                //
/* Hookshot Clip */                                                                                        //
Description GlitchHookshotClipDescDisabled            = Description({                                      //
                                          /* English */ "Hookshot Clipping allows Link to hookshot through\n"
                                                        "certain walls, which is useful if a valid\n"      //
                                                        "target is on the other side.",                    //
                                          /* French  */ "",                                                //
                                          /* Spanish */ "",                                                //
                                          /* Italian */ "",                                                //
                                          /* German  */ "",                                                //
                                                        });                                                //
Description GlitchHookshotClipDescNovice              = Description({                                      //
                                          /* English */ "Basic Hookshot Clipping may be required.",        //
                                          /* French  */ "",                                                //
                                          /* Spanish */ "",                                                //
                                          /* Italian */ "",                                                //
                                          /* German  */ "",                                                //
                                                        });                                                //
Description GlitchHookshotClipDescIntermediate        = Description({                                      //
                                          /* English */ "Hookshot clips with precise angles and poor\n"    //
                                                        "visibility may be required.",                     //
                                          /* French  */ "",                                                //
                                          /* Spanish */ "",                                                //
                                          /* Italian */ "",                                                //
                                          /* German  */ "",                                                //
                                                        });                                                //
/* Hookshot Jump: Bonk */                                                                                  //
Description GlitchHookshotJump_BonkDescDisabled       = Description({                                      //
                                          /* English */ "A Hookshot Jump is an umbrella term for techniques"
                                                        "that launch Link into the sky using the Hookshot\n"
                                                        "in various ways, sometimes together with\n"       //
                                                        "other items. The bonk method only requires the\n" //
                                                        "Hookshot itself.",                                //
                                          /* French  */ "",                                                //
                                          /* Spanish */ "",                                                //
                                          /* Italian */ "",                                                //
                                          /* German  */ "",                                                //
                                                        });                                                //
Description GlitchHookshotJump_BonkDescNovice         = Description({                                      //
                                          /* English */ "Simple hookshot jumps against large flat walls of\n"
                                                        "hookshottable surfaces may be required.",         //
                                          /* French  */ "",                                                //
                                          /* Spanish */ "",                                                //
                                          /* Italian */ "",                                                //
                                          /* German  */ "",                                                //
                                                        });                                                //
Description GlitchHookshotJump_BonkDescIntermediate   = Description({                                      //
                                          /* English */ "Less lenient hookshot jumps may be required.",    //
                                          /* French  */ "",                                                //
                                          /* Spanish */ "",                                                //
                                          /* Italian */ "",                                                //
                                          /* German  */ "",                                                //
                                                        });                                                //
Description GlitchHookshotJump_BonkDescAdvanced       = Description({                                      //
                                          /* English */ "Hookshot jumps with precise midair movement may be"
                                                        "required.",                                       //
                                          /* French  */ "",                                                //
                                          /* Spanish */ "",                                                //
                                          /* Italian */ "",                                                //
                                          /* German  */ "",                                                //
                                                        });                                                //
/* Hookshot Jump: Boots */                                                                                 //
Description GlitchHookshotJump_BootsDescDisabled      = Description({                                      //
                                          /* English */ "This Hookshot Jump technique is one of the easier\n"
                                                        "ones, and require any pair of boots.",            //
                                          /* French  */ "",                                                //
                                          /* Spanish */ "",                                                //
                                          /* Italian */ "",                                                //
                                          /* German  */ "",                                                //
                                                        });                                                //
Description GlitchHookshotJump_BootsDescNovice        = Description({                                      //
                                          /* English */ "Only relatively short Hookshot Jumps with boots\n"//
                                                        "may be required.",                                //
                                          /* French  */ "",                                                //
                                          /* Spanish */ "",                                                //
                                          /* Italian */ "",                                                //
                                          /* German  */ "",                                                //
                                                        });                                                //
Description GlitchHookshotJump_BootsDescIntermediate  = Description({                                      //
                                          /* English */ "Higher Hookshot Jumps with boots, where you look\n"
                                                        "further up or downwards may be required.",        //
                                          /* French  */ "",                                                //
                                          /* Spanish */ "",                                                //
                                          /* Italian */ "",                                                //
                                          /* German  */ "",                                                //
                                                        });                                                //
Description GlitchHookshotJump_BootsDescAdvanced      = Description({                                      //
                                          /* English */ "Hookshot jumps that require a lot of height and\n"//
                                                        "precise midair movement may be required.",        //
                                          /* French  */ "",                                                //
                                          /* Spanish */ "",                                                //
                                          /* Italian */ "",                                                //
                                          /* German  */ "",                                                //
                                                        });                                                //
/* Cutscene Dives */                                                                                       //
Description GlitchCutsceneDiveDescDisabled            = Description({                                      //
                                          /* English */ "Water physics won't effect Link if he enters the\n"
                                                        "water while a cutscene is playing, allowing him\n"//
                                                        "to sink to the bottom.",                          //
                                          /* French  */ "",                                                //
                                          /* Spanish */ "",                                                //
                                          /* Italian */ "",                                                //
                                          /* German  */ "",                                                //
                                                        });                                                //
Description GlitchCutsceneDiveDescNovice              = Description({                                      //
                                          /* English */ "Attempting to use Farore's Wind (when it's already"
                                                        "set) with another magic item active prevents the\n"
                                                        "water from clearing the FW cutscene until the\n"  //
                                                        "other effect ends.\n"                             //
                                                        "You may be expected to use Nayru's Love as the\n" //
                                                        "other magic effect.",                             //
                                          /* French  */ "",                                                //
                                          /* Spanish */ "",                                                //
                                          /* Italian */ "",                                                //
                                          /* German  */ "",                                                //
                                                        });                                                //
Description GlitchCutsceneDiveDescIntermediate        = Description({                                      //
                                          /* English */ "You can catch something in a bottle while standing"
                                                        "over water using the hover boots to fall through\n"
                                                        "the water during the catching cutscene.",         //
                                          /* French  */ "",                                                //
                                          /* Spanish */ "",                                                //
                                          /* Italian */ "",                                                //
                                          /* German  */ "",                                                //
                                                        });                                                //
Description GlitchCutsceneDiveDescAdvanced            = Description({                                      //
                                          /* English */ "You may be expected to use magic arrows to perform"
                                                        "Farore's Wind cutscene dives.",                   //
                                          /* French  */ "",                                                //
                                          /* Spanish */ "",                                                //
                                          /* Italian */ "",                                                //
                                          /* German  */ "",                                                //
                                                        });                                                //
/* Navi Dive: Stick */                                                                                     //
Description GlitchNaviDive_StickDescDisabled          = Description({                                      //
                                          /* English */ "A Navi dive is a type of cutscene dive achieved by"
                                                        "falling off a ledge while talking to Navi. While\n"
                                                        "the usual method for achieving this is a TSC, it\n"
                                                        "is also possible to perform using a jump attack\n"//
                                                        "with deku sticks.",                               //
                                          /* French  */ "",                                                //
                                          /* Spanish */ "",                                                //
                                          /* Italian */ "",                                                //
                                          /* German  */ "",                                                //
                                                        });                                                //
Description GlitchNaviDive_StickDescNovice            = Description({                                      //
                                          /* English */ "You may be expected to enter BotW with a stick\n" //
                                                        "Navi dive.",                                      //
                                          /* French  */ "",                                                //
                                          /* Spanish */ "",                                                //
                                          /* Italian */ "",                                                //
                                          /* German  */ "",                                                //
                                                        });                                                //
Description GlitchNaviDive_StickDescIntermediate      = Description({                                      //
                                          /* English */ "You may be expected to use the LH to ZD shortcut\n"
                                                        "with a stick Navi dive.",                         //
                                          /* French  */ "",                                                //
                                          /* Spanish */ "",                                                //
                                          /* Italian */ "",                                                //
                                          /* German  */ "",                                                //
                                                        });                                                //
Description GlitchNaviDive_StickDescAdvanced          = Description({                                      //
                                          /* English */ "You may be expected to use the LW to ZR shortcut\n"
                                                        "with a stick Navi dive.",                         //
                                          /* French  */ "",                                                //
                                          /* Spanish */ "",                                                //
                                          /* Italian */ "",                                                //
                                          /* German  */ "",                                                //
                                                        });                                                //
/* TSC */                                                                                                  //
Description GlitchTripleSlashClipDescDisabled         = Description({                                      //
                                          /* English */ "When doing a three-slash-combo with either the\n" //
                                                        "Kokiri Sword or the Master Sword and put it away,\n"
                                                        "Link will be placed back a small distance.\n"     //
                                                        "If, while slashing, you use the recoil of hitting\n"
                                                        "a wall and then put away the sword, Link may clip\n"
                                                        "into a wall behind him if angled correctly.",     //
                                          /* French  */ "",                                                //
                                          /* Spanish */ "",                                                //
                                          /* Italian */ "",                                                //
                                          /* German  */ "",                                                //
                                                        });                                                //
Description GlitchTripleSlashClipDescNovice           = Description({                                      //
                                          /* English */ "Basic Triple Slash Clipping may be required.",    //
                                          /* French  */ "",                                                //
                                          /* Spanish */ "",                                                //
                                          /* Italian */ "",                                                //
                                          /* German  */ "",                                                //
                                                        });                                                //
Description GlitchTripleSlashClipDescIntermediate     = Description({                                      //
                                          /* English */ "Some more complex OoB movement may be required.", //
                                          /* French  */ "",                                                //
                                          /* Spanish */ "",                                                //
                                          /* Italian */ "",                                                //
                                          /* German  */ "",                                                //
                                                        });                                                //
Description GlitchTripleSlashClipDescAdvanced         = Description({                                      //
                                          /* English */ "Very precise OoB movement may be required.",      //
                                          /* French  */ "",                                                //
                                          /* Spanish */ "",                                                //
                                          /* Italian */ "",                                                //
                                          /* German  */ "",                                                //
                                                        });                                                //
Description GlitchTripleSlashClipDescExpert           = Description({                                      //
                                          /* English */ "Very precise TSCs may be required.",              //
                                          /* French  */ "",                                                //
                                          /* Spanish */ "",                                                //
                                          /* Italian */ "",                                                //
                                          /* German  */ "",                                                //
                                                        });                                                //
/* Ledge Clip */                                                                                           //
Description GlitchLedgeClipDescDisabled               = Description({                                      //
                                          /* English */ "A Ledge Clip allows Link to fall through a floor\n"
                                                        "or pass through an object by facing a wall\n"     //
                                                        "and dropping down to the left in various ways.\n" //
                                                        "These only work as an adult.",                    //
                                          /* French  */ "",                                                //
                                          /* Spanish */ "",                                                //
                                          /* Italian */ "",                                                //
                                          /* German  */ "",                                                //
                                                        });                                                //
Description GlitchLedgeClipDescNovice                 = Description({                                      //
                                          /* English */ "Basic Ledge Clips may be required.\n"             //
                                                        "Some require that you let go of the ledge with\n" //
                                                        "a specific timing.",                              //
                                          /* French  */ "",                                                //
                                          /* Spanish */ "",                                                //
                                          /* Italian */ "",                                                //
                                          /* German  */ "",                                                //
                                                        });                                                //
Description GlitchLedgeClipDescIntermediate           = Description({                                      //
                                          /* English */ "Certain harder clips may also be required.",      //
                                          /* French  */ "",                                                //
                                          /* Spanish */ "",                                                //
                                          /* Italian */ "",                                                //
                                          /* German  */ "",                                                //
                                                        });                                                //
Description GlitchLedgeClipDescAdvanced               = Description({                                      //
                                          /* English */ "Ledge clips with complex OoB movement may be\n"   //
                                                        "required.",                                       //
                                          /* French  */ "",                                                //
                                          /* Spanish */ "",                                                //
                                          /* Italian */ "",                                                //
                                          /* German  */ "",                                                //
                                                        });                                                //
/* Seam Walk */                                                                                            //
Description GlitchSeamWalkDescDisabled                = Description({                                      //
                                          /* English */ "Where 2 walls come together they form a seam that\n"
                                                        "Link can stand on. It is possible to use these to\n"
                                                        "gain height and reach normally inaccessible areas.\n"
                                                        "Additionally these seams can reach far above the\n"
                                                        "walls that form them, creating invisible seams.", //
                                          /* French  */ "",                                                //
                                          /* Spanish */ "",                                                //
                                          /* Italian */ "",                                                //
                                          /* German  */ "",                                                //
                                                        });                                                //
Description GlitchSeamWalkDescNovice                  = Description({                                      //
                                          /* English */ "Short seam walks up visible walls with ISG may be\n"
                                                        "required.",                                       //
                                          /* French  */ "",                                                //
                                          /* Spanish */ "",                                                //
                                          /* Italian */ "",                                                //
                                          /* German  */ "",                                                //
                                                        });                                                //
Description GlitchSeamWalkDescIntermediate            = Description({                                      //
                                          /* English */ "Short seam walks up visible walls without ISG or\n"
                                                        "longer seam walks with ISG may be required.",     //
                                          /* French  */ "",                                                //
                                          /* Spanish */ "",                                                //
                                          /* Italian */ "",                                                //
                                          /* German  */ "",                                                //
                                                        });                                                //
Description GlitchSeamWalkDescAdvanced                = Description({                                      //
                                          /* English */ "Longer seam walks without ISG may be required.",  //
                                          /* French  */ "",                                                //
                                          /* Spanish */ "",                                                //
                                          /* Italian */ "",                                                //
                                          /* German  */ "",                                                //
                                                        });                                                //
Description GlitchSeamWalkDescExpert                  = Description({                                      //
                                          /* English */ "Very precise seam walks may be required.",        //
                                          /* French  */ "",                                                //
                                          /* Spanish */ "",                                                //
                                          /* Italian */ "",                                                //
                                          /* German  */ "",                                                //
                                                        });                                                //
Description GlitchSeamWalkDescHero                    = Description({                                      //
                                          /* English */ "Crossing Gerudo Valley as child by walking up a\n"//
                                                        "wall with the cucco may be required.",            //
                                          /* French  */ "",                                                //
                                          /* Spanish */ "",                                                //
                                          /* Italian */ "",                                                //
                                          /* German  */ "",                                                //
                                                        });                                                //
/* Misc Glitches */                                                                                        //
Description GlitchWWTEscapeDesc                       = Description({                                      //
                                          /* English */ "Using deku nuts and the crawlspace to let you\n"  //
                                                        "move while reading the nearby sign, you can walk\n"
                                                        "through the Kokiri guarding the exit. This only\n"//
                                                        "affects logic with shuffled entrances.",          //
                                          /* French  */ "",                                                //
                                          /* Spanish */ "",                                                //
                                          /* Italian */ "",                                                //
                                          /* German  */ "",                                                //
                                                        });                                                //
Description GlitchGVTentAsChildDesc                   = Description({                                      //
                                          /* English */ "The loading zone for the carpenters' tent exists\n"
                                                        "in the child map despite the tent being removed.\n\n"
                                                        "With this setting enabled you may be expected to\n"
                                                        "use that loading zone.",                          //
                                          /* French  */ "",                                                //
                                          /* Spanish */ "",                                                //
                                          /* Italian */ "",                                                //
                                          /* German  */ "",                                                //
                                                        });                                                //
Description GlitchGFGuardSneakDesc                    = Description({                                      //
                                          /* English */ "By using the bow, hookshot, or boomerang while\n" //
                                                        "looking up and targeting the Fortress wall, you\n"//
                                                        "can walk\n past the guard on the slope without\n" //
                                                        "being caught.",                                   //
                                          /* French  */ "",                                                //
                                          /* Spanish */ "",                                                //
                                          /* Italian */ "",                                                //
                                          /* German  */ "",                                                //
                                                        });                                                //
Description GlitchItemlessWastelandDesc               = Description({                                      //
                                          /* English */ "By starting a backwalk and then targeting every\n"//
                                                        "other frame Link will maintain backwalk speed\n"  //
                                                        "over the quicksand in the haunted wasteland which\n"
                                                        "lets him cross with no items.",                   //
                                          /* French  */ "",                                                //
                                          /* Spanish */ "",                                                //
                                          /* Italian */ "",                                                //
                                          /* German  */ "",                                                //
                                                        });                                                //
Description GlitchOccamsStatueDesc                    = Description({                                      //
                                          /* English */ "With some precise movement through loading zones\n"
                                                        "in Darunia's room, it is possible to unload the\n"//
                                                        "collision of the statue blocking the way to DMC.",//
                                          /* French  */ "",                                                //
                                          /* Spanish */ "",                                                //
                                          /* Italian */ "",                                                //
                                          /* German  */ "",                                                //
                                                        });                                                //
Description GlitchZDOoBJumpSlashDesc                  = Description({                                      //
                                          /* English */ "Jump slashing the wall next to the pillar above\n"//
                                                        "the ZD to LH shortcut as adult will let you clip\n"
                                                        "through. From here you can either jump to the shop"
                                                        "loading zone or fall OoB a little bit and swim\n" //
                                                        "into the shortcut loading zone.",                 //
                                          /* French  */ "",                                                //
                                          /* Spanish */ "",                                                //
                                          /* Italian */ "",                                                //
                                          /* German  */ "",                                                //
                                                        });                                                //
Description GlitchJabuStickRecoilDesc                 = Description({                                      //
                                          /* English */ "Child can enter Jabu without a fish in a bottle\n"//
                                                        "using the recoil from breaking a deku stick while\n"
                                                        "sidehopping next to the loading zone.",           //
                                          /* French  */ "",                                                //
                                          /* Spanish */ "",                                                //
                                          /* Italian */ "",                                                //
                                          /* German  */ "",                                                //
                                                        });                                                //
Description GlitchJabuAdultDesc                       = Description({                                      //
                                          /* English */ "Adult can enter Jabu by walking over a specific\n"//
                                                        "section of ice on the side near ice cavern.",     //
                                          /* French  */ "",                                                //
                                          /* Spanish */ "",                                                //
                                          /* Italian */ "",                                                //
                                          /* German  */ "",                                                //
                                                        });                                                //
Description GlitchBlueFireWallDesc                    = Description({                                      //
                                          /* English */ "Pouring blue fire on certain destructable walls\n"//
                                                        "will cause them to break.",                       //
                                          /* French  */ "",                                                //
                                          /* Spanish */ "",                                                //
                                          /* Italian */ "",                                                //
                                          /* German  */ "",                                                //
                                                        });                                                //
Description GlitchClassicHalfieDesc                   = Description({                                      //
                                          /* English */ "Dying during a jump attack towards a ledge just\n"//
                                                        "too high to climb will put Link on top of the\n"  //
                                                        "ledge. Combined with a fairy this lets Link climb\n"
                                                        "ledges such as the one to the switch in DC.",     //
                                          /* French  */ "",                                                //
                                          /* Spanish */ "",                                                //
                                          /* Italian */ "",                                                //
                                          /* German  */ "",                                                //
                                                        });                                                //
Description GlitchModernHalfieDesc                    = Description({                                      //
                                          /* English */ "Using a bomb flower and a twisted backflip, it is\n"
                                                        "possible to access the switch in DC with only a\n"//
                                                        "deku shield and the goron bracelet.",             //
                                          /* French  */ "",                                                //
                                          /* Spanish */ "",                                                //
                                          /* Italian */ "",                                                //
                                          /* German  */ "",                                                //
                                                        });                                                //
Description GlitchJabuSwitchDesc                      = Description({                                      //
                                          /* English */ "Using a cutscene item the frame you land on the\n"//
                                                        "blue switches in Jabu Jabu's Belly will make them\n"
                                                        "stay held for a while after you step off them.",  //
                                          /* French  */ "",                                                //
                                          /* Spanish */ "",                                                //
                                          /* Italian */ "",                                                //
                                          /* German  */ "",                                                //
                                                        });                                                //
Description GlitchForestBKSkipDesc                    = Description({                                      //
                                          /* English */ "Using the hookshot or bow to shorten a backflip\n"//
                                                        "it is possible to land on the other side of the\n"//
                                                        "railing in the north of the lobby and get clipped\n"
                                                        "out of bounds. From here it is possible to jump\n"//
                                                        "into the boss loading zone.",                     //
                                          /* French  */ "",                                                //
                                          /* Spanish */ "",                                                //
                                          /* Italian */ "",                                                //
                                          /* German  */ "",                                                //
                                                        });                                                //
Description GlitchFireGrunzClipDesc                   = Description({                                      //
                                          /* English */ "Grabbing a ledge in a corner partially clips Link\n"
                                                        "through the wall. A bomb can be used to push Link\n"
                                                        "fully through the wall to get out of bounds. This\n"
                                                        "can be used in the fire temple along with hover\n"//
                                                        "boots to skip hammer in the first room.",         //
                                          /* French  */ "",                                                //
                                          /* Spanish */ "",                                                //
                                          /* Italian */ "",                                                //
                                          /* German  */ "",                                                //
                                                        });                                                //
