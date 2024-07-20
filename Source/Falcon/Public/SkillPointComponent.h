#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ESkillPoint.h"
#include "SkillPointComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FALCON_API USkillPointComponent : public UActorComponent {
    GENERATED_BODY()
public:
    USkillPointComponent();
    UFUNCTION(BlueprintCallable)
    void SetSkillPointObtained(ESkillPoint skillPoint);
    
    UFUNCTION(BlueprintCallable)
    int32 GetSkillPointObtainedCount(int32 gameIndex, bool& completedPart1, bool& completedPart2);
    
    UFUNCTION(BlueprintCallable)
    bool GetSkillPointObtained(ESkillPoint skillPoint);
    
};

