#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "3DTextMeshTableRow.generated.h"

class UStaticMesh;

USTRUCT(BlueprintType)
struct F3DTextMeshTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Char;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CharWidthScalar;
    
    FALCON_API F3DTextMeshTableRow();
};

