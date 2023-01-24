#include "options.hpp"

//clang-format off
//Translation  = Translation({/* English */ "", /* French */ "", /* Spanish */ "", /* Italian */ "", /* German */ ""});
// Reused Settings
Translation randSettingsText = Translation({/* English */ "Randomize Settings", /* French */ "", /* Spanish */ "", /* Italian */ "", /* German */ ""});

Translation stoneCountText     = Translation({/* English */ "Stone Count",     /* French */ "", /* Spanish */ "", /* Italian */ "", /* German */ ""});
Translation medallionCountText = Translation({/* English */ "Medallion Count", /* French */ "", /* Spanish */ "", /* Italian */ "", /* German */ ""});
Translation rewardCountText    = Translation({/* English */ "Reward Count",    /* French */ "", /* Spanish */ "", /* Italian */ "", /* German */ ""});
Translation dungeonCountText   = Translation({/* English */ "Dungeon Count",   /* French */ "", /* Spanish */ "", /* Italian */ "", /* German */ ""});
Translation tokenCountText     = Translation({/* English */ "Token Count",     /* French */ "", /* Spanish */ "", /* Italian */ "", /* German */ ""});

Translation dungeonDTText   = Translation({/* English */ "Deku Tree",          /* French */ "", /* Spanish */ "", /* Italian */ "", /* German */ ""});
Translation dungeonDCText   = Translation({/* English */ "Dodongo's Cavern",   /* French */ "", /* Spanish */ "", /* Italian */ "", /* German */ ""});
Translation dungeonJJBText  = Translation({/* English */ "Jabu-Jabu's Belly",  /* French */ "", /* Spanish */ "", /* Italian */ "", /* German */ ""});
Translation dungeonFoTText  = Translation({/* English */ "Forest Temple",      /* French */ "", /* Spanish */ "", /* Italian */ "", /* German */ ""});
Translation dungeonFiTText  = Translation({/* English */ "Fire Temple",        /* French */ "", /* Spanish */ "", /* Italian */ "", /* German */ ""});
Translation dungeonWaTText  = Translation({/* English */ "Water Temple",       /* French */ "", /* Spanish */ "", /* Italian */ "", /* German */ ""});
Translation dungeonSpTText  = Translation({/* English */ "Spirit Temple",      /* French */ "", /* Spanish */ "", /* Italian */ "", /* German */ ""});
Translation dungeonShTText  = Translation({/* English */ "Shadow Temple",      /* French */ "", /* Spanish */ "", /* Italian */ "", /* German */ ""});
Translation dungeonBotWText = Translation({/* English */ "Bottom of the Well", /* French */ "", /* Spanish */ "", /* Italian */ "", /* German */ ""});
Translation dungeonICText   = Translation({/* English */ "Ice Cavern",         /* French */ "", /* Spanish */ "", /* Italian */ "", /* German */ ""});
Translation dungeonGTGText  = Translation({/* English */ "Training Grounds",   /* French */ "", /* Spanish */ "", /* Italian */ "", /* German */ ""});
Translation dungeonGaCText  = Translation({/* English */ "Ganon's Castle",     /* French */ "", /* Spanish */ "", /* Italian */ "", /* German */ ""});

Translation noOpt      = Translation({/* English */ "No",      /* French */ "", /* Spanish */ "", /* Italian */ "", /* German */ ""});
Translation yesOpt     = Translation({/* English */ "Yes",     /* French */ "", /* Spanish */ "", /* Italian */ "", /* German */ ""});
Translation offOpt     = Translation({/* English */ "Off",     /* French */ "", /* Spanish */ "", /* Italian */ "", /* German */ ""});
Translation onOpt      = Translation({/* English */ "On",      /* French */ "", /* Spanish */ "", /* Italian */ "", /* German */ ""});
Translation closedOpt  = Translation({/* English */ "Closed",  /* French */ "", /* Spanish */ "", /* Italian */ "", /* German */ ""});
Translation openOpt    = Translation({/* English */ "Open",    /* French */ "", /* Spanish */ "", /* Italian */ "", /* German */ ""});
Translation normalOpt  = Translation({/* English */ "Normal",  /* French */ "", /* Spanish */ "", /* Italian */ "", /* German */ ""});
Translation vanillaOpt = Translation({/* English */ "Vanilla", /* French */ "", /* Spanish */ "", /* Italian */ "", /* German */ ""});
Translation randomOpt  = Translation({/* English */ "Random",  /* French */ "", /* Spanish */ "", /* Italian */ "", /* German */ ""});
Translation adultOpt   = Translation({/* English */ "Adult",   /* French */ "", /* Spanish */ "", /* Italian */ "", /* German */ ""});
Translation fastOpt    = Translation({/* English */ "Fast",    /* French */ "", /* Spanish */ "", /* Italian */ "", /* German */ ""});
Translation allOpt     = Translation({/* English */ "All",     /* French */ "", /* Spanish */ "", /* Italian */ "", /* German */ ""});

// Open Settings
Translation forestText     = Translation({/* English */ "Forest",                /* French */ "", /* Spanish */ "", /* Italian */ "", /* German */ ""});
Translation kakGateText    = Translation({/* English */ "Kakariko Gate",         /* French */ "", /* Spanish */ "", /* Italian */ "", /* German */ ""});
Translation doorOfTimeText = Translation({/* English */ "Door of Time",          /* French */ "", /* Spanish */ "", /* Italian */ "", /* German */ ""});
Translation fountainText   = Translation({/* English */ "Zora's Fountain",       /* French */ "", /* Spanish */ "", /* Italian */ "", /* German */ ""});
Translation jabuJabuText   = Translation({/* English */ "Jabu-Jabu",             /* French */ "", /* Spanish */ "", /* Italian */ "", /* German */ ""});
Translation gerudoText     = Translation({/* English */ "Gerudo Fortress",       /* French */ "", /* Spanish */ "", /* Italian */ "", /* German */ ""});
Translation bridgeText     = Translation({/* English */ "Rainbow Bridge",        /* French */ "", /* Spanish */ "", /* Italian */ "", /* German */ ""});
Translation randTrialsText = Translation({/* English */ "Random Ganon's Trials", /* French */ "", /* Spanish */ "", /* Italian */ "", /* German */ ""});
Translation trialCountText = Translation({/* English */ "Trial Count",           /* French */ "", /* Spanish */ "", /* Italian */ "", /* German */ ""});

Translation closedDekuOpt = Translation({/* English */ "Closed Deku", /* French */ "", /* Spanish */ "", /* Italian */ "", /* German */ ""});
Translation intendedOpt   = Translation({/* English */ "Intended",    /* French */ "", /* Spanish */ "", /* Italian */ "", /* German */ ""});
Translation stonesOpt     = Translation({/* English */ "Stones",      /* French */ "", /* Spanish */ "", /* Italian */ "", /* German */ ""});
Translation medallionsOpt = Translation({/* English */ "Medallions",  /* French */ "", /* Spanish */ "", /* Italian */ "", /* German */ ""});
Translation rewardsOpt    = Translation({/* English */ "Rewards",     /* French */ "", /* Spanish */ "", /* Italian */ "", /* German */ ""});
Translation dungeonsOpt   = Translation({/* English */ "Dungeons",    /* French */ "", /* Spanish */ "", /* Italian */ "", /* German */ ""});
Translation tokensOpt     = Translation({/* English */ "Tokens",      /* French */ "", /* Spanish */ "", /* Italian */ "", /* German */ ""});

// World Settings
Translation startingAgeText        = Translation({/* English */ "Starting Age",            /* French */ "", /* Spanish */ "", /* Italian */ "", /* German */ ""});
Translation shuffleEntrancesText   = Translation({/* English */ "Shuffle Entrances",       /* French */ "", /* Spanish */ "", /* Italian */ "", /* German */ ""});
Translation dungeonEntrancesText   = Translation({/* English */ "Dungeon Entrances",       /* French */ "", /* Spanish */ "", /* Italian */ "", /* German */ ""});
Translation bossEntrancesText      = Translation({/* English */ "Boss Entrances",          /* French */ "", /* Spanish */ "", /* Italian */ "", /* German */ ""});
Translation overworldEntrancesText = Translation({/* English */ "Overworld Entrances",     /* French */ "", /* Spanish */ "", /* Italian */ "", /* German */ ""});
Translation interiorEntrancesText  = Translation({/* English */ "Interior Entrances",      /* French */ "", /* Spanish */ "", /* Italian */ "", /* German */ ""});
Translation grottoEntrancesText    = Translation({/* English */ "Grotto Entrances",        /* French */ "", /* Spanish */ "", /* Italian */ "", /* German */ ""});
Translation owlDropsText           = Translation({/* English */ "Owl Drops",               /* French */ "", /* Spanish */ "", /* Italian */ "", /* German */ ""});
Translation warpSongsText          = Translation({/* English */ "Warp Songs",              /* French */ "", /* Spanish */ "", /* Italian */ "", /* German */ ""});
Translation overworldSpawnsText    = Translation({/* English */ "Overworld Spawns",        /* French */ "", /* Spanish */ "", /* Italian */ "", /* German */ ""});
Translation mixedPoolsText         = Translation({/* English */ "Mixed Entrance Pools",    /* French */ "", /* Spanish */ "", /* Italian */ "", /* German */ ""});
Translation mixDungeonsText        = Translation({/* English */ "Mix Dungeons",            /* French */ "", /* Spanish */ "", /* Italian */ "", /* German */ ""});
Translation mixOverworldText       = Translation({/* English */ "Mix Overworld",           /* French */ "", /* Spanish */ "", /* Italian */ "", /* German */ ""});
Translation mixInteriorsText       = Translation({/* English */ "Mix Interiors",           /* French */ "", /* Spanish */ "", /* Italian */ "", /* German */ ""});
Translation mixGrottosText         = Translation({/* English */ "Mix Grottos",             /* French */ "", /* Spanish */ "", /* Italian */ "", /* German */ ""});
Translation decoupleEntrancesText  = Translation({/* English */ "Decouple Entrances",      /* French */ "", /* Spanish */ "", /* Italian */ "", /* German */ ""});
Translation bombchusInLogicText    = Translation({/* English */ "Bombchus in Logic",       /* French */ "", /* Spanish */ "", /* Italian */ "", /* German */ ""});
Translation ammoDropsText          = Translation({/* English */ "Ammo Drops",              /* French */ "", /* Spanish */ "", /* Italian */ "", /* German */ ""});
Translation healthDropsText        = Translation({/* English */ "Heart Drops and Refills", /* French */ "", /* Spanish */ "", /* Italian */ "", /* German */ ""});
Translation mqDungeonCountText     = Translation({/* English */ "MQ Dungeon Count",        /* French */ "", /* Spanish */ "", /* Italian */ "", /* German */ ""});
Translation setDungeonTypesText    = Translation({/* English */ "Set Dungeon Types",       /* French */ "", /* Spanish */ "", /* Italian */ "", /* German */ ""});

Translation childOpt         = Translation({/* English */ "Child",          /* French */ "", /* Spanish */ "", /* Italian */ "", /* German */ ""});
Translation onGanonOpt       = Translation({/* English */ "On + Ganon",     /* French */ "", /* Spanish */ "", /* Italian */ "", /* German */ ""});
Translation ageRestrictedOpt = Translation({/* English */ "Age Restricted", /* French */ "", /* Spanish */ "", /* Italian */ "", /* German */ ""});
Translation fullOpt          = Translation({/* English */ "Full",           /* French */ "", /* Spanish */ "", /* Italian */ "", /* German */ ""});
Translation simpleOpt        = Translation({/* English */ "Simple",         /* French */ "", /* Spanish */ "", /* Italian */ "", /* German */ ""});
Translation onBombchuOpt     = Translation({/* English */ "On + Bombchu",   /* French */ "", /* Spanish */ "", /* Italian */ "", /* German */ ""});
Translation noDropOpt        = Translation({/* English */ "No Drop",        /* French */ "", /* Spanish */ "", /* Italian */ "", /* German */ ""});
Translation noRefillOpt      = Translation({/* English */ "No Refill",      /* French */ "", /* Spanish */ "", /* Italian */ "", /* German */ ""});
Translation mqOpt            = Translation({/* English */ "Master Quest",   /* French */ "", /* Spanish */ "", /* Italian */ "", /* German */ ""});
