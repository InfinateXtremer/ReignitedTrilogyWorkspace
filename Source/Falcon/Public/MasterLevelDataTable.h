

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "MasterLevelDataTable.generated.h"

/**
 * 
 */
UCLASS()
class FALCON_API UMasterLevelDataTable : public UDataTable
{
	GENERATED_BODY()
	
	
	
	
};


USTRUCT(BlueprintType)
struct FMasterLevelData : public FTableRowBase
{
	GENERATED_BODY()
public:
	/** montage **/
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName LevelMapPath;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UDataTable* SublevelNameTable;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsHomeworld;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool requiresPatch;
};