#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/SceneComponent.h"
#include "SP3_HomingTargetComponent.generated.h"

class AActor;
class USP3_HomingTargetComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FALCON_API USP3_HomingTargetComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Priority;
    
    USP3_HomingTargetComponent();
    UFUNCTION(BlueprintCallable)
    static int32 FindTargets(const AActor* sender, const FTransform& xfmWS, float distMax, float angMax, float angWeight, int32 nMax, TArray<USP3_HomingTargetComponent*>& Targets, bool checkLOS, bool dbgDraw);
    
    UFUNCTION(BlueprintCallable)
    static USP3_HomingTargetComponent* FindTarget(const AActor* sender, const FTransform& xfmWS, float distMax, float angMax, float angWeight, bool checkLOS, bool dbgDraw);
    
};

