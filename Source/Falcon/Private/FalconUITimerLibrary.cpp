#include "FalconUITimerLibrary.h"

void UFalconUITimerLibrary::K2_UnpauseFalconUITimer(FTimerHandle Handle) {
}

FTimerHandle UFalconUITimerLibrary::K2_SetFalconUITimer(FTimerDynamicDelegate Delegate, float Time, bool bLooping) {
    return FTimerHandle{};
}

void UFalconUITimerLibrary::K2_PauseFalconUITimer(FTimerHandle Handle) {
}

bool UFalconUITimerLibrary::K2_IsFalconUITimerPaused(FTimerHandle Handle) {
    return false;
}

bool UFalconUITimerLibrary::K2_IsFalconUITimerActive(FTimerHandle Handle) {
    return false;
}

float UFalconUITimerLibrary::K2_GetFalconUITimeRemaining(FTimerHandle Handle) {
    return 0.0f;
}

float UFalconUITimerLibrary::K2_GetFalconUITimeElapsed(FTimerHandle Handle) {
    return 0.0f;
}

bool UFalconUITimerLibrary::K2_DoesFalconUITimerExist(FTimerHandle Handle) {
    return false;
}

void UFalconUITimerLibrary::K2_ClearFalconUITimer(FTimerHandle Handle) {
}

void UFalconUITimerLibrary::K2_ClearAndInvalidateFalconUITimer(FTimerHandle& Handle) {
}

UFalconUITimerLibrary::UFalconUITimerLibrary() {
}

