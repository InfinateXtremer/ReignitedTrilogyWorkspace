#ifndef UE4SS_SDK_ArchVisCharacter_HPP
#define UE4SS_SDK_ArchVisCharacter_HPP

class AArchVisCharacter : public ACharacter
{
    FString LookUpAxisName;                                                           // 0x0720 (size: 0x10)
    FString LookUpAtRateAxisName;                                                     // 0x0730 (size: 0x10)
    FString TurnAxisName;                                                             // 0x0740 (size: 0x10)
    FString TurnAtRateAxisName;                                                       // 0x0750 (size: 0x10)
    FString MoveForwardAxisName;                                                      // 0x0760 (size: 0x10)
    FString MoveRightAxisName;                                                        // 0x0770 (size: 0x10)
    float MouseSensitivityScale_Pitch;                                                // 0x0780 (size: 0x4)
    float MouseSensitivityScale_Yaw;                                                  // 0x0784 (size: 0x4)

}; // Size: 0x790

class UArchVisCharMovementComponent : public UCharacterMovementComponent
{
    FRotator RotationalAcceleration;                                                  // 0x07C0 (size: 0xC)
    FRotator RotationalDeceleration;                                                  // 0x07CC (size: 0xC)
    FRotator MaxRotationalVelocity;                                                   // 0x07D8 (size: 0xC)
    float MinPitch;                                                                   // 0x07E4 (size: 0x4)
    float MaxPitch;                                                                   // 0x07E8 (size: 0x4)
    float WalkingFriction;                                                            // 0x07EC (size: 0x4)
    float WalkingSpeed;                                                               // 0x07F0 (size: 0x4)
    float WalkingAcceleration;                                                        // 0x07F4 (size: 0x4)

}; // Size: 0x810

#endif
