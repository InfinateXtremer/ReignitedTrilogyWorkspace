#pragma once
#include "CoreMinimal.h"
#include "FalconCharacterInputComponent.h"
#include "FalconCharacterInputComponent_Spyro.generated.h"

class ASpyroCharacter;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FALCON_API UFalconCharacterInputComponent_Spyro : public UFalconCharacterInputComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASpyroCharacter* Spyro;
    
    UFalconCharacterInputComponent_Spyro();
};

