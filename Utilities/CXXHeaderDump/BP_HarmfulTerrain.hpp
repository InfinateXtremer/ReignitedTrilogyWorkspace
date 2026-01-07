#ifndef UE4SS_SDK_BP_HarmfulTerrain_HPP
#define UE4SS_SDK_BP_HarmfulTerrain_HPP

class ABP_HarmfulTerrain_C : public APhasmidLevelActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C8 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x03D0 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x03D8 (size: 0x8)
    class UStaticMesh* MeshReference;                                                 // 0x03E0 (size: 0x8)
    bool MeshVisibleInGame;                                                           // 0x03E8 (size: 0x1)
    FLinearColor LiquidColorInfo;                                                     // 0x03EC (size: 0x10)
    class AFlight_StageController_S3_C* S3StageController;                            // 0x0400 (size: 0x8)
    float DamageMagnitude;                                                            // 0x0408 (size: 0x4)

    void IGetHarmfulTerrainDamageMagnitude(float& DamageMagnitude);
    void IGetHarmfulTerrainLiquidColorInfo(FLinearColor& LiquidColorInfo);
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void EnableCollision(bool Enable);
    void BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void ExecuteUbergraph_BP_HarmfulTerrain(int32 EntryPoint);
}; // Size: 0x40C

#endif
