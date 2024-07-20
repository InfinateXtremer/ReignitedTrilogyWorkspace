#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "VisibilityComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PHASMID_API UVisibilityComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString level_name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreRequestToMakeVisible;
    
    UVisibilityComponent();
    UFUNCTION(BlueprintCallable)
    void BeginPlay();
    
};

