#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/DataTable.h"
#include "ETfbDialogueRowResult.h"
#include "TfbDialogueBlueprintFunctionLibrary.generated.h"

class UAkAudioEvent;
class UAnimSequence;

UCLASS(Blueprintable)
class TFBPLUGIN_API UTfbDialogueBlueprintFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UTfbDialogueBlueprintFunctionLibrary();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void SplitQuestionString(const FText& String, FText& question, TArray<FText>& answers);
    
    UFUNCTION(BlueprintCallable)
    static void GetDialogueTableRow(const FDataTableRowHandle& RowHandle, UAkAudioEvent*& VoicedLine, FText& Text, UAnimSequence*& LipSyncAnim, FText& DisplayName, ETfbDialogueRowResult& Result);
    
};

