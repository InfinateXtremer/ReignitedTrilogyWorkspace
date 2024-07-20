#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ESkillPoint.h"
#include "SkillPointStruct.generated.h"

USTRUCT(BlueprintType)
struct FSkillPointStruct : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESkillPoint skill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Description;
    
    FALCON_API FSkillPointStruct();
};

