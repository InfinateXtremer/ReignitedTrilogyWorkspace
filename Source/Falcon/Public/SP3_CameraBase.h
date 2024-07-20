#pragma once
#include "CoreMinimal.h"
#include "Camera/CameraActor.h"
#include "SP3_CameraBase.generated.h"

class AActor;

UCLASS(Blueprintable)
class FALCON_API ASP3_CameraBase : public ACameraActor {
    GENERATED_BODY()
public:
    ASP3_CameraBase();
    UFUNCTION(BlueprintCallable)
    void SetTarget(AActor* Target);
    
    UFUNCTION(BlueprintCallable)
    void SetOpponent(AActor* Opponent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetOpponent() const;
    
};

