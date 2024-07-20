#include "ObjectiveDataFunctionLibrary.h"

class UDataTable;

FSubObjectiveDefinition UObjectiveDataFunctionLibrary::GetSubObjectiveDefinitionByName(UDataTable* Table, FName RowName, bool& Result) {
    return FSubObjectiveDefinition{};
}

FObjectiveDefinition UObjectiveDataFunctionLibrary::GetObjectiveDefinitionByName(UDataTable* Table, FName RowName, bool& Result) {
    return FObjectiveDefinition{};
}

UObjectiveDataFunctionLibrary::UObjectiveDataFunctionLibrary() {
}

