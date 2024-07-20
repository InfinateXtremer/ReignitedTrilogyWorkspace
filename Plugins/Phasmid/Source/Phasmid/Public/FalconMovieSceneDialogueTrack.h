#pragma once
#include "CoreMinimal.h"
#include "MovieSceneTrack.h"
#include "FalconMovieSceneDialogueTrack.generated.h"

class UDataTable;
class UMovieSceneSection;

UCLASS(Blueprintable, MinimalAPI)
class UFalconMovieSceneDialogueTrack : public UMovieSceneTrack {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DialogueTable;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UMovieSceneSection*> Sections;
    
public:
    UFalconMovieSceneDialogueTrack();
};

