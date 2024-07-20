#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SP3_CinematicsActor.generated.h"

class AQuestLevelActor;
class UFileMediaSource;

UCLASS(Blueprintable)
class FALCON_API ASP3_CinematicsActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFileMediaSource* MovieFile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartupDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AQuestLevelActor> QuestLevelActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Finished;
    
    ASP3_CinematicsActor();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StopMovie();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartMovie();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSkip();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsFinished();
    
};

