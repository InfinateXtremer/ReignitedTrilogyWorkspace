#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "EFalconHudWidgetPosition.h"
#include "Templates/SubclassOf.h"
#include "SP3_AirCarryUICounterComponent.generated.h"

class UHudCounterComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FALCON_API USP3_AirCarryUICounterComponent : public USceneComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHudCounterComponent> m_carryCounterClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_carryCounterIconName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFalconHudWidgetPosition m_hudPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHudCounterComponent* m_carryCounter;
    
public:
    USP3_AirCarryUICounterComponent();
private:
    UFUNCTION(BlueprintCallable)
    void OnCarryCountChanged(int32 Count);
    
};

