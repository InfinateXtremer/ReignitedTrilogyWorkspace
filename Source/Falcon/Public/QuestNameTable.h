#pragma once
#include "CoreMinimal.h"
#include "NameTable.h"
#include "QuestNameTable.generated.h"

USTRUCT(BlueprintType)
struct FQuestNameTable {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FNameTable m_names;
    
public:
    FALCON_API FQuestNameTable();
};

