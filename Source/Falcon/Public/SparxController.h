#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PlayableController.h"
#include "Templates/SubclassOf.h"
#include "SparxController.generated.h"

class UAmmoGaugeWidget;
class UHealthBarWidget;
class UHudTimerBarComponent;
class UQuestActionsComponent;
class USP3_SparxComponent;
class USparxKeyWidget;

UCLASS(Abstract, Blueprintable)
class FALCON_API ASparxController : public APlayableController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHudTimerBarComponent> TimerBarClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAmmoGaugeWidget> AmmoGaugeClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHealthBarWidget> HealthBarClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USparxKeyWidget> SparxKeyClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsTutorial;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USP3_SparxComponent* m_sparx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USparxKeyWidget* m_sparxKey;
    
public:
    ASparxController();
protected:
    UFUNCTION(BlueprintCallable)
    void OnVFXEvent(FName evtName, const FTransform& xfm, FName param0, float param1);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Completed(UQuestActionsComponent* Actions);
    
};

