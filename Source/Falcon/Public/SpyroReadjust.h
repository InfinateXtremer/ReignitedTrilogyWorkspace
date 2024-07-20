#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SpyroReadjust.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FALCON_API USpyroReadjust : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AcceptDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AcceptAngle;
    
    USpyroReadjust();
    UFUNCTION(BlueprintCallable)
    void MovementReadjust(AActor* PlayerT, float Distance, float zAdjust);
    
};

