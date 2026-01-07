#ifndef UE4SS_SDK_BP_Mine_HPP
#define UE4SS_SDK_BP_Mine_HPP

class ABP_Mine_C : public ABP_LevelActor_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0448 (size: 0x8)
    class USphereComponent* Sphere1;                                                  // 0x0450 (size: 0x8)
    class UStaticMeshComponent* Sphere;                                               // 0x0458 (size: 0x8)
    class USplineComponent* Spline;                                                   // 0x0460 (size: 0x8)
    class USceneComponent* Scene;                                                     // 0x0468 (size: 0x8)
    float Timeline_0_0_NewTrack_0_57E820304C82AF53F731B48D731C6557;                   // 0x0470 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0_0__Direction_57E820304C82AF53F731B48D731C6557; // 0x0474 (size: 0x1)
    class UTimelineComponent* Timeline_0_0;                                           // 0x0478 (size: 0x8)
    float Timeline_2_Glow_E62EA396452F28EE3DC33384CC68C229;                           // 0x0480 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_2__Direction_E62EA396452F28EE3DC33384CC68C229; // 0x0484 (size: 0x1)
    class UTimelineComponent* Timeline_2;                                             // 0x0488 (size: 0x8)
    float Timeline_1_MOvement_78DE934B4D5A19AE20C0488691FD2C23;                       // 0x0490 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_1__Direction_78DE934B4D5A19AE20C0488691FD2C23; // 0x0494 (size: 0x1)
    class UTimelineComponent* Timeline_1;                                             // 0x0498 (size: 0x8)
    FGameplayTagContainer FireTag;                                                    // 0x04A0 (size: 0x20)
    float StartDelay;                                                                 // 0x04C0 (size: 0x4)
    float EndDelay;                                                                   // 0x04C4 (size: 0x4)
    class AActor* MyController;                                                       // 0x04C8 (size: 0x8)
    bool GameOver;                                                                    // 0x04D0 (size: 0x1)
    bool Stationary;                                                                  // 0x04D1 (size: 0x1)
    class UMaterialInstanceDynamic* Material;                                         // 0x04D8 (size: 0x8)

    void UserConstructionScript();
    void Timeline_0_0__FinishedFunc();
    void Timeline_0_0__UpdateFunc();
    void Timeline_1__FinishedFunc();
    void Timeline_1__UpdateFunc();
    void Timeline_2__FinishedFunc();
    void Timeline_2__UpdateFunc();
    void MissionEnd(bool Success, bool LevelEnd);
    void MissionForceStart(class AActor* RequestingActor, float RequestValue);
    void MissionReset(class AActor* RequestActor);
    void MissionSetup(bool Active);
    void MissionSuspend(bool Suspend);
    void MissionRestore();
    void ReceiveBeginPlay();
    void BP_HandleDamage(float Magnitude, FGameplayTagContainer DamageTags, class UPrimitiveComponent* HitComponent, const class AActor* DamagingActor);
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void MissionStart(class AActor* MasterActor, int32 Value);
    void MissionAlert(class AActor* Actor, int32 Value);
    void MissionReporter(class AActor* Reporter, bool Remove);
    void ExecuteUbergraph_BP_Mine(int32 EntryPoint);
}; // Size: 0x4E0

#endif
