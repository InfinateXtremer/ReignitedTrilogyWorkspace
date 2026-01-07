#ifndef UE4SS_SDK_BP_114_DruidHole_Trigger_HPP
#define UE4SS_SDK_BP_114_DruidHole_Trigger_HPP

class ABP_114_DruidHole_Trigger_C : public ATriggerBox
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0320 (size: 0x8)
    class AActor* DruidHoleRef;                                                       // 0x0328 (size: 0x8)
    class AActor* OtherTrigger;                                                       // 0x0330 (size: 0x8)

    void UserConstructionScript();
    void Energize();
    void De-energize();
    void ReceiveActorBeginOverlap(class AActor* OtherActor);
    void ExecuteUbergraph_BP_114_DruidHole_Trigger(int32 EntryPoint);
}; // Size: 0x338

#endif
