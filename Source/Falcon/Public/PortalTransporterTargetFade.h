#pragma once
#include "CoreMinimal.h"
#include "Portal.h"
#include "PortalTransporterTargetFade.generated.h"

UCLASS(Blueprintable)
class FALCON_API APortalTransporterTargetFade : public APortal {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float fadeTime;
    
public:
    APortalTransporterTargetFade();
    UFUNCTION(BlueprintCallable)
    void Tick(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void BeginPlay();
    
};

