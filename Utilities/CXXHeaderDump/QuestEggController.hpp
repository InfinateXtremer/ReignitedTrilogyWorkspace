#ifndef UE4SS_SDK_QuestEggController_HPP
#define UE4SS_SDK_QuestEggController_HPP

class AQuestEggController_C : public AEggController
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03F0 (size: 0x8)
    class UPlayerRespawnComponent* PlayerRespawn;                                     // 0x03F8 (size: 0x8)

    void UserConstructionScript();
    void EggUI(FString Name, bool alreadyCollected);
    void ExecuteUbergraph_QuestEggController(int32 EntryPoint);
}; // Size: 0x400

#endif
