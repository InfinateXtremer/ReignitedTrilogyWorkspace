#ifndef UE4SS_SDK_BP_LS211_SnakeBridge_Animated_HPP
#define UE4SS_SDK_BP_LS211_SnakeBridge_Animated_HPP

class ABP_LS211_SnakeBridge_Animated_C : public ABP_LevelActor_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0448 (size: 0x8)
    class UCapsuleComponent* Capsule2;                                                // 0x0450 (size: 0x8)
    class UCapsuleComponent* Capsule1;                                                // 0x0458 (size: 0x8)
    class UBoxComponent* Box3;                                                        // 0x0460 (size: 0x8)
    class UBoxComponent* Box2;                                                        // 0x0468 (size: 0x8)
    class UBoxComponent* Box1;                                                        // 0x0470 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0478 (size: 0x8)
    class UCapsuleComponent* Capsule;                                                 // 0x0480 (size: 0x8)
    class UCapsuleComponent* Capsule1_01;                                             // 0x0488 (size: 0x8)
    class UCapsuleComponent* Capsule_01;                                              // 0x0490 (size: 0x8)
    class UCapsuleComponent* Capsule1_02;                                             // 0x0498 (size: 0x8)
    class UCapsuleComponent* Capsule_02;                                              // 0x04A0 (size: 0x8)
    class UBoxComponent* Box_03;                                                      // 0x04A8 (size: 0x8)
    class UCapsuleComponent* Capsule2_03;                                             // 0x04B0 (size: 0x8)
    class UCapsuleComponent* Capsule1_03;                                             // 0x04B8 (size: 0x8)
    class UAC_FalconSaveCollectedPerm_C* AC_FalconSaveCollectedPerm;                  // 0x04C0 (size: 0x8)
    class UAkComponent* AkAudio;                                                      // 0x04C8 (size: 0x8)
    class USkeletalMeshComponent* bridge;                                             // 0x04D0 (size: 0x8)
    class AStaticMeshActor* BridgeCollisionRef;                                       // 0x04D8 (size: 0x8)
    class AActor* NPC_Ref;                                                            // 0x04E0 (size: 0x8)
    class AActor* IGC_ref;                                                            // 0x04E8 (size: 0x8)

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
    void ReceiveBeginPlay();
    void MissionAlert(class AActor* Actor, int32 Value);
    void restoreObjectSaveData(const FPhasmidObjectSaveDataList& dataList, const FPhasmidObjectSaveDataList& checkPointDataList, bool checkPointDataIsValid);
    void ExecuteUbergraph_BP_LS211_SnakeBridge_Animated(int32 EntryPoint);
}; // Size: 0x4F0

#endif
