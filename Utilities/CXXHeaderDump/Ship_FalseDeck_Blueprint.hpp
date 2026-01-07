#ifndef UE4SS_SDK_Ship_FalseDeck_Blueprint_HPP
#define UE4SS_SDK_Ship_FalseDeck_Blueprint_HPP

class AShip_FalseDeck_Blueprint_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0320 (size: 0x8)
    class USceneComponent* DefaultSceneRoot1;                                         // 0x0328 (size: 0x8)

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_Ship_FalseDeck_Blueprint(int32 EntryPoint);
}; // Size: 0x330

#endif
