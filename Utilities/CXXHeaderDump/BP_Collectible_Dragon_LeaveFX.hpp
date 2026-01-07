#ifndef UE4SS_SDK_BP_Collectible_Dragon_LeaveFX_HPP
#define UE4SS_SDK_BP_Collectible_Dragon_LeaveFX_HPP

class ABP_Collectible_Dragon_LeaveFX_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UVectorFieldComponent* VectorField1;                                        // 0x0320 (size: 0x8)
    class UVectorFieldComponent* VectorField;                                         // 0x0328 (size: 0x8)
    class USkeletalMeshComponent* SkeletalMesh;                                       // 0x0330 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0338 (size: 0x8)
    float Timeline_0_Emmisive_Strength_53F7F6374A11EFBC7E296EB25DADCE7D;              // 0x0340 (size: 0x4)
    float Timeline_0_VF_Rotation_53F7F6374A11EFBC7E296EB25DADCE7D;                    // 0x0344 (size: 0x4)
    float Timeline_0_Glow_Strength_53F7F6374A11EFBC7E296EB25DADCE7D;                  // 0x0348 (size: 0x4)
    float Timeline_0_Fringe_Intensity_53F7F6374A11EFBC7E296EB25DADCE7D;               // 0x034C (size: 0x4)
    float Timeline_0_Fringe_Size_53F7F6374A11EFBC7E296EB25DADCE7D;                    // 0x0350 (size: 0x4)
    float Timeline_0_Dissolve_Amount_53F7F6374A11EFBC7E296EB25DADCE7D;                // 0x0354 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_53F7F6374A11EFBC7E296EB25DADCE7D; // 0x0358 (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x0360 (size: 0x8)
    bool ActiveAtStart;                                                               // 0x0368 (size: 0x1)
    FColor EmissiveColor;                                                             // 0x036C (size: 0x4)

    void ApplyValues_Static(const float ParameterValue, float InputPin, float InputPin2, float InputPin3, class USkeletalMeshComponent* InputPin4, class UMeshComponent* self2, FColor inColor, float A);
    void ApplyValues(const float ParameterValue, float InputPin, float InputPin2, float InputPin3, class USkeletalMeshComponent* InputPin4, class UMeshComponent* self2, FColor inColor, float A);
    void UserConstructionScript();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void MissionReporter(class AActor* Reporter, bool Remove);
    void MissionAlert(class AActor* Actor, int32 Value);
    void MissionEnd(bool Success, bool LevelEnd);
    void MissionForceStart(class AActor* RequestingActor, float RequestValue);
    void MissionReset(class AActor* RequestActor);
    void MissionSetup(bool Active);
    void MissionSuspend(bool Suspend);
    void MissionRestore();
    void ReceiveBeginPlay();
    void MissionStart(class AActor* MasterActor, int32 Value);
    void ExecuteUbergraph_BP_Collectible_Dragon_LeaveFX(int32 EntryPoint);
}; // Size: 0x370

#endif
