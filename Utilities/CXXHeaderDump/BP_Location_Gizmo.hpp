#ifndef UE4SS_SDK_BP_Location_Gizmo_HPP
#define UE4SS_SDK_BP_Location_Gizmo_HPP

class ABP_Location_Gizmo_C : public ABP_Gizmo_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0340 (size: 0x8)
    class UStaticMeshComponent* X;                                                    // 0x0348 (size: 0x8)
    class UStaticMeshComponent* Z;                                                    // 0x0350 (size: 0x8)
    class UStaticMeshComponent* Y;                                                    // 0x0358 (size: 0x8)
    class UPrimitiveComponent* CurrentTouchedComponent;                               // 0x0360 (size: 0x8)
    FVector CurrentLocation;                                                          // 0x0368 (size: 0xC)
    FVector CurrentDirection;                                                         // 0x0374 (size: 0xC)
    FVector CurrentOffset;                                                            // 0x0380 (size: 0xC)
    bool WasSimulatingPhysics;                                                        // 0x038C (size: 0x1)
    bool Clicking;                                                                    // 0x038D (size: 0x1)

    void Debug(const FVector Center, FLinearColor LineColor, float Distance);
    void PickArrow(class UStaticMeshComponent* StaticMeshComp);
    void SetCurrentLocationAndOffset();
    void Movement(class UPrimitiveComponent* Component, FVector& NewParam1);
    void SetMaterialValue(class UObject* Object, float Value);
    void UserConstructionScript();
    void InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_1(FKey Key);
    void InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_0(FKey Key);
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_Location_Gizmo(int32 EntryPoint);
}; // Size: 0x38E

#endif
