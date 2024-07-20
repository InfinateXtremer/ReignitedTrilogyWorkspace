#include "FollowCameraSettings.h"

FFollowCameraSettings::FFollowCameraSettings() {
    this->m_radDefault = 0.00f;
    this->m_radDefaultAtLimit = 0.00f;
    this->m_yawClamp = 0.00f;
    this->m_rotSpeedH = 0.00f;
    this->m_rotSpeedV = 0.00f;
    this->m_ignoreRightStickInput = false;
    this->m_useBothSticksAsCamInput = false;
    this->m_colRadius = 0.00f;
    this->m_colClipMin = 0.00f;
    this->m_ceilingGmblOffset = 0.00f;
    this->m_ctrInterp = 0.00f;
    this->m_ctrSpeed = 0.00f;
    this->m_ctrDecelAngle = 0.00f;
    this->m_maxCtrDelta = 0.00f;
    this->m_ctrInterpV = 0.00f;
    this->m_ctrAngleV = 0.00f;
    this->m_noCentering = false;
    this->m_maxCtrDeltaFromInput = 0.00f;
    this->m_ctrYawClamp = 0.00f;
    this->m_lookAheadScalar = 0.00f;
    this->m_panAheadScalar = 0.00f;
    this->m_numFramesSmooth = 0.00f;
    this->m_numFramesSmoothPan = 0.00f;
    this->m_useRawCamPos = false;
    this->FieldOfView = 0.00f;
    this->bEnableIdleVerticalCenter = false;
    this->m_traceToCeiling = false;
    this->m_defaultPitchByHeight = 0.00f;
    this->m_traceLength = 0.00f;
    this->bHighPriority = false;
    this->m_settingsID = 0;
}

