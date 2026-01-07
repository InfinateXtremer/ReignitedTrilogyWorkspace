#ifndef UE4SS_SDK_CNS1146_TucoTheBalloonist_HPP
#define UE4SS_SDK_CNS1146_TucoTheBalloonist_HPP

class ACNS1146_TucoTheBalloonist_C : public ACNS1127_MarcoTheBalloonist_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0978 (size: 0x8)
    TArray<int32> IntegerArray;                                                       // 0x0980 (size: 0x10)
    int32 Index_StoneHill;                                                            // 0x0990 (size: 0x4)
    int32 Index_DryCanyon;                                                            // 0x0994 (size: 0x4)
    int32 Index_CliffTown;                                                            // 0x0998 (size: 0x4)
    int32 Index_TownSquare;                                                           // 0x099C (size: 0x4)
    int32 Index_MagicHome;                                                            // 0x09A0 (size: 0x4)
    int32 Index_WizardPeak;                                                           // 0x09A4 (size: 0x4)
    int32 LastOneSuggested;                                                           // 0x09A8 (size: 0x4)

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void PopulateChoices();
    void UpdateIGCValues();
    void restoreObjectSaveData(const FPhasmidObjectSaveDataList& dataList, const FPhasmidObjectSaveDataList& checkPointDataList, bool checkPointDataIsValid);
    void ExecuteUbergraph_CNS1146_TucoTheBalloonist(int32 EntryPoint);
}; // Size: 0x9AC

#endif
