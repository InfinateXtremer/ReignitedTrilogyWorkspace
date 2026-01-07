#ifndef UE4SS_SDK_CalculateTurnRate_HPP
#define UE4SS_SDK_CalculateTurnRate_HPP

class UCalculateTurnRate_C : public UBlueprintFunctionLibrary
{

    void UpdateSpeed(class AActor* Actor, float TimeDelta, float PreviousSpeed, float LerpAlpha, class UObject* __WorldContext, float& Speed);
    void CalculateSpeed(class AActor* Actor, class UObject* __WorldContext, float& Speed);
    void UpdateTurnRate(float Current Yaw, float Previous Yaw, float Time Delta, float Previous Turn Rate, class UObject* __WorldContext, float& Turn Rate);
    void CalculateTurnRate(float Current Yaw, float Previous Yaw, float Time Delta, class UObject* __WorldContext, float& Turn Rate);
}; // Size: 0x28

#endif
