#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/PlayerController.h"
#include "EImageSize.h"
#include "OnGetPlayerImageCompleteDelegate.h"
#include "PhasmidPlayerController.generated.h"

UCLASS(Blueprintable)
class PHASMID_API APhasmidPlayerController : public APlayerController {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseBlueprintCameraInput;
    
public:
    APhasmidPlayerController();
    UFUNCTION(BlueprintCallable)
    void SetInputCameraAxisY(float Val);
    
    UFUNCTION(BlueprintCallable)
    void SetInputCameraAxisX(float Val);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetEnemyTickInterval(float Interval);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetSkateInputs(bool& trick, bool& Jump, bool& turbo) const;
    
    UFUNCTION(BlueprintCallable)
    void GetPlayerImage(EImageSize DesiredSize, FOnGetPlayerImageComplete OnGetPlayerImageComplete);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetMoveAxes() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetCameraAxes() const;
    
};

