#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PhasmidPanelDefStruct.h"
#include "PhasmidButtonPanelFunctionLibrary.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class UPhasmidButtonPanelFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPhasmidButtonPanelFunctionLibrary();
private:
    UFUNCTION(BlueprintCallable)
    static void SortStringSet(const TArray<FString>& stringSet, TArray<FString>& sortedStrings);
    
    UFUNCTION(BlueprintCallable)
    static FPhasmidPanelDefStruct GetRowByName(UDataTable* DataTable, FName pName, bool& Result);
    
};

