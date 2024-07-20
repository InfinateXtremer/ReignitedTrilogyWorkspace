#pragma once
#include "CoreMinimal.h"
#include "LevelSequenceActor.h"
#include "MovieSceneSequencePlayer.h"
#include "FalconIGCInterface.h"
#include "FalconLevelSequenceActor.generated.h"

UCLASS(Blueprintable)
class PHASMID_API AFalconLevelSequenceActor : public ALevelSequenceActor//, public IFalconIGCInterface 
{
    GENERATED_BODY()
public:
    //UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    //float StartingCameraBlendTime;
    //
    //UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    //float EndingCameraBlendTime;
    //
    //UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    //FOnMovieSceneSequencePlayerEvent BP_OnSequenceStarted;
    //
    //UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    //FOnMovieSceneSequencePlayerEvent BP_OnSequenceFinished;
    //
    //AFalconLevelSequenceActor();
protected:
    //UFUNCTION(BlueprintCallable)
    //void OnSequenceStarted();
    //
    //UFUNCTION(BlueprintCallable)
    //void OnSequenceFinished();
    
    
    // Fix for true pure virtual functions not being implemented
};

