#ifndef UE4SS_SDK_BP_PlanarReflection_HPP
#define UE4SS_SDK_BP_PlanarReflection_HPP

class ABP_PlanarReflection_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0320 (size: 0x8)
    class UBoxComponent* DrawBox0;                                                    // 0x0328 (size: 0x8)
    class UPlanarReflectionComponent* PlanarReflection;                               // 0x0330 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0338 (size: 0x8)
    bool VisualizeWhenNotPlaying;                                                     // 0x0340 (size: 0x1)
    TArray<TSoftObjectPtr<AActor>> TFBShowOnlyActors;                                 // 0x0348 (size: 0x10)
    bool ShowPreviewPlane;                                                            // 0x0358 (size: 0x1)

    void CopyListIfOk(bool Mode);
    void PrintToEditor(FString Message);
    void CopyOurListToPlanarReflectionList();
    void AddSelectedActors();
    void UserConstructionScript();
    void ReceiveActorBeginOverlap(class AActor* OtherActor);
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void OnLevelActivated(FName LevelName);
    void PlayerReady();
    void ExecuteUbergraph_BP_PlanarReflection(int32 EntryPoint);
}; // Size: 0x359

#endif
