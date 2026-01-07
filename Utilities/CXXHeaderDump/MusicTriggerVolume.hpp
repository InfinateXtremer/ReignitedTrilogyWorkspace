#ifndef UE4SS_SDK_MusicTriggerVolume_HPP
#define UE4SS_SDK_MusicTriggerVolume_HPP

class AMusicTriggerVolume_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0320 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0328 (size: 0x8)
    bool Retriggerable;                                                               // 0x0330 (size: 0x1)
    FString Music String On Enter 1;                                                  // 0x0338 (size: 0x10)
    FString Music String On Enter 2;                                                  // 0x0348 (size: 0x10)
    FString Music String On Enter 3;                                                  // 0x0358 (size: 0x10)
    FString Music String On Exit 1;                                                   // 0x0368 (size: 0x10)
    FString Music String On Exit 2;                                                   // 0x0378 (size: 0x10)
    FString Music String On Exit 3;                                                   // 0x0388 (size: 0x10)

    void UserConstructionScript();
    void ReceiveActorBeginOverlap(class AActor* OtherActor);
    void ReceiveActorEndOverlap(class AActor* OtherActor);
    void ExecuteUbergraph_MusicTriggerVolume(int32 EntryPoint);
}; // Size: 0x398

#endif
