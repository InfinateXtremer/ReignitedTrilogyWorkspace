#ifndef UE4SS_SDK_HorizontalDistance_HPP
#define UE4SS_SDK_HorizontalDistance_HPP

class UHorizontalDistance_C : public UBlueprintFunctionLibrary
{

    void Set Horizontal Distance (Actor)(class AActor* A, FVector B, float A's Horizontal Distance from B, bool Sweep, bool Teleport, class UObject* __WorldContext, FVector& A's Adjusted Location, FHitResult& Sweep Hit Result, bool& return value);
    void Get Horizontal Distance (Actor)(class AActor* A, FVector B, class UObject* __WorldContext, float& A's Horizontal Distance from B);
    void Set Horizontal Distance (Scene Component)(class USceneComponent* A, FVector B, float A's Horizontal Distance from B, bool Sweep, bool Teleport, class UObject* __WorldContext, FVector& A's Adjusted Position, FHitResult& Sweep Hit Result);
    void Get Horizontal Distance (Scene Component)(class USceneComponent* A, FVector B, class UObject* __WorldContext, float& A's Horizontal Distance from B);
    void Set Horizontal Distance (Has Location)(TScriptInterface<class IHasLocation_C> A, FVector B, float A's Horizontal Distance from B, class UObject* __WorldContext, FVector& A's Adjusted Location);
    void Set Horizontal Distance (Vector)(FVector& A, FVector B, float A's Horizontal Distance from B, class UObject* __WorldContext, FVector& A's Adjusted Position);
    void Get Horizontal Distance (Vector)(FVector A, FVector B, class UObject* __WorldContext, float& A's Horizontal Distance from B);
    void Get Horizontal Distance (Has Location)(TScriptInterface<class IHasLocation_C> A, FVector B, class UObject* __WorldContext, float& A's Horizontal Distance from B);
}; // Size: 0x28

#endif
