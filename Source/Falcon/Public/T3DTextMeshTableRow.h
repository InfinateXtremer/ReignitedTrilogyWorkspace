

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Engine/UserDefinedStruct.h"
#include "Engine/StaticMesh.h"
#include "T3DTextMeshTableRow.generated.h"

/**
 * 
 */

USTRUCT(BlueprintType)
struct F3DTextMeshTableRow : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()
	
	
public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CharWidthScalar;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UStaticMesh* Mesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Char;
	
};
