

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "PhasmidCullComponent.generated.h"


UCLASS( ClassGroup=(Phasmid), meta=(BlueprintSpawnableComponent) )
class PHASMID_API UPhasmidCullComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UPhasmidCullComponent();

	//UFUNCTION(BlueprintCallable)
	//	static void BindToCull(); //Delegate stuff


	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CullDistance;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CullDistanceSquared;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CullCheckTime;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bCanActorBeDisabled;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bCanActorBeDisabledByVolume;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bCanActorBeZKilled;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIgnoreZDistance;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ReducedMoveInterval;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bUseCamAngle;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAutoCull;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bStillAutoCullWhenVolumeControlled;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bEnableCollisionCulling;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CollisionCullDistance;

	UFUNCTION(BlueprintCallable)
	void UnbindFromCull(class AActor* EventOwner);
	UFUNCTION(BlueprintCallable)
	void SetGameStateCullReady(bool bReady);
	UFUNCTION(BlueprintCallable)
	void SetCullDistance(float NewCullDistance);
	UFUNCTION(BlueprintCallable)
	void SetAutoUpdateCull(bool bNewEnabled);
	UFUNCTION(BlueprintCallable)
	void SetActorEnabled(bool bNewEnabled);
	UFUNCTION(BlueprintCallable)
	bool IsCulled();
	UFUNCTION(BlueprintCallable)
	bool IsActorCulled();
	UFUNCTION(BlueprintCallable)
	bool GetOffScreen();
	UFUNCTION(BlueprintCallable)
	bool GetMeshOffScreen(class UMeshComponent* MeshComponent);
	UFUNCTION(BlueprintCallable)
	bool GetGameStateCullReady();
	UFUNCTION(BlueprintCallable)
	void CullEventDelegate__DelegateSignature(class AActor* Actor, bool bIsCulled);
	UFUNCTION(BlueprintCallable)
	void CheckCull();
	//UFUNCTION(BlueprintCallable)
	//void BindToCull(class AActor* EventOwner, const FBindToCullEvent& Event); //No idea what FBindToCullEvent is


protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
	
};
