#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "EFalconHudWidgetPosition.h"
#include "SP3_AnimInterface.h"
#include "Templates/SubclassOf.h"
#include "SP3_ControllableComponent.generated.h"

class UHudCounterComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FALCON_API USP3_ControllableComponent : public UActorComponent, public ISP3_AnimInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHudCounterComponent> m_healthUIClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_healthUIIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFalconHudWidgetPosition m_healthUIPos;
    
    USP3_ControllableComponent();
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION()
    FName GetAnimState(FName Layer, FVector4& Input, float& Alpha, FName& SubState) const override PURE_VIRTUAL(GetAnimState, return NAME_None;);
    
};

