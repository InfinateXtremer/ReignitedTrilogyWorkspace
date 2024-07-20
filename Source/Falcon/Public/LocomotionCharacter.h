#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "LocomotionCharacter.generated.h"

UCLASS(Blueprintable)
class FALCON_API ALocomotionCharacter : public ACharacter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_dbgNoBlend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_dbgNoFootIK;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_dbgNoTransitions;
    
    ALocomotionCharacter();
};

