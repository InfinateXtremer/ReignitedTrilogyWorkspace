enum class EARFaceBlendShape {
    EyeBlinkLeft = 0,
    EyeLookDownLeft = 1,
    EyeLookInLeft = 2,
    EyeLookOutLeft = 3,
    EyeLookUpLeft = 4,
    EyeSquintLeft = 5,
    EyeWideLeft = 6,
    EyeBlinkRight = 7,
    EyeLookDownRight = 8,
    EyeLookInRight = 9,
    EyeLookOutRight = 10,
    EyeLookUpRight = 11,
    EyeSquintRight = 12,
    EyeWideRight = 13,
    JawForward = 14,
    JawLeft = 15,
    JawRight = 16,
    JawOpen = 17,
    MouthClose = 18,
    MouthFunnel = 19,
    MouthPucker = 20,
    MouthLeft = 21,
    MouthRight = 22,
    MouthSmileLeft = 23,
    MouthSmileRight = 24,
    MouthFrownLeft = 25,
    MouthFrownRight = 26,
    MouthDimpleLeft = 27,
    MouthDimpleRight = 28,
    MouthStretchLeft = 29,
    MouthStretchRight = 30,
    MouthRollLower = 31,
    MouthRollUpper = 32,
    MouthShrugLower = 33,
    MouthShrugUpper = 34,
    MouthPressLeft = 35,
    MouthPressRight = 36,
    MouthLowerDownLeft = 37,
    MouthLowerDownRight = 38,
    MouthUpperUpLeft = 39,
    MouthUpperUpRight = 40,
    BrowDownLeft = 41,
    BrowDownRight = 42,
    BrowInnerUp = 43,
    BrowOuterUpLeft = 44,
    BrowOuterUpRight = 45,
    CheekPuff = 46,
    CheekSquintLeft = 47,
    CheekSquintRight = 48,
    NoseSneerLeft = 49,
    NoseSneerRight = 50,
    MAX = 51,
};

enum class EARFaceTrackingDirection {
    FaceRelative = 0,
    FaceMirrored = 1,
    EARFaceTrackingDirection_MAX = 2,
};

enum class EARFrameSyncMode {
    SyncTickWithCameraImage = 0,
    SyncTickWithoutCameraImage = 1,
    EARFrameSyncMode_MAX = 2,
};

enum class EARLightEstimationMode {
    None = 0,
    AmbientLightEstimate = 1,
    DirectionalLightEstimate = 2,
    EARLightEstimationMode_MAX = 3,
};

enum class EARLineTraceChannels {
    None = 0,
    FeaturePoint = 1,
    GroundPlane = 2,
    PlaneUsingExtent = 4,
    PlaneUsingBoundaryPolygon = 8,
    EARLineTraceChannels_MAX = 9,
};

enum class EARPlaneDetectionMode {
    None = 0,
    HorizontalPlaneDetection = 1,
    EARPlaneDetectionMode_MAX = 2,
};

enum class EARSessionStatus {
    NotStarted = 0,
    Running = 1,
    NotSupported = 2,
    FatalError = 3,
    PermissionNotGranted = 4,
    UnsupportedConfiguration = 5,
    Other = 6,
    EARSessionStatus_MAX = 7,
};

enum class EARSessionType {
    None = 0,
    Orientation = 1,
    World = 2,
    Face = 3,
    EARSessionType_MAX = 4,
};

enum class EARTrackingQuality {
    NotTracking = 0,
    OrientationOnly = 1,
    OrientationAndPosition = 2,
    EARTrackingQuality_MAX = 3,
};

enum class EARTrackingState {
    Tracking = 0,
    NotTracking = 1,
    StoppedTracking = 2,
    EARTrackingState_MAX = 3,
};

