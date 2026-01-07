#ifndef UE4SS_SDK_ChaseSpeedManager_HPP
#define UE4SS_SDK_ChaseSpeedManager_HPP

class UChaseSpeedManager_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00F0 (size: 0x8)
    float FinalDesiredDistance;                                                       // 0x00F8 (size: 0x4)
    float InitialDesiredDistance;                                                     // 0x00FC (size: 0x4)
    float DistanceShiftTime;                                                          // 0x0100 (size: 0x4)
    float MaxSpeed;                                                                   // 0x0104 (size: 0x4)
    float MinSpeed;                                                                   // 0x0108 (size: 0x4)
    bool ChaseIsOn;                                                                   // 0x010C (size: 0x1)
    float LerpPercent;                                                                // 0x0110 (size: 0x4)
    float CurrentDesiredDistance;                                                     // 0x0114 (size: 0x4)
    float CurrentDesiredSpeed;                                                        // 0x0118 (size: 0x4)
    float CurrentDeltaSeconds;                                                        // 0x011C (size: 0x4)
    float ChaseTime;                                                                  // 0x0120 (size: 0x4)
    float AccelerationFactor;                                                         // 0x0124 (size: 0x4)
    float SpeedResetDistance;                                                         // 0x0128 (size: 0x4)
    bool PreChase;                                                                    // 0x012C (size: 0x1)
    float PreviousVelocity;                                                           // 0x0130 (size: 0x4)
    class UAkComponent* AkComponent;                                                  // 0x0138 (size: 0x8)
    class UAkAudioEvent* HAHA Audio;                                                  // 0x0140 (size: 0x8)

    void SetDesiredSpeed(float DistanceDifference);
    void CheckCurrentDistance(float& DistanceDifference);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void Begin Chase();
    void Pause Chase();
    void Reset Chase Time();
    void Haha();
    void Initialize Bonk Laugh(class UAkComponent* AK Component, class UAkAudioEvent* HAHA event);
    void ExecuteUbergraph_ChaseSpeedManager(int32 EntryPoint);
}; // Size: 0x148

#endif
