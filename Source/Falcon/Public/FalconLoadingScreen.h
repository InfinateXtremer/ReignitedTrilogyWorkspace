#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "EFalconLoadScreen.h"
#include "FalconLoadingScreenStateStartDelegate.h"
#include "FalconLoadingScreenStateUpdateDelegate.h"
#include "FalconLoadingStateCallbacks.h"
#include "FalconLoadingScreen.generated.h"

class UCameraComponent;
class USceneComponent;
class USkeletalMeshComponent;
class USplineComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class AFalconLoadingScreen : public AActor {
    GENERATED_BODY()
    AFalconLoadingScreen();
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCameraComponent* Camera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* StageMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* SpyroMesh;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ElapsedTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentFadeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StateSelect;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InitialState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector SpyroMeshOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator SpyroMeshRotOffset;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFalconLoadingStateCallbacks> states;
    

protected:
    UFUNCTION(BlueprintCallable)
    void UpdateSpyroMeshPosition(USplineComponent* Spline, float Time);

    UFUNCTION(BlueprintCallable)
    void StopStateMachine();

    UFUNCTION(BlueprintCallable)
    void StartState(int32 StateIndex);
    
public:
    UFUNCTION(BlueprintCallable)
    void ShowLoadScreen(TEnumAsByte<EFalconLoadScreen::Type> screenType, float fadeTime);
    
protected:
    UFUNCTION(BlueprintCallable)
    int32 RegisterState(FFalconLoadingScreenStateStart Start, FFalconLoadingScreenStateUpdate Update);
    
public:
    UFUNCTION(BlueprintCallable)
    void HideLoadScreen(float fadeTime);
    
protected:
    UFUNCTION(BlueprintCallable)
    void EndState(int32 NextStateIndex);
    
    //UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    //void BP_OnShowLoadScreen(EFalconLoadScreen::Type screenType);
    //
    //UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    //void BP_OnHideLoadScreen();
    
};

