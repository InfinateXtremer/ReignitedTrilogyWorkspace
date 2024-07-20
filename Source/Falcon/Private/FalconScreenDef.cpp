#include "FalconScreenDef.h"

FFalconScreenDef::FFalconScreenDef() {
    this->screenType = EFalconScreenType::EFST_None;
    this->layerType = EFalconScreenLayerType::EFSLT_None;
    this->zValue = 0;
    this->isModal = false;
    this->widgetClass = NULL;
}

