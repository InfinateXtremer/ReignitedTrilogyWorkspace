#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "OnDynEventDelegate.h"
#include "OnTargetDiedDelegate.h"
#include "SpawnTemplate.h"
#include "RailShooter.generated.h"

class ACharacter;
class UFalconEnemyStateComponent;

UCLASS(Blueprintable)
class FALCON_API ARailShooter : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpawnTemplate> SpawnTemplates;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESpawnActorCollisionHandlingMethod SpawnCollisionMethod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* proximityTarget;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTargetDied onFriendlyDied;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTargetDied OnEnemyDied;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDynEvent onAllEnemiesDead;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDynEvent onGameStarted;
    
    ARailShooter();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartGame();
    
    UFUNCTION(BlueprintCallable)
    ACharacter* SpawnByID(FName ID);
    
    UFUNCTION(BlueprintCallable)
    void SetupGame();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ResetGame();
    
    UFUNCTION(BlueprintCallable)
    void Reset();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnSP3DeathStart(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void OnSP3DeathEnd(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void OnDestroy(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void OnDeathState(AActor* Actor, UFalconEnemyStateComponent* StateComponent);
    
public:
    UFUNCTION(BlueprintCallable)
    ACharacter* FindSpawnedByID(FName ID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EndGame();
    
    UFUNCTION(BlueprintCallable)
    void DestroyAll();
    
};

