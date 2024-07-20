#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "PhasmidBlueprintGameplayTagLibraryExtras.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UPhasmidBlueprintGameplayTagLibraryExtras : public UObject {
    GENERATED_BODY()
public:
    UPhasmidBlueprintGameplayTagLibraryExtras();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayTagContainer RequestGameplayTagChildren(const FGameplayTag& GameplayTag);
    
    UFUNCTION(BlueprintCallable)
    static void RemoveGameplayTags(UPARAM(Ref) FGameplayTagContainer& InOutTagContainer, const FGameplayTagContainer& InTagContainer);
    
    UFUNCTION(BlueprintCallable)
    static bool RemoveGameplayTag(UPARAM(Ref) FGameplayTagContainer& InOutTagContainer, FGameplayTag Tag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayTagContainer GetTagsWithSuffix(const FGameplayTagContainer& InTagContainer, const FString& Suffix, bool GetParent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayTagContainer GetDamageRequirementTags(const FGameplayTagContainer& InTagContainer);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayTagContainer GetDamageFilterTags(const FGameplayTagContainer& InTagContainer);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayTagContainer GetDamageDodgeTags(const FGameplayTagContainer& InTagContainer);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayTagContainer GetCollisionFilterTags(const FGameplayTagContainer& InTagContainer);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayTagContainer FilterExact(const FGameplayTagContainer& InTagContainer, const FGameplayTagContainer& InFilterTagContainer);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayTagContainer Filter(const FGameplayTagContainer& InTagContainer, const FGameplayTagContainer& InFilterTagContainer);
    
};

