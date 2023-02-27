#pragma once
#include <string_view>
#include <vector>

#include "menu.hpp"

class Description {
  public:
    Description(std::vector<std::string_view> text_) : text(std::move(text_)) {
        for (u8 i = 0; i < text.size(); i++) {
            if (text[i] != "") {
                hasLanguage |= 1 << i;
            }
        }

        if (text.size() == 0) {
            text = { "" };
        }
    }

    operator std::string_view() const {
        u8 language = GetLanguage();
        if (hasLanguage & (1 << language)) {
            return text[language];
        }
        return text[0];
    }

  private:
    std::vector<std::string_view> text = { "" };
    u16 hasLanguage = 0;
};

extern Description emptyDesc;

extern Description menuOpenSettingsDesc;
extern Description menuGlitchOptionsDesc;
extern Description menuPersonalizationDesc;
extern Description menuIngameDefaultsDesc;
extern Description menuResetToDefaultsDesc;

extern Description presetNintendedDesc;
extern Description presetAllsanityDesc;
extern Description presetRacingDesc;
extern Description presetVanillaDesc;
extern Description presetFullChaosDesc;

extern Description openRandomize;
extern Description worldRandomize;
extern Description shuffleRandomize;
extern Description dungeonRandomize;

extern Description logicGlitchless;
extern Description logicGlitched;
extern Description logicNoLogic;
extern Description logicVanilla;

extern Description forestOpen;
extern Description forestClosed;
extern Description forestClosedDeku;

extern Description kakGateOpen;
extern Description kakGateClosed;

extern Description doorOfTimeOpen;
extern Description doorOfTimeClosed;
extern Description doorOfTimeIntended;

extern Description fountainNormal;
extern Description fountainAdult;
extern Description fountainOpen;

extern Description jabuJabuCloseDesc;
extern Description jabuJabuOpenDesc;

extern Description gerudoNormal;
extern Description gerudoFast;
extern Description gerudoOpen;

extern Description bridgeOpen;
extern Description bridgeVanilla;
extern Description bridgeStones;
extern Description bridgeMedallions;
extern Description bridgeRewards;
extern Description bridgeDungeons;
extern Description bridgeTokens;

extern Description bridgeStoneCountDesc;
extern Description bridgeMedallionCountDesc;
extern Description bridgeRewardCountDesc;
extern Description bridgeDungeonCountDesc;
extern Description bridgeTokenCountDesc;

extern Description randomGanonsTrialsDesc;

extern Description ganonsTrialCountDesc;

extern Description ageDesc;

extern Description shuffleEntrancesDesc;

extern Description dungeonEntrancesDesc;

extern Description bossEntrancesDesc;

extern Description overworldEntrancesDesc;

extern Description grottoEntrancesDesc;

extern Description owlDropsDesc;

extern Description warpSongsDesc;

extern Description overworldSpawnsDesc;

extern Description mixedPoolsDesc;
extern Description mixDungeonsDesc;
extern Description mixOverworldDesc;
extern Description mixInteriorsDesc;
extern Description mixGrottosDesc;

extern Description decoupledEntrancesDesc;

extern Description interiorEntrancesOff;
extern Description interiorEntrancesSimple;
extern Description interiorEntrancesAll;

extern Description bombchuLogicDesc;

extern Description defaultAmmoDropsDesc;
extern Description bombchuDropsDesc;
extern Description noAmmoDropsDesc;

extern Description defaultHeartDropsDesc;
extern Description noHeartDropsDesc;
extern Description noHeartRefillDesc;
extern Description scarceHeartsDesc;

extern Description mqDungeonCountDesc;
extern Description setDungeonTypesDesc;

extern Description shuffleRewardsEndOfDungeon;
extern Description shuffleRewardsAnyDungeon;
extern Description shuffleRewardsOverworld;
extern Description shuffleRewardsAnywhere;

extern Description linksPocketDungeonReward;
extern Description linksPocketAdvancement;
extern Description linksPocketAnything;
extern Description linksPocketNothing;

extern Description songsSongLocations;
extern Description songsDungeonRewards;
extern Description songsAllLocations;

extern Description shopsOff;
extern Description shopsZero;
extern Description shopsOne;
extern Description shopsTwo;
extern Description shopsThree;
extern Description shopsFour;
extern Description shopsRandom;

extern Description tokensOff;
extern Description tokensDungeon;
extern Description tokensOverworld;
extern Description tokensAllTokens;

extern Description scrubsOff;
extern Description scrubsAffordable;
extern Description scrubsExpensive;
extern Description scrubsRandomPrices;

extern Description shuffleCowsDesc;

extern Description kokiriSwordDesc;
extern Description masterSwordDesc;

extern Description ocarinasDesc;

extern Description weirdEggDesc;

extern Description zeldasLetterDesc;

extern Description gerudoTokenDesc;

extern Description magicBeansDesc;

extern Description merchantsDesc;
extern Description merchantsHintsDesc;

extern Description frogSongRupeesDesc;

extern Description adultTradeDesc;

extern Description chestMinigameDesc;

extern Description mapCompassStartWith;
extern Description mapCompassVanilla;
extern Description mapCompassOwnDungeon;
extern Description mapCompassAnyDungeon;
extern Description mapCompassOverworld;
extern Description mapCompassAnywhere;

extern Description smallKeyStartWith;
extern Description smallKeyVanilla;
extern Description smallKeyOwnDungeon;
extern Description smallKeyAnyDungeon;
extern Description smallKeyOverworld;
extern Description smallKeyAnywhere;

extern Description gerudoKeysVanilla;
extern Description gerudoKeysAnyDungeon;
extern Description gerudoKeysOverworld;
extern Description gerudoKeysAnywhere;

extern Description keyRingDesc;

extern Description bossKeyStartWith;
extern Description bossKeyVanilla;
extern Description bossKeyOwnDungeon;
extern Description bossKeyAnyDungeon;
extern Description bossKeyOverworld;
extern Description bossKeyAnywhere;

extern Description ganonKeyStartWith;
extern Description ganonKeyVanilla;
extern Description ganonKeyOwnDungeon;
extern Description ganonKeyAnyDungeon;
extern Description ganonKeyOverworld;
extern Description ganonKeyAnywhere;
extern Description ganonKeyLACS;

extern Description lacsMedallionCountDesc;
extern Description lacsStoneCountDesc;
extern Description lacsRewardCountDesc;
extern Description lacsDungeonCountDesc;
extern Description lacsTokenCountDesc;

extern Description childStealthDesc;

extern Description skipTowerEscapeDesc;

extern Description skipEponaRaceDesc;

extern Description skipMinigamePhasesDesc;

extern Description freeScarecrowDesc;

extern Description fourPoesDesc;

extern Description lakeHyliaOwlDesc;

extern Description bigPoeTargetCountDesc;

extern Description numRequiredCuccosDesc;

extern Description kingZoraSpeedFast;
extern Description kingZoraSpeedVanilla;
extern Description kingZoraSpeedRandom;
extern Description kingZoraSpeedCustom;

extern Description completeMaskDesc;

extern Description quickTextDesc0;
extern Description quickTextDesc1;
extern Description quickTextDesc2;
extern Description quickTextDesc3;
extern Description skipSongReplaysDesc;

extern Description keepFWWarpPointDesc;

extern Description fastBunnyHoodDesc;

extern Description racingDesc;

extern Description gossipStonesHintsDesc;

extern Description obscureHintsDesc;
extern Description ambiguousHintsDesc;
extern Description clearHintsDesc;

extern Description uselessHintsDesc;
extern Description balancedHintsDesc;
extern Description strongHintsDesc;
extern Description veryStrongHintsDesc;

extern Description miscHintsDesc;
extern Description totAltarHintsDesc;
extern Description ganonHintsDesc;

extern Description compassesShowRewardsDesc;
extern Description compassesShowWotHDesc;
extern Description mapsShowDungeonModesDesc;

extern Description damageMultiDesc;

extern Description startingTimeDesc;

extern Description locationsReachableDesc;
extern Description nightGSDesc;

extern Description chestAnimDesc;

extern Description chestSizeDesc;

extern Description ingameSpoilersShowDesc;
extern Description ingameSpoilersHideDesc;

extern Description menuButtonDesc;

extern Description arrowSwitchDesc;

extern Description startWithConsumablesDesc;

extern Description startWithMaxRupeesDesc;

extern Description startingHealthDesc;

extern Description startingBunnyHoodDesc;

extern Description itemPoolPlentiful;
extern Description itemPoolBalanced;
extern Description itemPoolScarce;
extern Description itemPoolMinimal;

extern Description iceTrapsOff;
extern Description iceTrapsNormal;
extern Description iceTrapsExtra;
extern Description iceTrapsMayhem;
extern Description iceTrapsOnslaught;

extern Description removeDDDesc;

extern Description progGoronSword;

extern Description faroresWindAnywhereDesc;

extern Description ageRestrictionsDesc;
extern Description ageItemsInLogicDesc;
extern Description adultStickDesc;
extern Description adultBoomerangDesc;
extern Description childHammerDesc;
extern Description adultSlingshotDesc;
extern Description childBowDesc;
extern Description childHookshotDesc;
extern Description childIronBootsDesc;
extern Description childHoverBootsDesc;
extern Description adultMasksDesc;
extern Description adultKokiriSwordDesc;
extern Description childMasterSwordDesc;
extern Description childBiggoronSwordDesc;
extern Description adultDekuShieldDesc;
extern Description childMirrorShieldDesc;
extern Description childGoronTunicDesc;
extern Description childZoraTunicDesc;

extern Description restoreISGdesc;

extern Description gkDurabilityVanilla;
extern Description gkDurabilityRandomRisk;
extern Description gkDurabilityRandomSafe;
extern Description retroAmmoDesc;

extern Description mp_EnabledDesc;
extern Description mp_SharedProgressDesc;
extern Description mp_SyncIdDesc;
extern Description mp_SharedHealthDesc;
extern Description mp_SharedRupeesDesc;
extern Description mp_SharedAmmoDesc;

extern Description silenceNaviDesc;
extern Description ignoreMaskReactionDesc;

extern Description randomChoiceDesc;
extern Description randomColorDesc;
extern Description customColorDesc;
extern Description colorListDesc;

extern Description naviColorsDesc;
extern Description necessarySimpleModeDesc;
extern Description alwaysSimpleModeDesc;
extern Description swordTrailInnerDesc;
extern Description swordTrailOuterDesc;
extern Description swordTrailDurationDesc;
extern Description boomerangTrailDesc;
extern Description boomerangDurationDesc;
extern Description bombchuTrailInnerDesc;
extern Description bombchuTrailOuterDesc;
extern Description bombchuDurationDesc;

extern Description coloredKeysDesc;
extern Description coloredBossKeysDesc;

extern Description mirrorWorldOffDesc;
extern Description mirrorWorldOnDesc;
extern Description mirrorWorldSceneDesc;
extern Description mirrorWorldEntranceDesc;
extern Description mirrorWorldRandomDesc;

extern Description musicRandoDesc;
extern Description shuffleBGMDesc;
extern Description fanfaresOffDesc;
extern Description onlyFanfaresDesc;
extern Description fanfaresOcarinaDesc;
extern Description shuffleOcaMusicDesc;

extern Description shuffleSFXOff;
extern Description shuffleSFXAll;
extern Description shuffleSFXSceneSpecific;
extern Description shuffleSFXChaos;
extern Description shuffleSFXCategorically;

extern Description randomTrapDmgDesc;
extern Description basicTrapDmgDesc;
extern Description advancedTrapDmgDesc;
extern Description fireTrapDesc;
extern Description antiFairyTrapDesc;
extern Description curseTrapsDesc;
extern Description extraArrowEffectsDesc;

extern Description excludeLocationDesc;

extern Description ToggleAllTricksDesc;

extern Description ToggleLogicNoneDesc;
extern Description ToggleLogicNoviceDesc;
extern Description ToggleLogicIntermediateDesc;
extern Description ToggleLogicExpertDesc;
extern Description LogicGrottosWithoutAgonyDesc;
extern Description LogicVisibleCollisionDesc;
extern Description LogicFewerTunicRequirementsDesc;
extern Description LogicLostWoodsGSBeanDesc;
extern Description LogicLabDivingDesc;
extern Description LogicLabWallGSDesc;
extern Description LogicGraveyardPoHDesc;
extern Description LogicChildDampeRacePoHDesc;
extern Description LogicGVHammerChestDesc;
extern Description LogicGerudoKitchenDesc;
extern Description LogicGerudoChildClimbDesc;
extern Description LogicLensWastelandDesc;
extern Description LogicReverseWastelandDesc;
extern Description LogicColossusGSDesc;
extern Description LogicOutsideGanonsGSDesc;
extern Description LogicManOnRoofDesc;
extern Description LogicWindmillPoHHookshotDesc;
extern Description LogicDMTBombableDesc;
extern Description LogicDMTSoilGSDesc;
extern Description LogicDMTSummitHoverDesc;
extern Description LogicLinkGoronDinsDesc;
extern Description LogicGoronCityLeftMostDesc;
extern Description LogicGoronCityPotDesc;
extern Description LogicGoronCityPotWithStrengthDesc;
extern Description LogicChildRollingWithStrengthDesc;
extern Description LogicCraterUpperToLowerDesc;
extern Description LogicCraterBeanPoHWithHoversDesc;
extern Description LogicBiggoronBoleroDesc;
extern Description LogicZoraRiverLowerDesc;
extern Description LogicZoraRiverUpperDesc;
extern Description LogicZFGreatFairyDesc;
extern Description LogicDekuB1WebsWithBowDesc;
extern Description LogicDekuB1SkipDesc;
extern Description LogicDekuBasementGSDesc;
extern Description LogicDCStaircaseDesc;
extern Description LogicDCJumpDesc;
extern Description LogicDCSlingshotSkipDesc;
extern Description LogicDCScarecrowGSDesc;
extern Description LogicJabuBossGSAdultDesc;
extern Description LogicJabuScrubJumpDiveDesc;
extern Description LogicForestOutsideBackdoorDesc;
extern Description LogicForestDoorFrameDesc;
extern Description LogicForestOutdoorEastGSDesc;
extern Description LogicFireBossDoorJumpDesc;
extern Description LogicFireStrengthDesc;
extern Description LogicFireScarecrowDesc;
extern Description LogicFireFlameMazeDesc;
extern Description LogicFireSongOfTimeDesc;
extern Description LogicWaterTempleTorchLongshotDesc;
extern Description LogicWaterTempleUpperBoostDesc;
extern Description LogicWaterCentralBowDesc;
extern Description LogicWaterCentralGSFWDesc;
extern Description LogicWaterCrackedWallNothingDesc;
extern Description LogicWaterCrackedWallHoversDesc;
extern Description LogicWaterBossKeyRegionDesc;
extern Description LogicWaterBKJumpDiveDesc;
extern Description LogicWaterNorthBasementLedgeJumpDesc;
extern Description LogicWaterDragonAdultDesc;
extern Description LogicWaterDragonJumpDiveDesc;
extern Description LogicWaterRiverGSDesc;
extern Description LogicWaterFallingPlatformGSDesc;
extern Description LogicSpiritLowerAdultSwitchDesc;
extern Description LogicSpiritChildBombchuDesc;
extern Description LogicSpiritWallDesc;
extern Description LogicSpiritLobbyGSDesc;
extern Description LogicSpiritMapChestDesc;
extern Description LogicSpiritSunChestDesc;
extern Description LogicShadowFireArrowEntryDesc;
extern Description LogicShadowUmbrellaDesc;
extern Description LogicShadowFreestandingKeyDesc;
extern Description LogicShadowStatueDesc;
extern Description LogicChildDeadhandDesc;
extern Description LogicGtgWithoutHookshotDesc;
extern Description LogicGtgFakeWallDesc;
extern Description LogicLensSpiritDesc;
extern Description LogicLensShadowDesc;
extern Description LogicLensShadowBackDesc;
extern Description LogicLensBotwDesc;
extern Description LogicLensGtgDesc;
extern Description LogicLensCastleDesc;
extern Description LogicLensJabuMQDesc;
extern Description LogicLensSpiritMQDesc;
extern Description LogicLensShadowMQDesc;
extern Description LogicLensShadowMQBackDesc;
extern Description LogicLensBotwMQDesc;
extern Description LogicLensGtgMQDesc;
extern Description LogicLensCastleMQDesc;
extern Description LogicSpiritTrialHookshotDesc;
extern Description LogicFlamingChestsDesc;

extern const std::vector<std::string_view> GlitchDifficulties;

extern Description ToggleAllGlitchesDesc;

extern Description GlitchRestrictedItemsDescDisabled;
extern Description GlitchRestrictedItemsDescNovice;

extern Description GlitchSuperStabDescDisabled;
extern Description GlitchSuperStabDescNovice;

extern Description GlitchISGDescDisabled;
extern Description GlitchISGDescNovice;
extern Description GlitchISGDescIntermediate;
extern Description GlitchISGDescAdvanced;

extern Description GlitchHoverDescDisabled;
extern Description GlitchHoverDescNovice;
extern Description GlitchHoverDescIntermediate;
extern Description GlitchHoverDescAdvanced;

extern Description GlitchBombOIDescDisabled;
extern Description GlitchBombOIDescNovice;
extern Description GlitchBombOIDescIntermediate;
extern Description GlitchBombOIDescAdvanced;
extern Description GlitchBombOIDescExpert;

extern Description GlitchHoverBoostDescDisabled;
extern Description GlitchHoverBoostDescNovice;
extern Description GlitchHoverBoostDescIntermediate;
extern Description GlitchHoverBoostDescAdvanced;

extern Description GlitchSuperSlideDescDisabled;
extern Description GlitchSuperSlideDescNovice;
extern Description GlitchSuperSlideDescIntermediate;
extern Description GlitchSuperSlideDescAdvanced;
extern Description GlitchSuperSlideDescExpert;

extern Description GlitchMegaflipDescDisabled;
extern Description GlitchMegaflipDescNovice;
extern Description GlitchMegaflipDescIntermediate;
extern Description GlitchMegaflipDescAdvanced;
extern Description GlitchMegaflipDescExpert;
extern Description GlitchMegaflipDescHero;

extern Description GlitchASlideDescDisabled;
extern Description GlitchASlideDescNovice;
extern Description GlitchASlideDescIntermediate;
extern Description GlitchASlideDescAdvanced;
extern Description GlitchASlideDescExpert;

extern Description GlitchHammerSlideDescDisabled;
extern Description GlitchHammerSlideDescNovice;
extern Description GlitchHammerSlideDescIntermediate;

extern Description GlitchLedgeCancelDescDisabled;
extern Description GlitchLedgeCancelDescNovice;
extern Description GlitchLedgeCancelDescIntermediate;
extern Description GlitchLedgeCancelDescAdvanced;

extern Description GlitchActionSwapDescDisabled;
extern Description GlitchActionSwapDescNovice;
extern Description GlitchActionSwapDescAdvanced;

extern Description GlitchQPADescDisabled;
extern Description GlitchQPADescNovice;
extern Description GlitchQPADescIntermediate;
extern Description GlitchQPADescAdvanced;
extern Description GlitchQPADescExpert;

extern Description GlitchHookshotClipDescDisabled;
extern Description GlitchHookshotClipDescNovice;
extern Description GlitchHookshotClipDescIntermediate;

extern Description GlitchHookshotJump_BonkDescDisabled;
extern Description GlitchHookshotJump_BonkDescNovice;
extern Description GlitchHookshotJump_BonkDescIntermediate;
extern Description GlitchHookshotJump_BonkDescAdvanced;

extern Description GlitchHookshotJump_BootsDescDisabled;
extern Description GlitchHookshotJump_BootsDescNovice;
extern Description GlitchHookshotJump_BootsDescIntermediate;
extern Description GlitchHookshotJump_BootsDescAdvanced;

extern Description GlitchCutsceneDiveDescDisabled;
extern Description GlitchCutsceneDiveDescNovice;
extern Description GlitchCutsceneDiveDescIntermediate;
extern Description GlitchCutsceneDiveDescAdvanced;

extern Description GlitchNaviDive_StickDescDisabled;
extern Description GlitchNaviDive_StickDescNovice;
extern Description GlitchNaviDive_StickDescIntermediate;
extern Description GlitchNaviDive_StickDescAdvanced;

extern Description GlitchTripleSlashClipDescDisabled;
extern Description GlitchTripleSlashClipDescNovice;
extern Description GlitchTripleSlashClipDescIntermediate;
extern Description GlitchTripleSlashClipDescAdvanced;
extern Description GlitchTripleSlashClipDescExpert;

extern Description GlitchLedgeClipDescDisabled;
extern Description GlitchLedgeClipDescNovice;
extern Description GlitchLedgeClipDescIntermediate;
extern Description GlitchLedgeClipDescAdvanced;

extern Description GlitchSeamWalkDescDisabled;
extern Description GlitchSeamWalkDescNovice;
extern Description GlitchSeamWalkDescIntermediate;
extern Description GlitchSeamWalkDescAdvanced;
extern Description GlitchSeamWalkDescExpert;
extern Description GlitchSeamWalkDescHero;

extern Description GlitchWWTEscapeDesc;
extern Description GlitchGVTentAsChildDesc;
extern Description GlitchGFGuardSneakDesc;
extern Description GlitchItemlessWastelandDesc;
extern Description GlitchOccamsStatueDesc;
extern Description GlitchZDOoBJumpSlashDesc;
extern Description GlitchJabuStickRecoilDesc;
extern Description GlitchJabuAdultDesc;
extern Description GlitchBlueFireWallDesc;
extern Description GlitchClassicHalfieDesc;
extern Description GlitchModernHalfieDesc;
extern Description GlitchJabuSwitchDesc;
extern Description GlitchForestBKSkipDesc;
extern Description GlitchFireGrunzClipDesc;
