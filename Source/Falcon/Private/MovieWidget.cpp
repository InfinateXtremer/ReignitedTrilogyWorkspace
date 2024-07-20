#include "MovieWidget.h"

UMovieWidget::UMovieWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->Canvas = NULL;
    this->Image = NULL;
    this->Material = NULL;
}

