#ifndef UE4SS_SDK_BP_Rotation_Gizmo_HPP
#define UE4SS_SDK_BP_Rotation_Gizmo_HPP

class ABP_Rotation_Gizmo_C : public ABP_Gizmo_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0340 (size: 0x8)
    class UStaticMeshComponent* X;                                                    // 0x0348 (size: 0x8)
    class UStaticMeshComponent* Z;                                                    // 0x0350 (size: 0x8)
    class UStaticMeshComponent* Y;                                                    // 0x0358 (size: 0x8)
    bool WasSimulatingPhysics;                                                        // 0x0360 (size: 0x1)
    bool Clicking;                                                                    // 0x0361 (size: 0x1)
    FVector CurrentAxis;                                                              // 0x0364 (size: 0xC)
    FVector FirstClickedPoint;                                                        // 0x0370 (size: 0xC)
    FRotator FirstRotation;                                                           // 0x037C (size: 0xC)
    bool UseWorldRotation;                                                            // 0x0388 (size: 0x1)
    FRotator AttachedActorsRotation;                                                  // 0x038C (size: 0xC)

    void HighlightAxis();
    void SelectAxis(bool& IsHoveringAxis, TEnumAsByte<Axis::Type>& ClosestAxis1, FVector& ClickedPoint1);
    void Debug(const FVector Center, FLinearColor LineColor, float Distance);
    void SetCurrentLocationAndOffset();
    void SetMaterialValue(class UObject* Object, float Value);
    void UserConstructionScript();
    void InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_1(FKey Key);
    void InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_0(FKey Key);
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_Rotation_Gizmo(int32 EntryPoint);
}; // Size: 0x398

#endif
