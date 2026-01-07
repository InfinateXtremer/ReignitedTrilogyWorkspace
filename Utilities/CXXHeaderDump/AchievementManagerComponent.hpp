#ifndef UE4SS_SDK_AchievementManagerComponent_HPP
#define UE4SS_SDK_AchievementManagerComponent_HPP

class UAchievementManagerComponent_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00F0 (size: 0x8)
    bool do debug print;                                                              // 0x00F8 (size: 0x1)
    TMap<FString, float> debug cache map;                                             // 0x0100 (size: 0x50)
    bool do debug cache;                                                              // 0x0150 (size: 0x1)

    void do cache (FString achievement id);
    void OnFailure_0ACB17744E7691889279F0B03486DA7E(FName WrittenAchievementName, float WrittenProgress, int32 WrittenUserTag);
    void OnSuccess_0ACB17744E7691889279F0B03486DA7E(FName WrittenAchievementName, float WrittenProgress, int32 WrittenUserTag);
    void OnFailure_E99B77C24D0D7CB50D0A7C81D789638B(class APlayerController* PlayerController);
    void OnSuccess_E99B77C24D0D7CB50D0A7C81D789638B(class APlayerController* PlayerController);
    void OnFailure_ACA6B07648639DB92C8B08B879ED8460();
    void OnSuccess_ACA6B07648639DB92C8B08B879ED8460();
    void OnFailure_DDFA34934CC22C93BD65B58B225AB232();
    void OnSuccess_DDFA34934CC22C93BD65B58B225AB232();
    void Get Achievement Progress(FName achievement id, class AActor* Actor);
    void Set Achievement Progress(float percent complete, FName achievement id);
    void Get Achievement Details(FName achievement id, class AActor* Actor);
    void ExecuteUbergraph_AchievementManagerComponent(int32 EntryPoint);
}; // Size: 0x151

#endif
