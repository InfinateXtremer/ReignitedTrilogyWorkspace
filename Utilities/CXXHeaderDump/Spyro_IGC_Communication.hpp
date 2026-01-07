#ifndef UE4SS_SDK_Spyro_IGC_Communication_HPP
#define UE4SS_SDK_Spyro_IGC_Communication_HPP

class ISpyro_IGC_Communication_C : public IInterface
{

    void IGCNotification(class AActor* Activator, class ASpyro_IGC_Base_C* IGC, bool Start);
    void BalloonistRow(FS1_BalloonistStruct Destination, class AActor* SourceActor);
    void GetIGCValues(bool& UsePrompt, bool& PlayImmediately, bool& UsesIGCBase);
    void GetNPCValues(FText& NPCName);
    void GetSelectorValues(bool& IsSelector, int32& CurrentIndex, class AActor*& NPC, class AActor*& LocalCamActor, class AIGC_Selector_C*& SelectorRef);
    void GetRewardType(EInventoryType& Type, class ABP_Loot_BASE_C*& LootBaseActor);
    void SetTriggerState(bool Disabled);
    void IGCSave(int32 SaveIndex, bool UseFairy);
    void EndIGC(class AActor* IGC_Actor, int32 IGC_Index);
    void StartIGC(class AActor* Camera, class AActor* RequestingActor, class AActor* SpeakingNPC, float Delay);
    void DialogueControl(bool Start, FString DebugString, class AActor* TalkTarget, class UAnimSequence* VOLipSyncAnim);
    void PromptControl(bool On);
}; // Size: 0x28

#endif
