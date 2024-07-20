#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GemFinderLinkComponent.generated.h"

class AGemFinderRegion;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UGemFinderLinkComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AGemFinderRegion> LinkedRegion;
    
    UGemFinderLinkComponent();
    UFUNCTION(BlueprintCallable)
    AGemFinderRegion* GetLinkedRegion();
    
};

