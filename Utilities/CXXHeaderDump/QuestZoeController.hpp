#ifndef UE4SS_SDK_QuestZoeController_HPP
#define UE4SS_SDK_QuestZoeController_HPP

class AQuestZoeController_C : public AZoeController
{
    class UPlayerRespawnComponent* PlayerRespawn;                                     // 0x0448 (size: 0x8)
    bool HideActorForCutscene;                                                        // 0x0450 (size: 0x1)

    void UserConstructionScript();
}; // Size: 0x451

#endif
