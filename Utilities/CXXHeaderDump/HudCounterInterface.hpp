#ifndef UE4SS_SDK_HudCounterInterface_HPP
#define UE4SS_SDK_HudCounterInterface_HPP

class IHudCounterInterface_C : public IInterface
{

    void Hud Counter - Get Active Counters(TArray<FString>& counter names);
    void Hud Counter - Show While Paused(FString counter name, bool Show);
    void Hud Counter - Get Counts(FString Name, int32& current count, int32& total count, bool& is shown);
    void Hud Counter - Hide(FString counter name);
    void Hud Counter - Set Count(FString counter name, int32 Count);
    void Hud Counter - Show(FString counter name, int32 total count, int32 Start Count, float Auto Hide Seconds, TEnumAsByte<EHudPosition::Type> hud position);
}; // Size: 0x28

#endif
