#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "InputCoreTypes.h"
#include "Templates/SubclassOf.h"
#include "PhasmidInputGlyphSettings.generated.h"

class UPhasmidKeyboardIconWidget;

UCLASS(Blueprintable, Config=Engine, DefaultConfig, NotPlaceable, Config=Game)
class PHASMID_API UPhasmidInputGlyphSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath DisplayActionsTableObjectPath;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath ConsoleIconImagesTableObjectPath;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath ControlCommandToActionTableObjectPath;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath KeyboardMouseIconMapTableObjectPath;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath BulletPointTextureObjectPath;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath MouseTextureObjectPath;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPhasmidKeyboardIconWidget> KeyboardIconWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D KeyboardIconSize;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> DoNotUseKeyboardIconForTheseKeys;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChargeSensitivity;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Fly_X_Sensitivity;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Fly_Y_Sensitivity;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MouseSensitivity;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UseMouseForFlying;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChargeModifier;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeToHideMouseInCutscenes;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultInvertMouseYForFly;
    
    UPhasmidInputGlyphSettings();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetDefaultUseMouseForFlying();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetDefaultTimeToHideMouseInCutscenes();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetDefaultMouseSensitivity();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetDefaultInvertMouseYForFly();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetDefaultFlyYSensitivity();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetDefaultFlyXSensitivity();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetDefaultChargeSensitivity();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetDefaultChargeModifier();
    
};

