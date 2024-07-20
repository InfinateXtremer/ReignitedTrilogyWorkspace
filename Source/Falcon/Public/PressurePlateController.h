#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "ButtonController.h"
#include "PressurePlateController.generated.h"

class AActor;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class FALCON_API APressurePlateController : public AButtonController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<AActor>> ValidActorTypes;
    
    APressurePlateController();
protected:
    UFUNCTION(BlueprintCallable)
    void OnOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
};

