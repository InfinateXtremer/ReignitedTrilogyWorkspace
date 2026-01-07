#ifndef UE4SS_SDK_Distance_HPP
#define UE4SS_SDK_Distance_HPP

class UDistance_C : public UBlueprintFunctionLibrary
{

    void Set Distance (Actor)(class AActor* A, FVector B, float A's Distance From B, bool Sweep, bool Teleport, class UObject* __WorldContext, FVector& A's Adjusted Location, FHitResult& Sweep Hit Result, bool& return value);
    void Get Distance (Actor)(class AActor* A, FVector B, class UObject* __WorldContext, float& A's Distance From B);
    void Set Distance (Scene Component)(class USceneComponent* A, FVector B, float A's Distance From B, bool Sweep, bool Teleport, class UObject* __WorldContext, FVector& A's Adjusted Location, FHitResult& Sweep Hit Result);
    void Get Distance (Scene Component)(class USceneComponent* A, FVector B, class UObject* __WorldContext, float& A's Distance From B);
    void Set Distance (Vector)(FVector& A, FVector B, float A's Distance From B, class UObject* __WorldContext, FVector& A's Adjusted Location);
    void Get Distance (Vector)(FVector A, FVector B, class UObject* __WorldContext, float& A's Distance From B);
    void Set Distance (Has Location)(TScriptInterface<class IHasLocation_C> A, FVector B, float A's Distance From B, class UObject* __WorldContext, FVector& A's Adjusted Location);
    void Get Distance (Has Location)(TScriptInterface<class IHasLocation_C> A, FVector B, class UObject* __WorldContext, float& A's Distance From B);
}; // Size: 0x28

#endif
