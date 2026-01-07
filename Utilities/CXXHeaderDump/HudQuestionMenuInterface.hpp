#ifndef UE4SS_SDK_HudQuestionMenuInterface_HPP
#define UE4SS_SDK_HudQuestionMenuInterface_HPP

class IHudQuestionMenuInterface_C : public IInterface
{

    void Question Menu Countdown - Show(FString question, FString button label 1, FString button label 2, bool button 2 is default, class UObject* Controller);
    void eula - hide();
    void eula - show(class UObject* Controller);
    void Question Menu - Close(bool immediate);
    void Question Menu - Show(FString question, FString button label 1, FString button label 2, bool button 2 is default, class UObject* Controller);
}; // Size: 0x28

#endif
