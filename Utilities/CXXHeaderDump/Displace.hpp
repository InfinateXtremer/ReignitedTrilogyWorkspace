#ifndef UE4SS_SDK_Displace_HPP
#define UE4SS_SDK_Displace_HPP

class UDisplace_C : public UBlueprintFunctionLibrary
{

    void Displace (Actor)(class AActor* Actor, float Length, float Pitch, float Yaw, bool Sweep, bool Teleport, class UObject* __WorldContext, FVector& Actor's Adjusted Location, FHitResult& Sweep Hit Result, bool& return value);
    void Displace (Scene Component)(class USceneComponent* Scene Component, float Length, float Pitch, float Yaw, bool Sweep, bool Teleport, class UObject* __WorldContext, FVector& Scene Component's Adjusted Location, FHitResult& Sweep Hit Result);
    void Displace (Has Location)(TScriptInterface<class IHasLocation_C> Target, float Length, float Pitch, float Yaw, class UObject* __WorldContext, FVector& Target's Adjusted Location);
    void Displace (Vector)(FVector& Location, float Length, float Pitch, float Yaw, class UObject* __WorldContext, FVector& Adjusted Location);
}; // Size: 0x28

#endif
