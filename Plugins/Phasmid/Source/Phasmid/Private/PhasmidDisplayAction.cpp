#include "PhasmidDisplayAction.h"

FPhasmidDisplayAction::FPhasmidDisplayAction() {
    this->Action = EPhasmidAction::None;
    this->ExcludeFromKBMBindingList = false;
    this->KeysCanBeBoundToMultipleActions = false;
    this->MustBeBound = false;
}

