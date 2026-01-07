#ifndef UE4SS_SDK_VerticalOffset_HPP
#define UE4SS_SDK_VerticalOffset_HPP

class UVerticalOffset_C : public UBlueprintFunctionLibrary
{

    void Set Vertical Offset (Actor)(class AActor* A, FVector B, float A's Vertical Offset From B, bool Sweep, bool Teleport, class UObject* __WorldContext, FVector& A's Adjusted Location, FHitResult& Sweep Hit Result, bool& return value);
    void Get Vertical Offset (Actor)(class AActor* A, FVector B, class UObject* __WorldContext, float& A's Vertical Offset From B);
    void Set Vertical Offset (Scene Component)(class USceneComponent* A, FVector B, float A's Vertical Offset From B, bool Sweep, bool Teleport, class UObject* __WorldContext, FVector& A's Adjusted Location, FHitResult& Sweep Hit Result);
    void Get Vertical Offset (Scene Component)(class USceneComponent* A, FVector B, class UObject* __WorldContext, float& A's Vertical Offset From B);
    void Set Vertical Offset (Vector)(FVector& A, FVector B, float A's Vertical Offset From B, class UObject* __WorldContext, FVector& A's Adjusted Position);
    void Get Vertical Offset (Vector)(FVector A, FVector B, class UObject* __WorldContext, float& A's Vertical Offset From B);
    void Set Vertical Offset (Has Location)(TScriptInterface<class IHasLocation_C> A, FVector B, float A's Vertical Offset From B, class UObject* __WorldContext, FVector& A's Adjusted Location);
    void Get Vertical Offset (Has Location)(TScriptInterface<class IHasLocation_C> A, FVector B, class UObject* __WorldContext, float& A's Vertical Offset From B);
}; // Size: 0x28

#endif
