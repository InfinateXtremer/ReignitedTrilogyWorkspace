#pragma once
#include "CoreMinimal.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "FalconMovieSceneDialogueTemplate.generated.h"

class UFalconMovieSceneDialogueSection;

USTRUCT(BlueprintType)
struct PHASMID_API FFalconMovieSceneDialogueTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFalconMovieSceneDialogueSection* Section;
    
    FFalconMovieSceneDialogueTemplate();
};

