#pragma once
#include "CoreMinimal.h"
#include "QuestMarker.h"
#include "QuestController.generated.h"

class AActor;
class AQuestLevelActor;
class UFalconEnemyStateComponent;
class UQuestActionsComponent;
class UWatchPlayerComponent;

UCLASS(Abstract, Blueprintable)
class FALCON_API AQuestController : public AQuestMarker {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UQuestActionsComponent* QuestActions;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ScriptClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TargetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CurrentState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EggRequirement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GemRequirement;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowNullActor;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AQuestLevelActor* m_levelActor;
    
public:
    AQuestController();
private:
    UFUNCTION(BlueprintCallable)
    void SetControllerTickEnabled(bool Tick);
    
public:
    UFUNCTION(BlueprintCallable)
    bool SendSignal(const FName& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveActorUnbound(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveActorBound(AActor* Actor);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnSP3DeathStart(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void OnSP3DeathEnd(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerSeen(UWatchPlayerComponent* Watcher, bool canSee);
    
    UFUNCTION(BlueprintCallable)
    void OnDestroy(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void OnDeathState(AActor* Actor, UFalconEnemyStateComponent* StateComponent);
    
public:
    UFUNCTION(BlueprintCallable)
    void HideOrDestroyActor();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AQuestLevelActor* GetLevelActor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetActorAbsolute() const;
    
    UFUNCTION(BlueprintCallable)
    AActor* GetActor();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreatedController();
    
    UFUNCTION(BlueprintCallable)
    bool ActorExists();
    
};

