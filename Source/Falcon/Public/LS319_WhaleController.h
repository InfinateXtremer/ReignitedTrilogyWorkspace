#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "MobileDenizenController.h"
#include "LS319_WhaleController.generated.h"

class UAnimMontage;
class UQuestActionsComponent;

UCLASS(Abstract, Blueprintable)
class FALCON_API ALS319_WhaleController : public AMobileDenizenController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* SpittingMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ExitNotify;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FComponentReference SpyroExitDestination;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OpenMouthChompDistance;
    
    ALS319_WhaleController();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SpitOutSpyro(UQuestActionsComponent* Actions);
    
    UFUNCTION(BlueprintCallable)
    void EnteredChomp(bool Overlapping);
    
};

