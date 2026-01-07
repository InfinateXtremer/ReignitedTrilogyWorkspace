#ifndef UE4SS_SDK_Heading_HPP
#define UE4SS_SDK_Heading_HPP

class UHeading_C : public UBlueprintFunctionLibrary
{

    void Set Heading (Actor)(class AActor* A, FVector B, float A's Heading from B, bool Sweep, bool Teleport, class UObject* __WorldContext, FVector& A's Adjusted Location, FHitResult& Sweep Hit Result, bool& return value);
    void Get Heading (Actor)(class AActor* A, FVector B, class UObject* __WorldContext, float& A's Heading from B);
    void Set Heading (Scene Component)(class USceneComponent* A, FVector B, float A's Heading from B, bool Sweep, bool Teleport, class UObject* __WorldContext, FVector& A's Adjusted Location, FHitResult& Sweep Hit Result);
    void Get Heading (Scene Component)(class USceneComponent* A, FVector B, class UObject* __WorldContext, float& A's Heading from B);
    void Set Heading (Has Location)(TScriptInterface<class IHasLocation_C> A, FVector B, float A's Heading from B, class UObject* __WorldContext, FVector& A's Adjusted Location);
    void Get Heading (Has Location)(TScriptInterface<class IHasLocation_C> A, FVector B, class UObject* __WorldContext, float& A's Heading from B);
    void Set Heading (Vector)(FVector& A, FVector B, float A's Heading from B, class UObject* __WorldContext, FVector& A's Adjusted Location);
    void Get Heading (Vector)(FVector A, FVector B, class UObject* __WorldContext, float& A's Heading from B);
}; // Size: 0x28

#endif
