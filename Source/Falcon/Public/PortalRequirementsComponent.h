#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "PortalRequirementsComponent.generated.h"

class AActor;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FALCON_API UPortalRequirementsComponent : public USceneComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* m_eggs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* m_gems;
    
public:
    UPortalRequirementsComponent();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreateGems(int32 NumGems, int32 NumDigits, AActor*& OutGemsDisplay);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreateEggs(int32 NumEggs, int32 NumDigits, AActor*& OutEggDisplay);
    
};

