#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "SP3_AnimInterface.generated.h"

UINTERFACE(MinimalAPI)
class USP3_AnimInterface : public UInterface {
    GENERATED_BODY()
};

class ISP3_AnimInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION()
    virtual FName GetAnimState(FName Layer, FVector4& Input, float& Alpha, FName& SubState) const PURE_VIRTUAL(GetAnimState, return NAME_None;);
    
};

