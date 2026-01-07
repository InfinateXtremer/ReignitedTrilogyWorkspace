#ifndef UE4SS_SDK_BP_Ragdoll_HPP
#define UE4SS_SDK_BP_Ragdoll_HPP

class ABP_Ragdoll_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UTextRenderComponent* TextRender;                                           // 0x0320 (size: 0x8)
    class USkeletalMeshComponent* Mesh;                                               // 0x0328 (size: 0x8)
    class USceneComponent* Scene;                                                     // 0x0330 (size: 0x8)
    class USkeletalMesh* Mesh_0;                                                      // 0x0338 (size: 0x8)
    class USkeletalMeshComponent* MeshComp;                                           // 0x0340 (size: 0x8)
    class UAnimSequenceBase* AnimToPlay;                                              // 0x0348 (size: 0x8)
    FName Tag;                                                                        // 0x0350 (size: 0x8)

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void SetupMaterials();
    void DestroyActors(class AActor* DestroyedActor);
    void OnDeathDelegate_Event_0(class AActor* Actor, const FGameplayEventData Payload);
    void MakeVisible();
    void DestroyActors2(class AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void OnDealDamageDelegate_Event_0(class AActor* Actor, const FGameplayEventData Payload);
    void ExecuteUbergraph_BP_Ragdoll(int32 EntryPoint);
}; // Size: 0x358

#endif
