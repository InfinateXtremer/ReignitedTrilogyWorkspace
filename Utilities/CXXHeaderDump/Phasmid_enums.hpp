enum class EAutoCenteringState {
    None = 0,
    NoCamInput = 1,
    CamInput = 2,
    EAutoCenteringState_MAX = 3,
};

enum class ECollisionAdjustType {
    None = 0,
    ZOffset = 1,
    HitOffset = 2,
    ECollisionAdjustType_MAX = 3,
};

enum class ECollisionRegionFilter {
    OtherTeamOnly = 0,
    MyTeamOnly = 1,
    AllTeams = 2,
    ECollisionRegionFilter_MAX = 3,
};

enum class ECollisionRegionShape {
    Sphere = 0,
    Box = 1,
    Capsule = 2,
    Custom = 3,
    ECollisionRegionShape_MAX = 4,
};

enum class EEncounterType {
    ET_Default = 0,
    ET_MAX = 1,
};

enum class EEnemyDebugDrawOverrideType {
    EEDDO_None = 0,
    EEDDO_On = 1,
    EEDDO_Off = 2,
    EEDDO_MAX = 3,
};

enum class EFalconCausedDamageType {
    Opponent = 0,
    Ally = 1,
    NoTeam = 2,
    EFalconCausedDamageType_MAX = 3,
};

enum class EFalconDialogueRowResult {
    RowFound = 0,
    RowNotFound = 1,
    EFalconDialogueRowResult_MAX = 2,
};

enum class EFalconFacingMode {
    None = 0,
    FaceTarget = 1,
    FaceMovement = 2,
    EFalconFacingMode_MAX = 3,
};

enum class EFalconLaunchEndBlendType {
    ReapplyBlend = 0,
    StopBlend = 1,
    ContinueBlend = 2,
    EFalconLaunchEndBlendType_MAX = 3,
};

enum class EFalconMovementMode {
    None = 0,
    TraverseWaypointsOnce = 1,
    TraverseWaypointsLooped = 2,
    FleeFromPlayer = 3,
    SeekPlayer = 4,
    FacePlayer = 5,
    ReverseTraverseWaypoints = 6,
    ReverseTraverseWaypointsLooped = 7,
    ReturnToOrigin = 8,
    SplineJump = 9,
    Wander = 10,
    LaunchFromDamage = 11,
    ReturnToOriginWithoutFacing = 12,
    EFalconMovementMode_MAX = 13,
};

enum class EFalconTargetType {
    Player = 0,
    Origin = 1,
    Waypoint = 2,
    Target = 3,
    Myself = 4,
    EFalconTargetType_MAX = 5,
};

enum class EFalconTriggerType {
    Timer = 0,
    DistanceLessThan = 1,
    DistanceGreaterThan = 2,
    MontageDone = 3,
    MoveDone = 4,
    CausedDamage = 5,
    ReceivedDamage = 6,
    AnyInWatchListDestroyed = 7,
    AllInWatchListDestroyed = 8,
    WatchCountLessThan = 9,
    WatchCountGreaterThan = 10,
    CollisionVolume = 11,
    CollisionVolumeExit = 12,
    TargetVisible = 13,
    TargetNotVisible = 14,
    HitPointsEqual = 15,
    OnScreenFoV = 16,
    OffScreenFoV = 17,
    SignalReceived = 18,
    ReachedSplinePoint = 19,
    LaunchToTheHeavensDone = 20,
    Dist2DLessThan = 21,
    Dist2DGreaterThan = 22,
    PlayerHurt = 23,
    OnGround = 24,
    IsSkateboarding = 25,
    IsNotSkateboarding = 26,
    BlueprintFunction = 27,
    CurrentStateIsNot = 28,
    EFalconTriggerType_MAX = 29,
};

enum class EFollowSplineType {
    Once = 0,
    Loop = 1,
    ReverseAtEnd = 2,
    EFollowSplineType_MAX = 3,
};

enum class EImageSize {
    Small = 1,
    Medium = 2,
    Large = 3,
    ExtraLarge = 4,
    EImageSize_MAX = 5,
};

enum class EInitialOrderType {
    EIO_Idle = 0,
    EIO_Alerted = 1,
    EIO_Sniper = 2,
    EIO_Patrol = 3,
    EIO_Defend = 4,
    EIO_MoveTo = 5,
    EIO_AttackTarget = 6,
    EIO_MAX = 7,
};

enum class EInventoryType {
    EIT_None = 0,
    EIT_Treasure = 1,
    EIT_BlueGem = 2,
    EIT_RedGem = 3,
    EIT_GreenGem = 4,
    EIT_YellowGem = 5,
    EIT_PurpleGem = 6,
    EIT_S2RedGem = 7,
    EIT_S2GreenGem = 8,
    EIT_S2PurpleGem = 9,
    EIT_S2YellowGem = 10,
    EIT_S2MagentaGem = 11,
    EIT_S1FlightReward = 12,
    EIT_S2FlightReward = 13,
    EIT_TreasureEnd = 14,
    EIT_Egg = 15,
    EIT_Dragon = 16,
    EIT_Orb = 17,
    EIT_Life = 18,
    EIT_LifeOrb = 19,
    EIT_Health = 20,
    EIT_Checkpoint = 21,
    EIT_PushBlock = 22,
    EIT_S2GreenOrb = 23,
    EIT_S2SpiritParticle = 24,
    EIT_LevelVisit = 25,
    EIT_PortalExit = 26,
    EIT_LevelDiode = 27,
    EIT_Talisman = 28,
    EIT_S3Egg = 29,
    EIT_Climbing = 30,
    EIT_HeadBash = 31,
    EIT_Swimming = 32,
    EIT_Superflame = 33,
    EIT_TreasureSpent = 34,
    EIT_FlightResult = 35,
    EIT_SkillPoint = 36,
    EIT_Butterfly = 37,
    EIT_Difficulty = 38,
    EIT_LastLevelPlayed = 39,
    EIT_TimePlayed = 40,
    EIT_S2BlueButterfly = 41,
    EIT_S2Boss = 42,
    EIT_S1Boss = 43,
    EIT_S3Boss = 44,
    EIT_SparxPower_GemCollectRange = 45,
    EIT_SparxPower_GemFinder = 46,
    EIT_SparxPower_ExtraHP = 47,
    EIT_SparxPower_ChestBreaking = 48,
    EIT_ShowOrbs = 49,
    EIT_S3BonusEgg = 50,
    EIT_MAX = 51,
};

enum class EKeybindingEntry {
    NONE = 0,
    KEYBIND_ONE = 1,
    KEYBIND_TWO = 2,
    EKeybindingEntry_MAX = 3,
};

namespace ENavAreaFlag {
    enum Type {
        Default = 0,
        Jump = 1,
        Crouch = 2,
        Spline = 3,
        ENavAreaFlag_MAX = 4,
    };
}

namespace ENotificationPriority {
    enum Type {
        NotificationPriority_Highest = 0,
        NotificationPriority_Higher = 1,
        NotificationPriority_High = 2,
        NotificationPriority_Medium = 3,
        NotificationPriority_Low = 4,
        NotificationPriority_Lower = 5,
        NotificationPriority_Lowest = 6,
        NotificationPriority_MAX = 7,
    };
}

namespace ENotificationType {
    enum Type {
        NotificationType_TeamMeter = 0,
        NotificationType_GeneralMessage = 1,
        NotificationType_BonusGoal = 2,
        NotificationType_ReviveMessage = 3,
        NotificationType_MainObjective = 4,
        NotificationType_MAX = 5,
    };
}

enum class EPCMSkateEventType {
    None = 0,
    StartVert = 1,
    StartLaunch = 2,
    EndLand = 3,
    EndCrash = 4,
    AddSpinL = 5,
    AddSpinR = 6,
    AddSpinF = 7,
    AddSpinB = 8,
    AddSpinFL = 9,
    AddSpinFR = 10,
    AddSpinBL = 11,
    AddSpinBR = 12,
    EPCMSkateEventType_MAX = 13,
};

enum class EPatrolType {
    PT_Looping = 0,
    PT_BackAndForth = 1,
    PT_MAX = 2,
};

enum class EPhasmidAIOrdersStatus {
    InProgress = 0,
    Completed = 1,
    Canceled = 2,
    Invalid = 3,
    EPhasmidAIOrdersStatus_MAX = 4,
};

enum class EPhasmidAction {
    None = 0,
    Move_Left = 1,
    Move_Right = 2,
    Move_Forward = 3,
    Move_Backward = 4,
    Point_To_Treasure = 5,
    Guidebook = 6,
    Pause = 7,
    Camera_Move = 8,
    Jump = 9,
    Fire_Attack = 10,
    Charge = 11,
    Look = 12,
    UI_Confirm = 13,
    UI_Back = 14,
    UI_Left = 15,
    UI_Right = 16,
    UI_Up = 17,
    UI_Down = 18,
    UI_FaceButtonLeft = 19,
    UI_FaceButtonTop = 20,
    UI_DeleteBinding = 21,
    UI_SelectButton = 22,
    UI_SaveBindings = 23,
    UI_Previous = 24,
    UI_Next = 25,
    Side_Roll_Left = 26,
    Side_Roll_Right = 27,
    Center_Camera = 28,
    Rotate_Camera_Left = 29,
    Rotate_Camera_Right = 30,
    SkipCutscenes = 31,
    LeftRightMovement = 32,
    UpDownMovement = 33,
    DPadMovement = 34,
    Movement = 35,
    System = 36,
    EPhasmidAction_MAX = 37,
};

enum class EPhasmidActorFilterMatchType {
    Skip = 0,
    MustPass = 1,
    MustFail = 2,
    EPhasmidActorFilterMatchType_MAX = 3,
};

enum class EPhasmidCustomMovementMode {
    Blueprint = 0,
    Spline = 1,
    WallRun = 2,
    Slide = 3,
    Skateboard = 4,
    SplineJump = 5,
    AIJump = 6,
    EPhasmidCustomMovementMode_MAX = 7,
};

enum class EPhasmidFootEnum {
    BackRight = 0,
    BackLeft = 1,
    FrontLeft = 2,
    FrontRight = 3,
    EPhasmidFootEnum_MAX = 4,
};

enum class EPhasmidPathFlags {
    None = 0,
    ReverseDirection = 1,
    LoopPath = 2,
    StartAtNearest = 3,
    AutoDirection = 4,
    UsePathfindingToSpline = 5,
    ResetSplineStartKey = 6,
    LookAtFacingTarget = 7,
    EPhasmidPathFlags_MAX = 8,
};

enum class EPhasmidRichTextBlockSegmentType {
    RTB_Invalidated = 0,
    RTB_Text = 1,
    RTB_NewLine = 2,
    RTB_Image = 3,
    RTB_Material = 4,
    RTB_KeyboardIcon = 5,
    RTB_MAX = 6,
};

enum class EPhasmidSaveType {
    EPST_LevelEnd = 0,
    EPST_Checkpoint = 1,
    EPST_Respawn = 2,
    EPST_Ignore = 3,
    EPST_Delete = 4,
    EPST_MAX = 5,
};

enum class EPhasmidSplineTraversalMode {
    Flying = 0,
    Walking = 1,
    Slide = 2,
    Jump = 3,
    Swim = 4,
    NavWalking = 5,
    EPhasmidSplineTraversalMode_MAX = 6,
};

enum class EPhasmidTeamId {
    TeamOne = 0,
    TeamTwo = 1,
    TeamThree = 2,
    TeamFour = 3,
    NoTeam = 253,
    Neutral = 254,
    ELostLamaTeamId_MAX = 255,
    EPhasmidTeamId_MAX = 256,
};

enum class EPhasmidWaveSpawnPattern {
    Sequential = 0,
    Shuffle = 1,
    Random = 2,
    EPhasmidWaveSpawnPattern_MAX = 3,
};

enum class EPhasmidWaveSpawnerCommand {
    Activate = 0,
    Finish = 1,
    NextWave = 2,
    Pause = 3,
    UnPause = 4,
    EPhasmidWaveSpawnerCommand_MAX = 5,
};

enum class EPhasmidWaveSpawnerState {
    WaitingToActivate = 0,
    Active = 1,
    Paused = 2,
    Finished = 3,
    EPhasmidWaveSpawnerState_MAX = 4,
};

enum class EProcChainAxis {
    X_Positive = 0,
    X_Negative = 1,
    Y_Positive = 2,
    Y_Negative = 3,
    Z_Positive = 4,
    Z_Negative = 5,
    EProcChainAxis_MAX = 6,
};

enum class EProjectileImpactType {
    OnImpactEffect = 0,
    OnExpireEffect = 1,
    EProjectileImpactType_MAX = 2,
};

enum class EProjectileLobType {
    None = 0,
    KeepAngle = 1,
    KeepVelocity = 2,
    KeepVelocity_HighArc = 3,
    EProjectileLobType_MAX = 4,
};

enum class EProjectileOrientation {
    Manual = 0,
    OrientToPlayer = 1,
    OrientToTarget = 2,
    EProjectileOrientation_MAX = 3,
};

enum class EProjectileRotationType {
    WorldRotation = 0,
    RelativeRotation = 1,
    RelativeToLaunch = 2,
    EProjectileRotationType_MAX = 3,
};

enum class EProjectileType {
    DEFAULT = 0,
    FollowSpline = 1,
    EProjectileType_MAX = 2,
};

enum class EReenactCamInfo {
    None = 0,
    WithOffset = 1,
    WithoutOffset = 2,
    EReenactCamInfo_MAX = 3,
};

enum class ESplineSnapType {
    SnapLocationAndRotation = 0,
    SnapRotation = 1,
    None = 2,
    ESplineSnapType_MAX = 3,
};

namespace ESubObjectiveType {
    enum Type {
        SubObjectiveType_Timer = 0,
        SubObjectiveType_Percent = 1,
        SubObjectiveType_Counter = 2,
        SubObjectiveType_Boolean = 3,
        SubObjectiveType_MAX = 4,
    };
}

enum class ETriggerVolumeCommand {
    TVC_None = 0,
    TVC_NextWave = 1,
    TVC_FocusFire = 2,
    TVC_AlertAll = 3,
    TVC_MAX = 4,
};

