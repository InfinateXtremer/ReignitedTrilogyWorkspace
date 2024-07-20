#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "TfbPanelDefStruct.h"
#include "TfbButtonPanelFunctionLibrary.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class UTfbButtonPanelFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UTfbButtonPanelFunctionLibrary();
private:
    UFUNCTION(BlueprintCallable)
    static void SortStringSet(const TArray<FString>& stringSet, TArray<FString>& sortedStrings);
    
    UFUNCTION(BlueprintCallable)
    static FTfbPanelDefStruct GetRowByName(UDataTable* DataTable, FName pName, bool& Result);
    
};

