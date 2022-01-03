

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameplayTagContainer.h"
#include "GameplayAbilitySet.h"
#include "EPhasmidTeamId.h"
#include "PhasmidAbilityBaseActor.generated.h"

UCLASS()
class PHASMID_API APhasmidAbilityBaseActor : public AActor
{
	GENERATED_BODY()
	


	
public:	

	APhasmidAbilityBaseActor();
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = GameplayTags)
		FGameplayTagContainer InitialGameplayTags;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = GameplayTags)
		UGameplayAbilitySet* AbilitySet;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = GameplayTags)
		TEnumAsByte<EPhasmidTeamId> TeamId;

	//UFUNCTION(BlueprintCallable)
	void SetTeamId(EPhasmidTeamId newTeamId);

	//UFUNCTION(BlueprintCallable)
	void OnRep_TeamId(EPhasmidTeamId oldTeamId);

	UFUNCTION(BlueprintCallable, Category = GameplayTags)
	void InitializeGameplayTagsFromInstigator(const struct FGameplayTagContainer& TagContainer);

	UFUNCTION(BlueprintCallable, Category = GameplayTags)
	class UAbilitySystemComponent* GetASC();

	// Sets default values for this actor's properties


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	
};
