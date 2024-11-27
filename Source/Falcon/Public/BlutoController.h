#pragma once
#include "CoreMinimal.h"
#include "PhasmidCharacter.h"
#include "BlutoController.generated.h"

UCLASS(Blueprintable)
class FALCON_API ABlutoController : public APhasmidCharacter {
    GENERATED_BODY()
public:

	ABlutoController(const FObjectInitializer& ObjectInitializer);
	
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float turnSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float missileCount;
    
    ABlutoController();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void FireProjectile();
    
};

