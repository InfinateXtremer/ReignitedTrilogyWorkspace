#include "HudHealthCountWidget.h"


UHudHealthCountWidget::UHudHealthCountWidget() {
    this->uiState = EHudHealthCountState::EHCS_InIdle;
    this->lifeCount = 0;
    this->partialLifeCount = 0;
}

