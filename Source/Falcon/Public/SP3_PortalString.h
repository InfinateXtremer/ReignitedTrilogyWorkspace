#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SP3_PortalString.generated.h"

class UDataTable;
class USplineComponent;

UCLASS(Blueprintable)
class FALCON_API ASP3_PortalString : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* CharDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CharWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString String;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* Spline;
    
    ASP3_PortalString();
};

