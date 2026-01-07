#ifndef UE4SS_SDK_BP_LS213_CannonDoor_HPP
#define UE4SS_SDK_BP_LS213_CannonDoor_HPP

class ABP_LS213_CannonDoor_C : public ABP_LevelActor_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0448 (size: 0x8)
    class UArrowComponent* PS_Orientation;                                            // 0x0450 (size: 0x8)
    class UAC_FalconSaveCollectedLocal_C* AC_FalconSaveCollectedLocal;                // 0x0458 (size: 0x8)
    class UStaticMeshComponent* DoorMesh;                                             // 0x0460 (size: 0x8)
    FGameplayTagContainer DestroyTags;                                                // 0x0468 (size: 0x20)
    class AActor* IGC_Selector;                                                       // 0x0488 (size: 0x8)
    class AActor* TurretRef;                                                          // 0x0490 (size: 0x8)
    class AActor* BuildingRef;                                                        // 0x0498 (size: 0x8)
    TArray<class AStaticMeshActor*> PropsInside;                                      // 0x04A0 (size: 0x10)
    class UDestructibleMesh* DestructibleMesh_Door;                                   // 0x04B0 (size: 0x8)
    class AIGC_Selector_C* TubIGCRef;                                                 // 0x04B8 (size: 0x8)
    class ACNS2140_SergeantTub_C* TubNPCRef;                                          // 0x04C0 (size: 0x8)
    class UParticleSystem* VFX_Ref;                                                   // 0x04C8 (size: 0x8)
    class UAkAudioEvent* SFX_Explode;                                                 // 0x04D0 (size: 0x8)
    bool wasInTurret?;                                                                // 0x04D8 (size: 0x1)
    bool isLastDoor?;                                                                 // 0x04D9 (size: 0x1)
    bool igcSkipped?;                                                                 // 0x04DA (size: 0x1)

    int32 getObjectSaveData(FPhasmidObjectSaveDataList& dataList);
    void UserConstructionScript();
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void MissionReporter(class AActor* Reporter, bool Remove);
    void MissionStart(class AActor* MasterActor, int32 Value);
    void MissionEnd(bool Success, bool LevelEnd);
    void MissionForceStart(class AActor* RequestingActor, float RequestValue);
    void MissionReset(class AActor* RequestActor);
    void MissionSetup(bool Active);
    void MissionSuspend(bool Suspend);
    void MissionRestore();
    void BP_HandleDamage(float Magnitude, FGameplayTagContainer DamageTags, class UPrimitiveComponent* HitComponent, const class AActor* DamagingActor);
    void restoreObjectSaveData(const FPhasmidObjectSaveDataList& dataList, const FPhasmidObjectSaveDataList& checkPointDataList, bool checkPointDataIsValid);
    void MissionAlert(class AActor* Actor, int32 Value);
    void ExecuteUbergraph_BP_LS213_CannonDoor(int32 EntryPoint);
}; // Size: 0x4DB

#endif
