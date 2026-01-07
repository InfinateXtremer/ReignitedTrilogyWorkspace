#ifndef UE4SS_SDK_DifficultyManager_HPP
#define UE4SS_SDK_DifficultyManager_HPP

class UDifficultyManager_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00F0 (size: 0x8)
    float TimeDilationNow;                                                            // 0x00F8 (size: 0x4)
    bool DifficultyTimeDilationEnabled;                                               // 0x00FC (size: 0x1)
    TMap<FString, float> StateTimeDilationMapEasy;                                    // 0x0100 (size: 0x50)
    TMap<FString, float> StateTimeDilationMapNormal;                                  // 0x0150 (size: 0x50)
    TMap<FString, float> StateTimeDilationMapHard;                                    // 0x01A0 (size: 0x50)
    TMap<FString, float> StateTimeDilationMapNightmare;                               // 0x01F0 (size: 0x50)
    float TimeDilationEasy;                                                           // 0x0240 (size: 0x4)
    float TimeDilationNormal;                                                         // 0x0244 (size: 0x4)
    float TimeDilationHard;                                                           // 0x0248 (size: 0x4)
    float TimeDilationNightmare;                                                      // 0x024C (size: 0x4)

    void GetCurrentStateTimeDilationMap(TMap<FString, float>& CurrentStateTimeDilationMap);
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_DifficultyManager(int32 EntryPoint);
}; // Size: 0x250

#endif
