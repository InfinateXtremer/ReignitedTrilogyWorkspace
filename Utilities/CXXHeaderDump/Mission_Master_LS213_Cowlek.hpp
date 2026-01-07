#ifndef UE4SS_SDK_Mission_Master_LS213_Cowlek_HPP
#define UE4SS_SDK_Mission_Master_LS213_Cowlek_HPP

class AMission_Master_LS213_Cowlek_C : public AMission_Master_BaseClass_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0398 (size: 0x8)
    class UBoxComponent* DestinationVolume;                                           // 0x03A0 (size: 0x8)
    class AActor* IGC_Selector_Ref;                                                   // 0x03A8 (size: 0x8)
    int32 CowlekCountGoal;                                                            // 0x03B0 (size: 0x4)
    int32 NextIGCIndex;                                                               // 0x03B4 (size: 0x4)
    bool activeMM;                                                                    // 0x03B8 (size: 0x1)
    bool isSecond?;                                                                   // 0x03B9 (size: 0x1)

    void 2_TestForWinCondition(bool& Test);
    void UserConstructionScript();
    void 2_MissionActive_Startup();
    void 3_MissionComplete_Startup();
    void 3_MissionComplete_Shutdown();
    void BndEvt__DestinationVolume_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void BndEvt__DestinationVolume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void 2_MissionActive();
    void 213 MM - Herded Event();
    void ExecuteUbergraph_Mission_Master_LS213_Cowlek(int32 EntryPoint);
}; // Size: 0x3BA

#endif
