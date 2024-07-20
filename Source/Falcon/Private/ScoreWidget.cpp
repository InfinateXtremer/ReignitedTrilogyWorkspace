#include "ScoreWidget.h"

void UScoreWidget::SetCurrentScore(int32 score, int32 Goal) {
}

UScoreWidget::UScoreWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->RawScore = 0;
    this->RawGoal = 0;
}

