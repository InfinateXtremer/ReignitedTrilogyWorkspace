

#pragma once

#include "CoreMinimal.h"
#include "Engine/UserDefinedStruct.h"
#include "Abilities/GameplayAbilityTargetDataFilter.h"
#include "GameplayTagContainer.h"
#include "GameplayEffectTypes.h"
#include "PhasmidGameplayStructs.generated.h"

/**
 * 
 */
UCLASS()
class PHASMID_API UPhasmidGameplayStructs : public UUserDefinedStruct
{
	GENERATED_BODY()
	
	
	
	
};


USTRUCT(BlueprintType)
struct FPhasmidTargetDataFilterByTeam : public FGameplayTargetDataFilter
{
	GENERATED_USTRUCT_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class AActor* UnusedActor;
};

USTRUCT(BlueprintType)
struct FPhasmidTargetDataFilterByCollisionTags : public FGameplayTargetDataFilter
{
	GENERATED_USTRUCT_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FGameplayTagContainer SourceTags;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool MatchesAll;
};

UENUM()
enum class EPhasmidActorFilterMatchType {
	Skip = 0,
	MustPass = 1,
	MustFail = 2,
	EPhasmidActorFilterMatchType_MAX = 3,
};

USTRUCT(BlueprintType)
struct FPhasmidActorFilter
{
	GENERATED_USTRUCT_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		EPhasmidActorFilterMatchType AllowSelf;

};

USTRUCT(BlueprintType)
struct FPhasmidEffectItem
{
	GENERATED_USTRUCT_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<class UGameplayEffect> GameplayEffect;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Level;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 StackCount;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FGameplayEffectSpecHandle GeneratedSpec;

};



USTRUCT(BlueprintType)
struct FPhasmidEffectApplicationItem
{
	GENERATED_USTRUCT_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FPhasmidActorFilter Filter;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<FPhasmidEffectItem> Effects;
};


USTRUCT(BlueprintType)
struct FPhasmidEffectApplicationContainer
{
	GENERATED_USTRUCT_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<FPhasmidEffectApplicationItem> Items;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class UAbilitySystemComponent* SourceAbilitySystemComponent;
};
