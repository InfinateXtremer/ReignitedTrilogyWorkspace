enum class AkAcousticPortalState {
    Closed = 0,
    Open = 1,
    AkAcousticPortalState_MAX = 2,
};

enum class AkChannelConfiguration {
    Ak_Parent = 0,
    Ak_LFE = 1,
    Ak_1_0 = 2,
    Ak_2_0 = 3,
    Ak_2_1 = 4,
    Ak_3_0 = 5,
    Ak_3_1 = 6,
    Ak_4_0 = 7,
    Ak_4_1 = 8,
    Ak_5_0 = 9,
    Ak_5_1 = 10,
    Ak_7_1 = 11,
    Ak_5_1_2 = 12,
    Ak_7_1_2 = 13,
    Ak_7_1_4 = 14,
    Ak_Auro_9_1 = 15,
    Ak_Auro_10_1 = 16,
    Ak_Auro_11_1 = 17,
    Ak_Auro_13_1 = 18,
    Ak_Ambisonics_1st_order = 19,
    Ak_Ambisonics_2nd_order = 20,
    Ak_Ambisonics_3rd_order = 21,
    Ak_MAX = 22,
};

enum class AkMultiPositionType {
    SingleSource = 0,
    MultiSources = 1,
    MultiDirections = 2,
    AkMultiPositionType_MAX = 3,
};

enum class EReflectionFilterBits {
    Wall = 0,
    Ceiling = 1,
    Floor = 2,
    EReflectionFilterBits_MAX = 3,
};

enum class PanningRule {
    PanningRule_Speakers = 0,
    PanningRule_Headphones = 1,
    PanningRule_MAX = 2,
};

