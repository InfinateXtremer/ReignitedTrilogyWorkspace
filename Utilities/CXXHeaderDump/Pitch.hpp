#ifndef UE4SS_SDK_Pitch_HPP
#define UE4SS_SDK_Pitch_HPP

class UPitch_C : public UBlueprintFunctionLibrary
{

    void Get Pitch (Actor)(class AActor* A, FVector B, class UObject* __WorldContext, float& A's Pitch from B);
    void Set Pitch (Actor)(class AActor* A, FVector B, float A's Pitch from B, bool Sweep, bool Teleport, class UObject* __WorldContext, FVector& A's Adjusted Location, FHitResult& Sweep Hit Result, bool& return value);
    void Get Pitch (Scene Component)(class USceneComponent* A, FVector B, class UObject* __WorldContext, float& A's Pitch from B);
    void Set Pitch (Scene Component)(class USceneComponent* A, FVector B, float A's Pitch from B, bool Sweep, bool Teleport, class UObject* __WorldContext, FVector& A's Adjusted Location, FHitResult& Sweep Hit Result);
    void Get Pitch (Has Location)(TScriptInterface<class IHasLocation_C>& A, FVector B, class UObject* __WorldContext, float& A's Pitch from B);
    void Set Pitch (Has Location)(TScriptInterface<class IHasLocation_C> A, FVector B, float A's Pitch from B, class UObject* __WorldContext, FVector& A's Adjusted Location);
    void Get Pitch (Vector)(FVector A, FVector B, class UObject* __WorldContext, float& A's Pitch from B);
    void Set Pitch (Vector)(FVector& A, FVector B, float A's Pitch from B, class UObject* __WorldContext, FVector& A's Adjusted Location);
}; // Size: 0x28

#endif
