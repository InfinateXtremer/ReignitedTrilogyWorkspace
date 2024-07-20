#pragma once
#include "CoreMinimal.h"
#include "ESpawnOrder.h"
#include "Templates/SubclassOf.h"
#include "SpawnTemplateList.generated.h"

class ACharacter;
class UAnimMontage;

USTRUCT(BlueprintType)
struct FSpawnTemplateList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<ACharacter>> SpawnCharacters;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ESpawnOrder SpawnOrderPolicy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* DefaultExitMontage;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<ACharacter>> SpawnTemplates;
    
public:
    FALCON_API FSpawnTemplateList();
};

