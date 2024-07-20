#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "QuestTask.h"
#include "QuestMoveTask.generated.h"

class AActor;
class APawn;
class AQuestStrikePoint;

UCLASS(Abstract, Blueprintable)
class FALCON_API UQuestMoveTask : public UQuestTask {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AQuestStrikePoint* m_strike;
    
public:
    UQuestMoveTask();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AQuestStrikePoint* StrikePoint() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void OnActorHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APawn* Mover() const;
    
    UFUNCTION(BlueprintCallable)
    void DelayArrival();
    
    UFUNCTION(BlueprintCallable)
    void Arrived();
    
};

