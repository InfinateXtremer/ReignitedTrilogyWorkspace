#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CustomCamera_TopDown.generated.h"

UCLASS(Blueprintable)
class FALCON_API ACustomCamera_TopDown : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_angle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_height;
    
    ACustomCamera_TopDown();
};

