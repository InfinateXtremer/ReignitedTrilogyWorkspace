#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "PlayerCharacterOverride.generated.h"

class ACharacter;

USTRUCT(BlueprintType)
struct FALCON_API FPlayerCharacterOverride {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ACharacter> m_playerCharacterClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_setOverride;
    
    FPlayerCharacterOverride();
};

