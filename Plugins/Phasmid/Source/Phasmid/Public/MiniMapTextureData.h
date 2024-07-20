#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "MiniMapTextureData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FMiniMapTextureData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Texture;
    
    PHASMID_API FMiniMapTextureData();
};

