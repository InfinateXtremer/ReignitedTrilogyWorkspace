#ifndef UE4SS_SDK_BP_PressToTalk_HPP
#define UE4SS_SDK_BP_PressToTalk_HPP

class ABP_PressToTalk_C : public APressToTalkWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0370 (size: 0x8)
    class USplineComponent* Spline;                                                   // 0x0378 (size: 0x8)
    class UPortalNameComponent_C* PortalNameComponent;                                // 0x0380 (size: 0x8)
    class UTextRenderComponent* TextRender1;                                          // 0x0388 (size: 0x8)

    void UserConstructionScript();
    void HandleNewVisibility(bool isShown);
    void ExecuteUbergraph_BP_PressToTalk(int32 EntryPoint);
}; // Size: 0x390

#endif
