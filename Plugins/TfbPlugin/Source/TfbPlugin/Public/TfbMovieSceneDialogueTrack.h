#pragma once
#include "CoreMinimal.h"
#include "MovieSceneAkTrack.h"
#include "TfbMovieSceneDialogueTrack.generated.h"

class UDataTable;

UCLASS(Blueprintable, MinimalAPI)
class UTfbMovieSceneDialogueTrack : public UMovieSceneAkTrack {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DialogueTable;
    
    UTfbMovieSceneDialogueTrack();
};

