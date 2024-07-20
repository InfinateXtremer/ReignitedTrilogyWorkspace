#pragma once
#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "PortalBlockerComponent.generated.h"

class AStaticMeshActor;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FALCON_API UPortalBlockerComponent : public UStaticMeshComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AStaticMeshActor* m_geo;
    
public:
    UPortalBlockerComponent();
};

