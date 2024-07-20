#include "FalconTimeBarWidget.h"





EFalconTimeBarPlacement UFalconTimeBarWidget::GetPlacementType(int32 inType) {
    return EFalconTimeBarPlacement::EFTBP_Normal;
}


UFalconTimeBarWidget::UFalconTimeBarWidget() {
    this->_placementType = EFalconTimeBarPlacement::EFTBP_Normal;
}

