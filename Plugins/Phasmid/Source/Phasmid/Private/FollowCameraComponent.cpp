#include "FollowCameraComponent.h"

class AActor;

void UFollowCameraComponent::UpdateTargetOffset(FVector NewOffset) {
}

void UFollowCameraComponent::UpdateRecenterVerticalAngle(float NewAngle) {
}

void UFollowCameraComponent::SetDefaultPitchByActorZ(AActor* CameraActor, float ReferenceHeight, FVector2D MaxHeightDiff, FVector2D AngleClamp, FVector InterpSettings) {
}

void UFollowCameraComponent::SetCameraYaw(float Yaw) {
}

void UFollowCameraComponent::SetCameraPitchYaw(float Pitch, float Yaw) {
}

void UFollowCameraComponent::SetActiveCenterMode(bool NewActive) {
}

void UFollowCameraComponent::RetraceDebugInfo(int32 Index) {
}

void UFollowCameraComponent::ResetBehind(float angle) {
}

void UFollowCameraComponent::Reset() {
}

int32 UFollowCameraComponent::PushCameraSettings(const FFollowCameraSettings& Settings, FVector TransitionSettings) {
    return 0;
}

bool UFollowCameraComponent::PopCameraSettings(int32 SettingsId, FVector TransitionSettings) {
    return false;
}

void UFollowCameraComponent::PauseUpdate(bool bPause) {
}

bool UFollowCameraComponent::IsTransitioning() {
    return false;
}

FFollowCameraSettings UFollowCameraComponent::GetDefaultCameraSettings() {
    return FFollowCameraSettings{};
}

int32 UFollowCameraComponent::GetDebugCamInfoNum() {
    return 0;
}

float UFollowCameraComponent::GetCurrentRadiusTarget() const {
    return 0.0f;
}

bool UFollowCameraComponent::GetCenteringBlocked() const {
    return false;
}

float UFollowCameraComponent::GetCameraYaw() {
    return 0.0f;
}

float UFollowCameraComponent::GetCameraPitch() {
    return 0.0f;
}

bool UFollowCameraComponent::DrawDebugCamInfo(int32 Index, int32 PreviousCount, bool bDrawPullInTrace, bool bDrawPositionTrace) {
    return false;
}

bool UFollowCameraComponent::CutDebugCamInfo(int32 Index, int32 PreviousCount) {
    return false;
}

void UFollowCameraComponent::ClearYawOffsetClamp() {
}

void UFollowCameraComponent::ClearDebugCaminfo() {
}

void UFollowCameraComponent::ClearClampZByActorHeight(AActor* CameraActor) {
}

void UFollowCameraComponent::CenterCameraFromSpec(FGameplayEffectSpecHandle& SpecHandle) {
}

UFollowCameraComponent::UFollowCameraComponent() {
    this->CameraXAxisName = TEXT("CameraAxisX");
    this->CameraYAxisName = TEXT("CameraAxisY");
    this->m_radDefault = 350.00f;
    this->m_radDefaultAtLimit = -1.00f;
    this->m_yawClamp = 180.00f;
    this->m_rotSpeedH = 240.00f;
    this->m_rotSpeedV = 180.00f;
    this->m_colRadius = 7.50f;
    this->m_camRadius = 10.00f;
    this->bPullInOnCamCollisionOnly = false;
    this->m_colClipMin = 75.00f;
    this->bcolSnapIn = false;
    this->m_snapInVelocity = -300.00f;
    this->m_snapBounceThreshold = 40.00f;
    this->m_ceilingGmblOffset = 20.00f;
    this->m_ctrInterp = 0.15f;
    this->m_ctrSpeed = 180.00f;
    this->m_ctrDecelAngle = 20.00f;
    this->m_ctrDecelAngleTurnModifier = 5.00f;
    this->m_ctrDecelTimeMultiplier = 5.00f;
    this->m_maxCtrDelta = 360.00f;
    this->m_ctrInterpV = 0.15f;
    this->m_ctrAngleV = 0.00f;
    this->m_ctrYawClamp = 0.00f;
    this->m_ctrSecondTargetInterp = 0.00f;
    this->Target = NULL;
    this->SecondaryTarget = NULL;
    this->m_secondaryTgtMinDistance = 0.00f;
    this->m_secondaryTgtDistance = 0.00f;
    this->m_returnToSecondaryTargetCurve = NULL;
    this->bDebugDrawLocators = false;
    this->m_lookAheadScalar = 0.00f;
    this->m_panAheadScalar = 0.00f;
    this->m_numFramesSmooth = 10.00f;
    this->m_numFramesSmoothPan = 0.00f;
    this->m_useRawCamPos = false;
    this->m_ignoreRightStickInput = false;
    this->m_useBothSticksAsCamInput = false;
    this->m_complexTrace = false;
    this->m_idleTime = 5.00f;
    this->m_idleRampTime = 3.00f;
    this->m_idleMoveTime = 1.50f;
    this->bEnableIdleVerticalCenter = true;
    this->m_centerToHoldTime = 0.50f;
    this->ActiveCamAcceleration = 30.00f;
    this->ActiveCamDeceleration = 30.00f;
    this->m_centerInterpMin = 0.10f;
    this->bRecordCamInfo = false;
    this->ReenactCamInfo = EReenactCamInfo::None;
    this->bStabilizeCameraOnSettingsChange = false;
    this->m_traceToCeiling = false;
    this->m_defaultPitchByHeight = 0.00f;
    this->m_traceLength = 0.00f;
}

