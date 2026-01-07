#ifndef UE4SS_SDK_QuestGateController_HPP
#define UE4SS_SDK_QuestGateController_HPP

class AQuestGateController_C : public AGateController
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03F8 (size: 0x8)
    TScriptInterface<class IBP_GateInterface_C> The Gate;                             // 0x0400 (size: 0x10)

    void UserConstructionScript();
    void Open(class UQuestActionsComponent* Actions);
    void CreatedController();
    void Closed(class UQuestActionsComponent* Actions);
    void ExecuteUbergraph_QuestGateController(int32 EntryPoint);
}; // Size: 0x410

#endif
