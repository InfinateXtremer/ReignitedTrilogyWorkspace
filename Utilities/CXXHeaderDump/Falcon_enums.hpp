enum class EAchievement {
    EA_000_Reignited = 0,
    EA_101_Freedom = 1,
    EA_102_Eggcelent = 2,
    EA_103_LightMyFire = 3,
    EA_104_LeafOnTheWind = 4,
    EA_105_Barnstormer = 5,
    EA_106_BurntToast = 6,
    EA_107_Kaboom = 7,
    EA_108_BirdBrained = 8,
    EA_109_BirdsOfAFeather = 9,
    EA_110_Triathlon = 10,
    EA_111_Redeye = 11,
    EA_112_WhatsInTheBox = 12,
    EA_113_CominThrough = 13,
    EA_114_SnapCracklePop = 14,
    EA_115_Arachnophobe = 15,
    EA_116_EggHunter = 16,
    EA_117_FriendlySkies = 17,
    EA_118_Gatherer = 18,
    EA_119_SafetyFirst = 19,
    EA_120_ChickenDinner = 20,
    EA_121_TrapTeam = 21,
    EA_122_UpUpAndAway = 22,
    EA_123_TropicalBreeze = 23,
    EA_124_MetalCollector = 24,
    EA_125_FoolsErrand = 25,
    EA_126_BadDoggies = 26,
    EA_127_AllPuffedUp = 27,
    EA_128_ScrapMetal = 28,
    EA_129_ChillBreeze = 29,
    EA_130_JacquesInABox = 30,
    EA_131_ImInTheMoney = 31,
    EA_132_GnastyBurn = 32,
    EA_133_Benevolent = 33,
    EA_134_DragonAndOnAndOn = 34,
    EA_135_Hoarder = 35,
    EA_136_GnastysDemise = 36,
    EA_201_Illuminated = 37,
    EA_202_EasyComeEasyGo = 38,
    EA_203_BadSushi = 39,
    EA_204_UsingYourHead = 40,
    EA_205_Exterminate = 41,
    EA_206_Rescued = 42,
    EA_207_Lockjaw = 43,
    EA_208_NotHungry = 44,
    EA_209_CrowdPleaser = 45,
    EA_210_LongDistance = 46,
    EA_211_BugControl = 47,
    EA_212_Unburnt = 48,
    EA_213_GnotCanon = 49,
    EA_214_OnTrack = 50,
    EA_215_ = 51,
    EA_216_ = 52,
    EA_217_ = 53,
    EA_218_ = 54,
    EA_219_ = 55,
    EA_220_ = 56,
    EA_221_ = 57,
    EA_222_ = 58,
    EA_223_ = 59,
    EA_224_ = 60,
    EA_225_ = 61,
    EA_226_ = 62,
    EA_227_ = 63,
    EA_228_ = 64,
    EA_229_ = 65,
    EA_230_RiptosRage = 66,
    EA_301_ = 67,
    EA_302_ = 68,
    EA_303_ = 69,
    EA_304_ = 70,
    EA_305_ = 71,
    EA_306_ = 72,
    EA_307_ = 73,
    EA_308_ = 74,
    EA_309_ = 75,
    EA_310_ = 76,
    EA_311_ = 77,
    EA_312_ = 78,
    EA_313_ = 79,
    EA_314_ = 80,
    EA_315_ = 81,
    EA_316_ = 82,
    EA_317_ = 83,
    EA_318_ = 84,
    EA_319_ = 85,
    EA_320_ = 86,
    EA_321_ = 87,
    EA_322_ = 88,
    EA_323_ = 89,
    EA_324_ = 90,
    EA_325_ = 91,
    EA_326_ = 92,
    EA_327_ = 93,
    EA_328_ = 94,
    EA_329_ = 95,
    EA_330_ = 96,
    EA_331_ = 97,
    EA_332_ = 98,
    EA_333_ = 99,
    EA_334_ = 100,
    EA_335_ = 101,
    EA_336_ = 102,
    EA_337_ = 103,
    EA_338_ = 104,
    EA_339_ = 105,
    EA_340_ = 106,
    EA_MAX = 107,
};

enum class EAutoGreet {
    Always = 0,
    Default = 1,
    Force = 2,
    Never = 3,
    Regreet = 4,
    EAutoGreet_MAX = 5,
};

enum class ECollectionSequenceState {
    None = 0,
    StartSequence = 1,
    PlayingSparxSequence = 2,
    PlayingChargeSequence = 3,
    FinishedSequence = 4,
    ECollectionSequenceState_MAX = 5,
};

enum class EFalconAreaExitTitle {
    None = 0,
    ExitArea = 1,
    GiveUp = 2,
    QuitRace = 3,
    QuitToLevel = 4,
    Unknown = 255,
    EFalconAreaExitTitle_MAX = 256,
};

enum class EFalconGameState {
    MainMenu = 0,
    LevelLoadingDirect = 1,
    LevelLoadingPortal = 2,
    InPlay = 3,
    PausedMenu = 4,
    InCutscene = 5,
    Respawning = 6,
    LevelUnloading = 7,
    EFalconGameState_MAX = 8,
};

enum class EFalconHudWidgetPosition {
    EFHP_UpperLeft = 0,
    EFHP_UpperRight = 1,
    EFHP_LowerLeft = 2,
    EFHP_LowerRight = 3,
    EFHP_LowerCenter = 4,
    EFHP_MAX = 5,
};

namespace EFalconLevelLoadable {
    enum Type {
        LevelCanLoad = 0,
        LevelNeedsPatch = 1,
        LevelNeedsChunk = 2,
        EFalconLevelLoadable_MAX = 3,
    };
}

namespace EFalconLoadScreen {
    enum Type {
        None = 0,
        GameOver = 1,
        NewGame1 = 2,
        NewGame2 = 3,
        NewGame3 = 4,
        LoadGame = 5,
        Respawn = 6,
        PortalEnter = 7,
        ReturnHome = 8,
        BalloonRide = 9,
        IntroGame3_1 = 10,
        IntroGame3_2 = 11,
        CrushDefeated = 12,
        GulpDefeated = 13,
        RiptoDefeated = 14,
        EFalconLoadScreen_MAX = 15,
    };
}

namespace EFalconPhysMaterialType {
    enum Type {
        Unknown = 0,
        Concrete = 1,
        Dirt = 2,
        Water = 3,
        Metal = 4,
        Wood = 5,
        Grass = 6,
        Glass = 7,
        Flesh = 8,
        EFalconPhysMaterialType_MAX = 9,
    };
}

enum class EFalconScreenLayerType {
    EFSLT_None = 0,
    EFSLT_Pause = 1,
    EFSLT_Gameplay = 2,
    EFLST_Loading = 3,
    EFSLT_FrontEnd = 4,
    EFLST_Debug = 5,
    EFalconScreenLayerType_MAX = 6,
};

enum class EFalconScreenType {
    EFST_None = 0,
    EFST_MainMenu = 1,
    EFST_Pause = 2,
    EFST_Inventory = 3,
    EFST_Title = 4,
    EFST_Save = 5,
    EFST_Main = 6,
    EFST_Controller = 7,
    EFST_HudTimer = 8,
    EFST_HudCounter = 9,
    EFST_Footer = 10,
    EFST_Question = 11,
    EFST_InventoryTotals = 12,
    EFST_Reticle = 13,
    EFST_MiniMap = 14,
    EFST_SpeedRunTimer = 15,
    EFST_Dialog = 16,
    EFST_DialogQuestion = 17,
    EFST_DialogDifficulty = 18,
    EFST_DialogTreasure = 19,
    EFST_HudGate = 20,
    EFST_BossBar = 21,
    EFST_LevelKey = 22,
    EFST_OrbCollected = 23,
    EFST_FlightScreen = 24,
    EFST_FlightSummary = 25,
    EFST_MAX = 26,
};

enum class EFalconTimeBarPlacement {
    EFTBP_Normal = 0,
    EFTBP_BossBattle = 1,
    EFTBP_Sparx = 2,
    EFTBP_MAX = 3,
};

enum class EFalconTimeBarType {
    EFTBT_Invincible = 0,
    EFTBT_Powerflame = 1,
    EFTBT_Superfly = 2,
    EFTBT_PowerflameBlue = 3,
    EFTBT_PowerflameGreen = 4,
    EFTBT_MAX = 5,
};

enum class EFanfareType {
    EFFT_None = 0,
    EFFT_Dragon = 1,
    EFFT_Boss = 2,
    EFFT_LevelComplete = 3,
    EFFT_SkillPoint = 4,
    EFFT_AllGems = 5,
    EFFT_PowerGate = 6,
    EFFT_AllDragons = 7,
    EFFT_AllEggs = 8,
    EFFT_1UP = 9,
    EFFT_GreenOrbs = 10,
    EFFT_GreenOrbAgain = 11,
    EFFT_TalismanAgain = 12,
    EFFT_S3Egg = 13,
    EFFT_S3EggAgain = 14,
    EFFT_S3EggAll = 15,
    EFFT_ArtGalleryUnlocked = 16,
    EFFT_MAX = 17,
};

enum class EFlightLevelResult {
    EFLR_Crash = 0,
    EFLR_Timeout = 1,
    EFLR_Success = 2,
    EFLR_Quit = 3,
    EFLR_OffCourse = 4,
    EFLR_MAX = 5,
};

enum class EFlightLevelTargetType {
    EFLT_None = 0,
    EFLT_Barrel = 1,
    EFLT_Ring = 2,
    EFLT_Plane = 3,
    EFLT_Arch = 4,
    EFLT_Chest = 5,
    EFLT_Car = 6,
    EFLT_Boat = 7,
    EFLT_Light = 8,
    EFLT_Capybara = 9,
    EFLT_EskimoSnowmobile = 10,
    EFLT_EskimoParaglider = 11,
    EFLT_Skater = 12,
    EFLT_Walrus = 13,
    EFLT_Pigeon = 14,
    EFLT_Riptoc = 15,
    EFLT_Ram = 16,
    EFLT_Biker = 17,
    EFLT_Vulture = 18,
    EFLT_Serpent = 19,
    EFLT_AllInOne = 20,
    EFLT_Orb = 21,
    EFLT_Copter = 22,
    EFLT_Arch209 = 23,
    EFLT_Arch220 = 24,
    EFLT_Arch221 = 25,
    EFLT_Boat209 = 26,
    EFLT_Light129 = 27,
    EFLT_Jumpers = 28,
    EFLT_Dandelion307 = 29,
    EFLT_Spider307 = 30,
    EFLT_Butterfly307 = 31,
    EFLT_Cow316 = 32,
    EFLT_Mower316 = 33,
    EFLT_Plane316 = 34,
    EFLT_HoneyComb325 = 35,
    EFLT_Beehive325 = 36,
    EFLT_Bee325 = 37,
    EFLT_Boat325 = 38,
    EFLT_Seagull334 = 39,
    EFLT_Lobster334 = 40,
    EFLT_Gate334 = 41,
    EFLT_Sardine334 = 42,
    EFLT_MAX = 43,
};

enum class EGateState {
    Open = 0,
    Opening = 1,
    Closing = 2,
    Closed = 3,
    EGateState_MAX = 4,
};

enum class EGraphicsOptionPreset {
    PRESET_LOW = 0,
    PRESET_MEDIUM = 1,
    PRESET_HIGH = 2,
    PRESET_ULTRA = 3,
    PRESET_CUSTOM = 4,
    PRESET_INVALID = 5,
    PRESET_MAX = 6,
};

enum class EGraphicsQuality {
    QUALITY_LOW = 0,
    QUALITY_MEDIUM = 1,
    QUALITY_HIGH = 2,
    QUALITY_ULTRA = 3,
    QUALITY_INVALID = 4,
    QUALITY_MAX = 5,
};

enum class EHudGemCountDisplayState {
    EHGCDS_OutIdle = 0,
    EHGCDS_AnimIn = 1,
    EHGCDS_InIdle = 2,
    EHGCDS_AnimOut = 3,
    EHGCDS_HudControl = 4,
    EHGCDS_MAX = 5,
};

enum class EHudHealthCountState {
    EHCS_InIdle = 0,
    EHCS_OutIdle = 1,
    EHCS_AnimIn = 2,
    EHCS_AnimOut = 3,
    EHCS_AnimOrbs = 4,
    EHCS_HudControl = 5,
    EHCS_MAX = 6,
};

enum class EIdWorld {
    None = 0,
    SunriseSpringHome = 1,
    SunnyVilla = 2,
    CloudSpires = 3,
    MoltenCrater = 4,
    _SeashellShore = 5,
    _MushroomSpeedway = 6,
    SheilasAlp = 7,
    _BuzzsDungeon = 8,
    SunnyVilla_GladiatorRink = 9,
    SunnyVilla_RapunzelsWorld = 10,
    CloudSpires_SunSeeds = 11,
    CloudSpires_BellTowers = 12,
    SheilasAlp_Foyer = 13,
    SheilasAlp_Test = 14,
    MoltenCrater_ThiefRace = 15,
    MoltenCrater_SgtByrd = 16,
    EIdWorld_MAX = 17,
};

enum ELevelRecordType {
    ELRT_TRANSPORT = 0,
    ELRT_LEVEL = 1,
    ELRT_LEVEL_SUBSET = 2,
    ELRT_MAX = 3,
};

enum ELevelTransportState {
    ELTS_QUEUED = 0,
    ELTS_IN_PROGRESS_UNLOADING = 1,
    ELTS_IN_PROGRESS_LOADING = 2,
    ELTS_WAITING = 3,
    ELTS_COMPLETE = 4,
    ELTS_MAX = 5,
};

enum ELevelTransportType {
    ELTT_LOAD_ONLY = 0,
    ELTT_UNLOAD_CURRENT_LOAD_NEW = 1,
    ELTT_UNLOAD_ONLY = 2,
    ELTT_DELAYED_START = 3,
    ELTT_MAX = 4,
};

enum class ELocMoveDir {
    Forward = 0,
    Right = 1,
    Back = 2,
    Left = 3,
    ELocMoveDir_MAX = 4,
};

enum class ELocomotionAxis {
    X_Positive = 0,
    X_Negative = 1,
    Y_Positive = 2,
    Y_Negative = 3,
    Z_Positive = 4,
    Z_Negative = 5,
    ELocomotionAxis_MAX = 6,
};

enum EManagerState {
    EMS_IDLE = 0,
    EMS_UNLOADING = 1,
    EMS_LOADING = 2,
    EMS_WAITING = 3,
    EMS_NOTIFY = 4,
    EMS_NOTIFY_DELAY = 5,
    EMS_MAX = 6,
};

enum class EPersistence {
    DefaultPersist = 0,
    NoPersist = 1,
    SemiPersist = 2,
    FullyPersist = 3,
    EPersistence_MAX = 4,
};

enum class EPlayerMoveMode {
    None = 0,
    Falling = 1,
    Gliding = 2,
    SuperFly = 3,
    Jumping = 4,
    Skateboarding = 5,
    Swimming = 6,
    Walking = 7,
    Unknown = 255,
    EPlayerMoveMode_MAX = 256,
};

enum class EPlayerVisibility {
    DoesntSee = 0,
    CanSee = 1,
    Indeterminate = 2,
    EPlayerVisibility_MAX = 3,
};

enum class EPresence {
    EP_MainMenu = 0,
    EP_SPYRO1 = 1,
    EP_SPYRO2 = 2,
    EP_SPYRO3 = 3,
    EPresence_MAX = 4,
};

enum class EQuestAction {
    DoNothing = 0,
    ChangeFocus = 1,
    ChangeGemCount = 2,
    ChangeWorld = 3,
    ChangingGameBoard = 4,
    ChangingLevelBoard = 5,
    SaveCheckpoint = 6,
    GiveAchievement = 7,
    GiveInventory = 8,
    ChangeState = 9,
    GiveEgg = 10,
    GreetPlayer = 11,
    MoveTo = 12,
    SayToPlayer = 13,
    SetPosition = 14,
    StartChallengeTimer = 15,
    ZapPlayer = 16,
    FadeOut = 17,
    FadeIn = 18,
    NUM = 19,
    EQuestAction_MAX = 20,
};

enum class ERK4SpringAxis {
    X_Positive = 0,
    X_Negative = 1,
    Y_Positive = 2,
    Y_Negative = 3,
    Z_Positive = 4,
    Z_Negative = 5,
    ERK4SpringAxis_MAX = 6,
};

enum class ESP3CharAbility {
    Jump = 0,
    Melee = 1,
    GroundPound = 2,
    FreeLook = 3,
    Glide = 4,
    Dive = 5,
    Charge = 6,
    Swim = 7,
    Fly = 8,
    Skateboard = 9,
    DoubleJump = 10,
    BounceJump = 11,
    Gun = 12,
    Bomb = 13,
    Rocket = 14,
    AirCarry = 15,
    FlappyJump = 16,
    Vehicle = 17,
    Push = 18,
    NUM = 19,
    ESP3CharAbility_MAX = 20,
};

enum class ESP3SparxEnemyStageMoveType {
    Fixed = 0,
    RelCurrent = 1,
    RelSpawn = 2,
    RelWorld = 3,
    ToTarget = 4,
    FleeTarget = 5,
    ToSpawn = 6,
    ToSpline = 7,
    SplineChase = 8,
    SplineFlee = 9,
    SplineLoop = 10,
    SplinePong = 11,
    ESP3SparxEnemyStageMoveType_MAX = 12,
};

enum class ESP3SparxEnemyStageRotType {
    Fixed = 0,
    RelVelocity = 1,
    RelMove = 2,
    RelSpawn = 3,
    RelWorld = 4,
    RelSpline = 5,
    ToTarget = 6,
    ToSpawn = 7,
    ToSpline = 8,
    ESP3SparxEnemyStageRotType_MAX = 9,
};

enum class ESP3SparxEnemyStageSeqType {
    TargetSet = 0,
    TargetDistLT = 1,
    TargetDistGT = 2,
    TargetAngLT = 3,
    TargetAngGT = 4,
    SpawnDistLT = 5,
    SpawnDistGT = 6,
    SplineDistLT = 7,
    SplineDistGT = 8,
    HealthLT = 9,
    Timer = 10,
    ShotsEmpty = 11,
    Blueprint = 12,
    ESP3SparxEnemyStageSeqType_MAX = 13,
};

enum class ESP3_BoxerBlock {
    None = 0,
    Low = 1,
    High = 2,
    ESP3_MAX = 3,
};

enum class ESP3_CustomMovementMode {
    Skateboard = 0,
    ESP3_MAX = 1,
};

enum class ESP3_ProjColType {
    Default = 0,
    ReflectStatic = 1,
    ReflectAll = 2,
    Return = 3,
    Attach = 4,
    Ignore = 5,
    ESP3_MAX = 6,
};

enum class ESP3_ProjType {
    Default = 0,
    Rocket = 1,
    Arrow = 2,
    ESP3_MAX = 3,
};

enum class ESkateBoardRaceType {
    None = 0,
    RhynocRace = 1,
    CrabRace = 2,
    TimedRace = 3,
    ESkateBoardRaceType_MAX = 4,
};

enum class ESkillPoint {
    ESPT_Invalid = 0,
    ESPT_S1_1 = 1,
    ESPT_S1_2 = 2,
    ESPT_S1_3 = 3,
    ESPT_S1_4 = 4,
    ESPT_S1_5 = 5,
    ESPT_S1_6 = 6,
    ESPT_S1_7 = 7,
    ESPT_S1_8 = 8,
    ESPT_S1_9 = 9,
    ESPT_S1_10 = 10,
    ESPT_S1_11 = 11,
    ESPT_S1_12 = 12,
    ESPT_S1_13 = 13,
    ESPT_S1_14 = 14,
    ESPT_S2_1 = 15,
    ESPT_S2_2 = 16,
    ESPT_S2_3 = 17,
    ESPT_S2_4 = 18,
    ESPT_S2_5 = 19,
    ESPT_S2_6 = 20,
    ESPT_S2_7 = 21,
    ESPT_S2_8 = 22,
    ESPT_S2_9 = 23,
    ESPT_S2_10 = 24,
    ESPT_S2_11 = 25,
    ESPT_S2_12 = 26,
    ESPT_S2_13 = 27,
    ESPT_S2_14 = 28,
    ESPT_S2_15 = 29,
    ESPT_S2_16 = 30,
    ESPT_S3_1 = 31,
    ESPT_S3_2 = 32,
    ESPT_S3_3 = 33,
    ESPT_S3_4 = 34,
    ESPT_S3_5 = 35,
    ESPT_S3_6 = 36,
    ESPT_S3_7 = 37,
    ESPT_S3_8 = 38,
    ESPT_S3_9 = 39,
    ESPT_S3_10 = 40,
    ESPT_S3_11 = 41,
    ESPT_S3_12 = 42,
    ESPT_S3_13 = 43,
    ESPT_S3_14 = 44,
    ESPT_S3_15 = 45,
    ESPT_S3_16 = 46,
    ESPT_S3_17 = 47,
    ESPT_S3_18 = 48,
    ESPT_S3_19 = 49,
    ESPT_S3_20 = 50,
    ESPT_MAX = 51,
};

enum class ESparxKeyType {
    Blue = 0,
    Green = 1,
    Red = 2,
    Yellow = 3,
    ESparxKeyType_MAX = 4,
};

enum class ESpawnOrder {
    Sequential = 0,
    Random = 1,
    ESpawnOrder_MAX = 2,
};

enum class ESpawnPointPolicy {
    Random = 0,
    Sequential = 1,
    ClosestToPlayer = 2,
    FurthestFromPlayer = 3,
    ESpawnPointPolicy_MAX = 4,
};

enum class ETargetField {
    None = 0,
    BestRescue = 1,
    Checkpoint = 2,
    CurrentState = 3,
    Eggs = 4,
    Gems = 5,
    MoveMode = 6,
    NextState = 7,
    Position = 8,
    Rescued = 9,
    Signal = 10,
    Ticking = 11,
    Trigger = 12,
    Visibility = 13,
    AllDiskFields = 14,
    BossDefeated = 15,
    GameAbilities = 16,
    WorldVisited = 17,
    Moneybags = 18,
    SpawnerSlot = 19,
    MaskFlags = 63,
    NoPersistFlag = 64,
    SemiPersistFlag = 128,
    ETargetField_MAX = 129,
};

enum class ETargetFocus {
    NoFocus = 0,
    ConditionalFocus = 1,
    KeepFocus = 2,
    ConditionalRelease = 3,
    ReleaseFocus = 4,
    ETargetFocus_MAX = 5,
};

enum ETimerBarType {
    Invincible = 0,
    Powerflame = 1,
    Superfly = 2,
    PowerflameBlue = 3,
    PowerflameGreen = 4,
    ETimerBarType_MAX = 5,
};

enum class ETrickStatus {
    Pending = 0,
    Landed = 1,
    Error = 2,
    ETrickStatus_MAX = 3,
};

