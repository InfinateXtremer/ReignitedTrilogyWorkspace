#pragma once
#include "CoreMinimal.h"
#include "LevelSequenceActor.h"
#include "MovieSceneSequencePlayer.h"
#include "TfbIGCInterface.h"
#include "TfbLevelSequenceActor.generated.h"

UCLASS(Blueprintable)
class TFBPLUGIN_API ATfbLevelSequenceActor : public ALevelSequenceActor //, public ITfbIGCInterface 
{
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartingCameraBlendTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EndingCameraBlendTime;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMovieSceneSequencePlayerEvent BP_OnSequenceStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMovieSceneSequencePlayerEvent BP_OnSequenceFinished;
    

protected:
    UFUNCTION(BlueprintCallable)
    void OnSequenceStarted();
    
    UFUNCTION(BlueprintCallable)
    void OnSequenceFinished();
    
    
    // Fix for true pure virtual functions not being implemented
};

