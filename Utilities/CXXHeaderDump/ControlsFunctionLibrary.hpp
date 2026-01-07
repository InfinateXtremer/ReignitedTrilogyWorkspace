#ifndef UE4SS_SDK_ControlsFunctionLibrary_HPP
#define UE4SS_SDK_ControlsFunctionLibrary_HPP

class UControlsFunctionLibrary_C : public UBlueprintFunctionLibrary
{

    void SetControlAxisInversion(bool vertical axis, bool set inverted, class UObject* __WorldContext);
    void InitControlAxisFromSave(class UObject* __WorldContext);
    void GetControlAxisIsInverted(bool vertical axis, class UObject* __WorldContext, bool& axis is inverted);
    void InvertControlAxisByName(FString axis name, class UObject* __WorldContext);
}; // Size: 0x28

#endif
