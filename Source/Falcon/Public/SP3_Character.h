#pragma once
#include "CoreMinimal.h"
#include "LocomotionCharacter.h"
#include "SP3_Character.generated.h"

class USP3_CharacterComponent;

UCLASS(Blueprintable)
class FALCON_API ASP3_Character : public ALocomotionCharacter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USP3_CharacterComponent* SP3CharComponent;
    
    ASP3_Character();
};

