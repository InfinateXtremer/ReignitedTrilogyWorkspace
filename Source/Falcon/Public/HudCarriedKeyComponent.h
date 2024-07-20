#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EFalconHudWidgetPosition.h"
#include "KeyColorSetting.h"
#include "HudCarriedKeyComponent.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FALCON_API UHudCarriedKeyComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FKeyColorSetting> ColorSettings;
    
    UHudCarriedKeyComponent();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowCarriedKey(FName Name, EFalconHudWidgetPosition Position);
    
};

