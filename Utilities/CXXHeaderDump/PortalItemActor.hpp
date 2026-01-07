#ifndef UE4SS_SDK_PortalItemActor_HPP
#define UE4SS_SDK_PortalItemActor_HPP

class APortalItemActor_C : public AStaticMeshActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0328 (size: 0x8)
    float rotation duration;                                                          // 0x0330 (size: 0x4)
    bool rotating;                                                                    // 0x0334 (size: 0x1)
    float rotation time;                                                              // 0x0338 (size: 0x4)
    float start rotation;                                                             // 0x033C (size: 0x4)
    FRotator base rotation;                                                           // 0x0340 (size: 0xC)
    bool collected;                                                                   // 0x034C (size: 0x1)
    class AActor* Parent;                                                             // 0x0350 (size: 0x8)
    bool RotationControlledByParent;                                                  // 0x0358 (size: 0x1)

    void UserConstructionScript();
    void OnLoaded_84BA13574D6CFC8106DF31A5EB7463E2(class UObject* Loaded);
    void ReceiveTick(float DeltaSeconds);
    void Load Char Mesh Async(TSoftObjectPtr<UStaticMesh> static mesh soft obj ref);
    void Do Rotate(float Duration, float Delay);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_PortalItemActor(int32 EntryPoint);
}; // Size: 0x359

#endif
