#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SP3_CharacterComponent.h"
#include "SP3_BossCharacterComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FALCON_API USP3_BossCharacterComponent : public USP3_CharacterComponent {
    GENERATED_BODY()
public:
    USP3_BossCharacterComponent();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetAnimState(FName Layer, FVector4& Input, float& Alpha, FName& SubState) const;
    
};

