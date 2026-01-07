#ifndef UE4SS_SDK_DropWall_BP_HPP
#define UE4SS_SDK_DropWall_BP_HPP

class ADropWall_BP_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0320 (size: 0x8)
    class UFalconAudioBankComponent_C* FalconAudioBankComponent;                      // 0x0328 (size: 0x8)
    class UAkComponent* Ak;                                                           // 0x0330 (size: 0x8)
    class UParticleSystemComponent* PS_VFX_LS106_Wall_Lower_Dust_01;                  // 0x0338 (size: 0x8)
    class UStaticMeshComponent* Mesh;                                                 // 0x0340 (size: 0x8)
    class USceneComponent* DefaultSceneRoot1;                                         // 0x0348 (size: 0x8)
    float Timeline_0_NewTrack_0_8FD0C1F144EA07705E0D4BA81ACAB0AE;                     // 0x0350 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_8FD0C1F144EA07705E0D4BA81ACAB0AE; // 0x0354 (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x0358 (size: 0x8)
    TArray<class AActor*> Actors;                                                     // 0x0360 (size: 0x10)
    FName ActorState;                                                                 // 0x0370 (size: 0x8)
    FVector Pos_Start;                                                                // 0x0378 (size: 0xC)
    FVector Pos_End;                                                                  // 0x0384 (size: 0xC)
    FVector Offset;                                                                   // 0x0390 (size: 0xC)
    int32 CurrentCount;                                                               // 0x039C (size: 0x4)
    float MoveTime;                                                                   // 0x03A0 (size: 0x4)
    class ABP_Spyro_LevelSequenceActor_C* LevelSeqActor;                              // 0x03A8 (size: 0x8)
    class ULevelSequencePlayer* LevelSeqPlayer;                                       // 0x03B0 (size: 0x8)
    class UParticleSystem* VFX_DropStart;                                             // 0x03B8 (size: 0x8)
    FString MusicOnDrop;                                                              // 0x03C0 (size: 0x10)
    float DelayStart;                                                                 // 0x03D0 (size: 0x4)
    float DelayDrop;                                                                  // 0x03D4 (size: 0x4)
    class UAkAudioEvent* SFX_Open;                                                    // 0x03D8 (size: 0x8)
    bool CutsceneActive;                                                              // 0x03E0 (size: 0x1)

    void UserConstructionScript();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void ReceiveBeginPlay();
    void StateChange(class AActor* Actor, class UFalconEnemyStateComponent* StateComponent);
    void IGCFinished();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ExecuteUbergraph_DropWall_BP(int32 EntryPoint);
}; // Size: 0x3E1

#endif
