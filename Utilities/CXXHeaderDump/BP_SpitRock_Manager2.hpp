#ifndef UE4SS_SDK_BP_SpitRock_Manager2_HPP
#define UE4SS_SDK_BP_SpitRock_Manager2_HPP

class ABP_SpitRock_Manager2_C : public ABP_LevelActor_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0448 (size: 0x8)
    class UBillboardComponent* Billboard;                                             // 0x0450 (size: 0x8)
    class UChildActorComponent* SpitLocation2;                                        // 0x0458 (size: 0x8)
    class UChildActorComponent* SpitLocation1;                                        // 0x0460 (size: 0x8)
    TSubclassOf<class AActor> MySpitItem;                                             // 0x0468 (size: 0x8)
    class APhasmidProjectileActor* ProjectileRef;                                     // 0x0470 (size: 0x8)
    class UChildActorComponent* SpitLocationRef;                                      // 0x0478 (size: 0x8)
    class UStaticMesh* SpitItemDummyMesh;                                             // 0x0480 (size: 0x8)
    float Speed;                                                                      // 0x0488 (size: 0x4)
    float BounceRadius;                                                               // 0x048C (size: 0x4)
    class ALS212_SpitItem_C* SpitItem;                                                // 0x0490 (size: 0x8)

    void UserConstructionScript();
    void Gobbled();
    void ReceiveBeginPlay();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_SpitRock_Manager2(int32 EntryPoint);
}; // Size: 0x498

#endif
