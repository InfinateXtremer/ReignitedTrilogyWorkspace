#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "BossCharacter.generated.h"

class AActor;
class USP3_BossCharacterComponent;

UCLASS(Blueprintable)
class FALCON_API ABossCharacter : public ACharacter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USP3_BossCharacterComponent* BossComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Battleground;
    
    ABossCharacter();
};

