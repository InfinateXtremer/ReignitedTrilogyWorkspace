#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ObjectiveDefinition.h"
#include "SubObjectiveDefinition.h"
#include "ObjectiveDataFunctionLibrary.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class UObjectiveDataFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UObjectiveDataFunctionLibrary();
    UFUNCTION(BlueprintCallable)
    static FSubObjectiveDefinition GetSubObjectiveDefinitionByName(UDataTable* Table, FName RowName, bool& Result);
    
    UFUNCTION(BlueprintCallable)
    static FObjectiveDefinition GetObjectiveDefinitionByName(UDataTable* Table, FName RowName, bool& Result);
    
};

