#ifndef UE4SS_SDK_HockeyPuppet_HPP
#define UE4SS_SDK_HockeyPuppet_HPP

class AHockeyPuppet_C : public ASplineMover_Template_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0400 (size: 0x8)
    class UStaticMeshComponent* stick;                                                // 0x0408 (size: 0x8)
    class USkeletalMeshComponent* Player;                                             // 0x0410 (size: 0x8)
    float Delay;                                                                      // 0x0418 (size: 0x4)

    void UserConstructionScript();
    void MissionAlert(class AActor* Actor, int32 Value);
    void ExecuteUbergraph_HockeyPuppet(int32 EntryPoint);
}; // Size: 0x41C

#endif
