

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameplayTagContainer.h"
#include "Components/ActorComponent.h"
#include "PhasmidAbilityBaseActor.h"
#include "PhasmidLevelActor.generated.h"


DECLARE_DYNAMIC_MULTICAST_DELEGATE(FPhasmidLevelActorOnAbilityEndOverlap);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FPhasmidLevelActorOnTakeDamageDelegate);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FPhasmidLevelActorOnDeathDelegate);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FPhasmidLevelActorOnDealDamageDelegate);


UCLASS()
class PHASMID_API APhasmidLevelActor : public APhasmidAbilityBaseActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APhasmidLevelActor();


	UFUNCTION(BlueprintCallable)
		static void BP_HandleDamage(float Magnitude, FGameplayTagContainer DamageTags, class UPrimitiveComponent* HitComponent, const class AActor* DamagingActor);

	UPROPERTY(BlueprintAssignable)
	FPhasmidLevelActorOnAbilityEndOverlap OnAbilityEndOverlap;                        
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UPhasmidAbilitySystemComponent* AbilitySystem;                              
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDataTableRowHandle InitialAttributeRowHandle;                                    
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bDead;                                                                       
	
	UPROPERTY(BlueprintAssignable)
	FPhasmidLevelActorOnTakeDamageDelegate OnTakeDamageDelegate;     
	UPROPERTY(BlueprintAssignable)
	FPhasmidLevelActorOnDeathDelegate OnDeathDelegate;               
	UPROPERTY(BlueprintAssignable)
	FPhasmidLevelActorOnDealDamageDelegate OnDealDamageDelegate;                      

	UFUNCTION(BlueprintCallable)
	void TriggerOverlapAbility(class AActor* OtherActor, FGameplayTag TriggerTag);
	UFUNCTION(BlueprintCallable)
	void Client_OnShieldBreak(const FGameplayEventData Payload);
	UFUNCTION(BlueprintCallable)
	void Client_OnDeath(const FGameplayEventData Payload);
	UFUNCTION(BlueprintCallable)
	void Client_OnDamage(const FGameplayEventData Payload);
	UFUNCTION(BlueprintCallable)
	void AbilityEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FGameplayTag TriggerTag);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	
};
