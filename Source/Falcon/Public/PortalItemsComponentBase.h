#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Components/SceneComponent.h"
#include "PortalItemsComponentBase.generated.h"

class APortal;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPortalItemsComponentBase : public USceneComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APortal* Owner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle PartnerPortalRow;
    
public:
    UPortalItemsComponentBase();
    UFUNCTION(BlueprintCallable)
    void BeginPlay();
    
};

