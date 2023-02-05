#pragma once
#include <string>
#include <vector>

#include "menu.hpp"

class Translation {
  public:
    Translation(std::vector<std::string> text_) : text(std::move(text_)) {
        for (u8 i = 0; i < text.size(); i++) {
            if (text[i] != "") {
                hasLanguage |= 1 << i;
            }
        }

        if (text.size() == 0) {
            text = { "" };
        }
    }

    operator std::string() const {
        u8 language = GetLanguage();
        if (hasLanguage & (1 << language)) {
            return text[language];
        }
        return text[0];
    }

  private:
    std::vector<std::string> text = { "" };
    u16 hasLanguage = 0;
};

// Reused Settings
extern Translation randSettingsText;

extern Translation stoneCountText;
extern Translation medallionCountText;
extern Translation rewardCountText;
extern Translation dungeonCountText;
extern Translation tokenCountText;

extern Translation dungeonDTText;
extern Translation dungeonDCText;
extern Translation dungeonJJBText;
extern Translation dungeonFoTText;
extern Translation dungeonFiTText;
extern Translation dungeonWaTText;
extern Translation dungeonSpTText;
extern Translation dungeonShTText;
extern Translation dungeonBotWText;
extern Translation dungeonICText;
extern Translation dungeonGTGText;
extern Translation dungeonGaCText;

extern Translation noOpt;
extern Translation yesOpt;
extern Translation offOpt;
extern Translation onOpt;
extern Translation closedOpt;
extern Translation openOpt;
extern Translation normalOpt;
extern Translation vanillaOpt;
extern Translation randomOpt;
extern Translation adultOpt;
extern Translation fastOpt;
extern Translation allOpt;
extern Translation dungeonsOpt;

// Open Settings
extern Translation forestText;
extern Translation kakGateText;
extern Translation doorOfTimeText;
extern Translation fountainText;
extern Translation jabuJabuText;
extern Translation gerudoText;
extern Translation bridgeText;
extern Translation randTrialsText;
extern Translation trialCountText;

extern Translation closedDekuOpt;
extern Translation intendedOpt;
extern Translation stonesOpt;
extern Translation medallionsOpt;
extern Translation rewardsOpt;
extern Translation tokensOpt;

// World Settings
extern Translation startingAgeText;
extern Translation shuffleEntrancesText;
extern Translation dungeonEntrancesText;
extern Translation bossEntrancesText;
extern Translation overworldEntrancesText;
extern Translation interiorEntrancesText;
extern Translation grottoEntrancesText;
extern Translation owlDropsText;
extern Translation warpSongsText;
extern Translation overworldSpawnsText;
extern Translation mixedPoolsText;
extern Translation mixDungeonsText;
extern Translation mixOverworldText;
extern Translation mixInteriorsText;
extern Translation mixGrottosText;
extern Translation decoupleEntrancesText;
extern Translation bombchusInLogicText;
extern Translation ammoDropsText;
extern Translation healthDropsText;
extern Translation mqDungeonCountText;
extern Translation setDungeonTypesText;

extern Translation childOpt;
extern Translation onGanonOpt;
extern Translation ageRestrictedOpt;
extern Translation fullOpt;
extern Translation simpleOpt;
extern Translation onBombchuOpt;
extern Translation noDropOpt;
extern Translation noRefillOpt;
extern Translation mqOpt;

// Shuffle Settings
extern Translation shuffleRewardsText;
extern Translation linksPocketText;
extern Translation shuffleSongsText;
extern Translation shopsanityText;
extern Translation tokensanityText;
extern Translation scrubsanityText;
extern Translation shuffleCowsText;
extern Translation shuffleKokiriSwordText;
extern Translation shuffleMasterSwordText;
extern Translation shuffleOcarinasText;
extern Translation shuffleWeirdEggText;
extern Translation shuffleZeldasLetterText;
extern Translation shuffleGerudoTokenText;
extern Translation shuffleBeansText;
extern Translation shuffleMerchantsText;
extern Translation shuffleAdultTradeText;
extern Translation shuffleChestGameText;
extern Translation shuffleFrogRupeesText;
extern Translation mapsCompassesText;
extern Translation keysanityText;
extern Translation gerudoKeysText;
extern Translation bossKeysanityText;
extern Translation ganonsBossKeyText;
extern Translation keyRingsText;
extern Translation gerudoFortressText;

extern Translation endOfDungeonsOpt;
extern Translation anyDungeonOpt;
extern Translation overworldOpt;
extern Translation anywhereOpt;
extern Translation dungeonRewardOpt;
extern Translation advancementOpt;
extern Translation anythingOpt;
extern Translation nothingOpt;
extern Translation songLocationsOpt;
extern Translation allTokensOpt;
extern Translation affordableOpt;
extern Translation expensiveOpt;
extern Translation randomPricesOpt;
extern Translation onNoHintsOpt;
extern Translation onWithHintsOpt;
extern Translation onSeparateOpt;
extern Translation onPackOpt;
extern Translation startWithOpt;
extern Translation ownDungeonOpt;
extern Translation LACSVanillaOpt;
extern Translation LACSMedallionsOpt;
extern Translation LACSStonesOpt;
extern Translation LACSRewardsOpt;
extern Translation LACSDungeonsOpt;
extern Translation LACSTokensOpt;
