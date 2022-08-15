

#pragma once

#include "CoreMinimal.h"
#include "ESkillPoint.h"
#include "Components/ActorComponent.h"
#include "SkillPointComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class FALCON_API USkillPointComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	USkillPointComponent();

	UFUNCTION(BlueprintCallable)
	void SetSkillPointObtained(ESkillPoint skillPoint);
	UFUNCTION(BlueprintCallable)
	int32 GetSkillPointObtainedCount(int32 gameIndex, bool& completedPart1, bool& completedPart2);
	UFUNCTION(BlueprintCallable)
	bool GetSkillPointObtained(ESkillPoint skillPoint);

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
	
};
