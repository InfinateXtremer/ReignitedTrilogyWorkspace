#pragma once
#include "CoreMinimal.h"
#include "MontageState.h"
#include "SimpleDenizenController.h"
#include "MobileDenizenController.generated.h"

class UQuestActionsComponent;

UCLASS(Abstract, Blueprintable)
class FALCON_API AMobileDenizenController : public ASimpleDenizenController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMontageState> Montages;
    
    AMobileDenizenController();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetPosition(const FName& where, const FName& moveMode, UQuestActionsComponent* Actions);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void MoveTo(const FName& dest, UQuestActionsComponent* Actions);
    
};

