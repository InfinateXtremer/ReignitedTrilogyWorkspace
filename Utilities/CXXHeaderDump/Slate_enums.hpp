enum class EDescendantScrollDestination {
    IntoView = 0,
    TopOrLeft = 1,
    Center = 2,
    EDescendantScrollDestination_MAX = 3,
};

enum class EListItemAlignment {
    EvenlyDistributed = 0,
    EvenlySize = 1,
    EvenlyWide = 2,
    LeftAligned = 3,
    RightAligned = 4,
    CenterAligned = 5,
    Fill = 6,
    EListItemAlignment_MAX = 7,
};

enum class EMultipleKeyBindingIndex {
    Primary = 0,
    Secondary = 1,
    NumChords = 2,
    EMultipleKeyBindingIndex_MAX = 3,
};

namespace EProgressBarFillType {
    enum Type {
        LeftToRight = 0,
        RightToLeft = 1,
        FillFromCenter = 2,
        TopToBottom = 3,
        BottomToTop = 4,
        EProgressBarFillType_MAX = 5,
    };
}

namespace ESelectionMode {
    enum Type {
        None = 0,
        Single = 1,
        SingleToggle = 2,
        Multi = 3,
        ESelectionMode_MAX = 4,
    };
}

namespace EStretch {
    enum Type {
        None = 0,
        Fill = 1,
        ScaleToFit = 2,
        ScaleToFitX = 3,
        ScaleToFitY = 4,
        ScaleToFill = 5,
        ScaleBySafeZone = 6,
        UserSpecified = 7,
        EStretch_MAX = 8,
    };
}

namespace EStretchDirection {
    enum Type {
        Both = 0,
        DownOnly = 1,
        UpOnly = 2,
        EStretchDirection_MAX = 3,
    };
}

namespace ETableViewMode {
    enum Type {
        List = 0,
        Tile = 1,
        Tree = 2,
        ETableViewMode_MAX = 3,
    };
}

enum class ETextFlowDirection {
    Auto = 0,
    LeftToRight = 1,
    RightToLeft = 2,
    ETextFlowDirection_MAX = 3,
};

namespace ETextJustify {
    enum Type {
        Left = 0,
        Center = 1,
        Right = 2,
        ETextJustify_MAX = 3,
    };
}

enum class ETextWrappingPolicy {
    DefaultWrapping = 0,
    AllowPerCharacterWrapping = 1,
    ETextWrappingPolicy_MAX = 2,
};

enum class EVirtualKeyboardDismissAction {
    TextChangeOnDismiss = 0,
    TextCommitOnAccept = 1,
    TextCommitOnDismiss = 2,
    EVirtualKeyboardDismissAction_MAX = 3,
};

