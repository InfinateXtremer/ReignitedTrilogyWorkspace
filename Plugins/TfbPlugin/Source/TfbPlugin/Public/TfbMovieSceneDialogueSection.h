#pragma once
#include "CoreMinimal.h"
#include "MovieSceneAkAudioEventSection.h"
#include "Engine/DataTable.h"
#include "TfbMovieSceneDialogueSection.generated.h"

UCLASS(Blueprintable)
class TFBPLUGIN_API UTfbMovieSceneDialogueSection : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle DialogueData;

};

