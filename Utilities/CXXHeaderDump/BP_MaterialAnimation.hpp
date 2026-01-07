#ifndef UE4SS_SDK_BP_MaterialAnimation_HPP
#define UE4SS_SDK_BP_MaterialAnimation_HPP

class ABP_MaterialAnimation_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UTextRenderComponent* TextRender;                                           // 0x0320 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0328 (size: 0x8)
    float TimeMultiplier;                                                             // 0x0330 (size: 0x4)
    float Value_Current;                                                              // 0x0334 (size: 0x4)
    TArray<class AStaticMeshActor*> AnimatingMeshes;                                  // 0x0338 (size: 0x10)
    float Interval;                                                                   // 0x0348 (size: 0x4)
    FName MaterialParameter;                                                          // 0x0350 (size: 0x8)
    float ValueMin;                                                                   // 0x0358 (size: 0x4)
    float ValueMax;                                                                   // 0x035C (size: 0x4)

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_MaterialAnimation(int32 EntryPoint);
}; // Size: 0x360

#endif
