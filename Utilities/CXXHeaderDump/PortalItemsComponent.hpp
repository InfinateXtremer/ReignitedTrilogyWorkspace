#ifndef UE4SS_SDK_PortalItemsComponent_HPP
#define UE4SS_SDK_PortalItemsComponent_HPP

class UPortalItemsComponent_C : public UPortalItemsComponentBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C0 (size: 0x8)
    class USplineComponent* OrbSpline;                                                // 0x02C8 (size: 0x8)
    FTransform TalismanPosition;                                                      // 0x02D0 (size: 0x30)
    class UStaticMesh* Activated Mesh;                                                // 0x0300 (size: 0x8)
    class UStaticMesh* DeactivatedMesh;                                               // 0x0308 (size: 0x8)
    class UStaticMesh* TalismanMesh;                                                  // 0x0310 (size: 0x8)
    class UStaticMeshComponent* Mesh Component;                                       // 0x0318 (size: 0x8)
    class UStaticMesh* UnCollectedEggMesh;                                            // 0x0320 (size: 0x8)
    class UStaticMesh* CollectedEggMesh;                                              // 0x0328 (size: 0x8)
    float CurrentPercent;                                                             // 0x0330 (size: 0x4)
    float PlacementRate;                                                              // 0x0334 (size: 0x4)
    EInventoryType ItemType1;                                                         // 0x0338 (size: 0x1)
    EInventoryType ItemType_2;                                                        // 0x0339 (size: 0x1)

    void TalismanCollected(bool& Talisman Collected);
    void PlaceItems_2();
    void SetItemVisibilities(bool visible);
    void PlaceItems(int32 Total, int32 collected);
    void SavePortalRotation(FRotator CurrentRotation);
    void TI_LevelEndItemCollected();
    void TI_LoadNextHomeworld();
    void TI_ReturnHomeMenu();
    void TI_TransitionBeginSource();
    void TI_TransitionBeginTarget(class APawn* playerCharacter, class AActor* sourcePortal);
    void TI_TransitionCompleteSource();
    void TI_TransitionCompleteTarget(bool Success, class APawn* playerCharacter, class AActor* targetPortal);
    void TI_TransitionTriggerDetectedSource();
    void TI_TransitionTriggerDetectedTarget();
    void TI_TriggerPreload();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void Replace Items();
    void TI_TurnOnOrbs();
    void ExecuteUbergraph_PortalItemsComponent(int32 EntryPoint);
}; // Size: 0x33A

#endif
