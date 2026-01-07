#ifndef UE4SS_SDK_BP_LS115_SwayDruid_KillPlane_HPP
#define UE4SS_SDK_BP_LS115_SwayDruid_KillPlane_HPP

class ABP_LS115_SwayDruid_KillPlane_C : public ATriggerBox
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0320 (size: 0x8)
    TArray<class ABP_CES1035_GreenDruid_C*> Druids;                                   // 0x0328 (size: 0x10)

    void UserConstructionScript();
    void ReceiveActorBeginOverlap(class AActor* OtherActor);
    void ExecuteUbergraph_BP_LS115_SwayDruid_KillPlane(int32 EntryPoint);
}; // Size: 0x338

#endif
