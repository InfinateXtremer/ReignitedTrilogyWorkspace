#ifndef UE4SS_SDK_BP_CBS1003_TeslaCoil_Base_HPP
#define UE4SS_SDK_BP_CBS1003_TeslaCoil_Base_HPP

class ABP_CBS1003_TeslaCoil_Base_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0320 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0328 (size: 0x8)

    void UserConstructionScript();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ExecuteUbergraph_BP_CBS1003_TeslaCoil_Base(int32 EntryPoint);
}; // Size: 0x330

#endif
