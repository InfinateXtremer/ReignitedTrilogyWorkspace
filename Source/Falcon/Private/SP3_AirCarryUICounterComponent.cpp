#include "SP3_AirCarryUICounterComponent.h"

void USP3_AirCarryUICounterComponent::OnCarryCountChanged(int32 Count) {
}

USP3_AirCarryUICounterComponent::USP3_AirCarryUICounterComponent() {
    this->m_carryCounterClass = NULL;
    this->m_hudPosition = EFalconHudWidgetPosition::EFHP_UpperLeft;
    this->m_carryCounter = NULL;
}

