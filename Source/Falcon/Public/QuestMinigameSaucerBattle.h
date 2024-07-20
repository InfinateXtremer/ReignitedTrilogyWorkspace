#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "QuestController.h"
#include "Templates/SubclassOf.h"
#include "QuestMinigameSaucerBattle.generated.h"

class AActor;
class UQuestActionsComponent;
class USparxHealthBarWidget;

UCLASS(Blueprintable)
class FALCON_API AQuestMinigameSaucerBattle : public AQuestController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AActor> Boss;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AActor> Vehicle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AActor> ExitBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AActor> BossEndSequenceMarker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AActor> CollectEggLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float fadeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlackScreenTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BossName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLeftBossUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BossHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USparxHealthBarWidget> HealthWidgetClass;
    
    AQuestMinigameSaucerBattle();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Ticking(UQuestActionsComponent* Actions);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Restart(UQuestActionsComponent* Actions);
    
    UFUNCTION(BlueprintCallable)
    void OnBossDamaged();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Idle(UQuestActionsComponent* Actions);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetVehicle();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Completed(UQuestActionsComponent* Actions);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_SaveProgress();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnVictory(AActor* Enemy, const FTransform& Transform);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool BP_IsSaucerActivated();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_InitializeBoss(AActor* Enemy);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_CleanupSaucerMinigame(AActor* BossActor, AActor* VehicleActor);
    
};

