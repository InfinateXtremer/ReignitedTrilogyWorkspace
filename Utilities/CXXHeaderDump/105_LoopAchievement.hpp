#ifndef UE4SS_SDK_105_LoopAchievement_HPP
#define UE4SS_SDK_105_LoopAchievement_HPP

class A105_LoopAchievement_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UBoxComponent* Box_Upper;                                                   // 0x0320 (size: 0x8)
    class UBoxComponent* Box_Lower;                                                   // 0x0328 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0330 (size: 0x8)
    TEnumAsByte<ETimelineDirection::Type> TimerStart__Direction_F4AD207B4185AE64F0232BA9E9A740DD; // 0x0338 (size: 0x1)
    class UTimelineComponent* TimerStart;                                             // 0x0340 (size: 0x8)
    int32 State;                                                                      // 0x0348 (size: 0x4)

    void UserConstructionScript();
    void TimerStart__FinishedFunc();
    void TimerStart__UpdateFunc();
    void BndEvt__Box_Lower_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Box_Lower_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void BndEvt__Box_Upper_K2Node_ComponentBoundEvent_8_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ExecuteUbergraph_105_LoopAchievement(int32 EntryPoint);
}; // Size: 0x34C

#endif
