#pragma once
#include "CoreMinimal.h"
#include "AkComponent.h"
#include "TfbAkComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TFBWISEEXTENSIONS_API UTfbAkComponent : public UAkComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool TfbWwiseEnable;
    
    UTfbAkComponent();
};

