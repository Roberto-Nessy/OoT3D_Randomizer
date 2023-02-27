#pragma once

#include <string>
#include <vector>

#include <settings.hpp>
#include <item_location.hpp>
#include <descriptions.hpp>

enum class OptionCategory;

bool CreatePresetDirectories();
std::vector<std::string> GetSettingsPresets();
bool SavePreset(std::string_view presetName, OptionCategory category);
bool LoadPreset(std::string_view presetName, OptionCategory category);
bool DeletePreset(std::string_view presetName, OptionCategory category);
bool SaveSpecifiedPreset(std::string_view presetName, OptionCategory category);
void SaveCachedSettings();
void LoadCachedSettings();
bool SaveCachedCosmetics();
void LoadCachedCosmetics();

typedef struct {
    std::string_view name;
    Description*     description;
    std::vector<std::pair<Option*, u8>> optionOverrides;
    std::vector<LocationKey> excludedLocations;
} PremadePreset;

extern std::vector<PremadePreset*> premadePresets;
