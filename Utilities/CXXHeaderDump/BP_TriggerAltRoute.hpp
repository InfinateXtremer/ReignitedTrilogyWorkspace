#ifndef UE4SS_SDK_BP_TriggerAltRoute_HPP
#define UE4SS_SDK_BP_TriggerAltRoute_HPP

class ABP_TriggerAltRoute_C : public ATriggerBox
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0320 (size: 0x8)
    class AActor* Blocker;                                                            // 0x0328 (size: 0x8)

    void UserConstructionScript();
    void ReceiveActorBeginOverlap(class AActor* OtherActor);
    void ExecuteUbergraph_BP_TriggerAltRoute(int32 EntryPoint);
}; // Size: 0x330

#endif
