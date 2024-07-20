#pragma once
#include "CoreMinimal.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "TfbMovieSceneDialogueTemplate.generated.h"

class UTfbMovieSceneDialogueSection;

USTRUCT(BlueprintType)
struct TFBPLUGIN_API FTfbMovieSceneDialogueTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTfbMovieSceneDialogueSection* Section;
    
    FTfbMovieSceneDialogueTemplate();
};

