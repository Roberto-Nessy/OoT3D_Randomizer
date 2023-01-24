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

extern Translation noOpt;
extern Translation yesOpt;
extern Translation offOpt;
extern Translation onOpt;

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
