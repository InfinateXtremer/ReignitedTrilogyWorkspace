#include "SkateScoreWidget.h"

void USkateScoreWidget::GetTimeString(float TimeSeconds, FText& timeText) const {
}

void USkateScoreWidget::CloseWidget() {
}

USkateScoreWidget::USkateScoreWidget() {
    this->bIsNewHighScore = false;
    this->bIsTimeScore = false;
    this->DefaultShowTime = 5.00f;
}

