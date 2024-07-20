#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "MovieSceneSection.h"
#include "FalconMovieSceneDialogueSection.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UFalconMovieSceneDialogueSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle DialogueData;
    
    UFalconMovieSceneDialogueSection();
};

