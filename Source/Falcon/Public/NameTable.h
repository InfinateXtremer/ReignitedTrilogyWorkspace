#pragma once
#include "CoreMinimal.h"
#include "NameTable.generated.h"

USTRUCT(BlueprintType)
struct FNameTable {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FString> m_names;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<int32> m_alpha;
    
public:
    FALCON_API FNameTable();
};

