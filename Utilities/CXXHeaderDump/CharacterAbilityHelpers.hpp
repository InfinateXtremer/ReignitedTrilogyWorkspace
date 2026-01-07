#ifndef UE4SS_SDK_CharacterAbilityHelpers_HPP
#define UE4SS_SDK_CharacterAbilityHelpers_HPP

class UCharacterAbilityHelpers_C : public UBlueprintFunctionLibrary
{

    void IsActorWithinTargetingParameters(class AActor* Target, class AActor* OriginActor, FGameplayTagContainer IgnoreActorsWithTags, FVector CheckForwardVector, float MaxTargetSquaredDistance, float FieldOfView, float MaxHeightDifference, bool CheckWasRecentlyRendered, float WasRecentlyRenderedTolerance, class UObject* __WorldContext, bool& IsWithinParameters);
    void FindClosestTargetActor(class AActor* OriginActor, TArray<TEnumAsByte<EObjectTypeQuery>>& TargetObjectType, TSubclassOf<class AActor> TargetActorClass, FGameplayTagContainer IgnoreActorsWithTags, FVector CheckForward Vector, float MaxTargetDistance, float FieldOfView, float MaxHeightDifference, bool CheckWasRecentlyRendered, float WasRecentlyRenderedTolerance, class UObject* __WorldContext, class AActor*& ClosestActor);
}; // Size: 0x28

#endif
