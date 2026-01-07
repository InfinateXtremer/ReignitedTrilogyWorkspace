#ifndef UE4SS_SDK_QuestPortalController_HPP
#define UE4SS_SDK_QuestPortalController_HPP

class AQuestPortalController_C : public APortalController
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0418 (size: 0x8)
    class UStaticMeshComponent* Plane;                                                // 0x0420 (size: 0x8)

    void UserConstructionScript();
    void ForcePortalTransport(TEnumAsByte<EFalconLoadScreen::Type> Screen);
    void ExecuteUbergraph_QuestPortalController(int32 EntryPoint);
}; // Size: 0x428

#endif
