#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "PhasmidAttributeSet.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class PHASMID_API UPhasmidAttributeSet : public UAttributeSet {
    GENERATED_BODY()
public:
    UPhasmidAttributeSet();
    UFUNCTION(BlueprintCallable)
    void PropagateSetToOwner();
    
    UFUNCTION(BlueprintCallable)
    void InitFieldFromDataTable(const UDataTable* DataTable, FName RowName);
    
    UFUNCTION(BlueprintCallable)
    bool ApplyStartingData(const UDataTable* DataTable, FName RowName);
    
};

