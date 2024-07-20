#include "FollowCameraStatics.h"

class AActor;
class UCurveFloat;
class UObject;

int32 UFollowCameraStatics::PushCameraSettingsWithTransition(const UObject* WorldContextObject, FVector TransitionSettings, int32 PlayerIndex, const FFollowCameraSettings& NewCameraSettings) {
    return 0;
}

int32 UFollowCameraStatics::PushCameraSettings(const UObject* WorldContextObject, int32 PlayerIndex, const FFollowCameraSettings& NewCameraSettings) {
    return 0;
}

bool UFollowCameraStatics::PopCameraSettingsWithTransition(const UObject* WorldContextObject, FVector TransitionSettings, int32 PlayerIndex, int32 SettingsId) {
    return false;
}

bool UFollowCameraStatics::PopCameraSettings(const UObject* WorldContextObject, int32 PlayerIndex, int32 SettingsId) {
    return false;
}

FFollowCameraSettings UFollowCameraStatics::GetDefaultCameraValues(const UObject* WorldContextObject, int32 PlayerIndex) {
    return FFollowCameraSettings{};
}

void UFollowCameraStatics::CameraSetSecondaryTargetWithRelativeOffset(const UObject* WorldContextObject, int32 PlayerIndex, AActor* Target, FVector Offset, float MinDistance, float MaxDistance, UCurveFloat* ReturnToTargetCurve) {
}

void UFollowCameraStatics::CameraSetSecondaryTarget(const UObject* WorldContextObject, int32 PlayerIndex, AActor* Target, FVector Offset, UCurveFloat* ReturnToTargetCurve) {
}

void UFollowCameraStatics::CameraRemoveSecondaryTarget(const UObject* WorldContextObject, int32 PlayerIndex, AActor* Target) {
}

bool UFollowCameraStatics::CameraHasSecondaryTarget(const UObject* WorldContextObject, int32 PlayerIndex) {
    return false;
}

AActor* UFollowCameraStatics::CameraGetSecondaryTarget(const UObject* WorldContextObject, int32 PlayerIndex) {
    return NULL;
}

bool UFollowCameraStatics::CameraCannotCenter(const UObject* WorldContextObject, int32 PlayerIndex) {
    return false;
}

UFollowCameraStatics::UFollowCameraStatics() {
}

