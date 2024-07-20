#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameFramework/GameUserSettings.h"
#include "EGraphicsOptionPreset.h"
#include "EGraphicsQuality.h"
#include "FalconGraphicsOptionStatics.generated.h"

class UObject;

UCLASS(Blueprintable)
class FALCON_API UFalconGraphicsOptionStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFalconGraphicsOptionStatics();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetVsync(const UObject* WorldContextObject, bool isOn);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetVignette(const UObject* WorldContextObject, bool isOn);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetViewDistanceQuality(const UObject* WorldContextObject, EGraphicsQuality setting);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetTextureQuality(const UObject* WorldContextObject, EGraphicsQuality setting);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetSSR(const UObject* WorldContextObject, EGraphicsQuality setting);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetShadowQuality(const UObject* WorldContextObject, EGraphicsQuality setting);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetResolution(const UObject* WorldContextObject, int32 setting, bool ApplySettings);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetPreset(const UObject* WorldContextObject, EGraphicsOptionPreset Preset);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetMotionBlur(const UObject* WorldContextObject, bool isOn);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetMaxFPS(const UObject* WorldContextObject, int32 setting);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetFoliageQuality(const UObject* WorldContextObject, EGraphicsQuality setting);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetDisplayMode(const UObject* WorldContextObject, TEnumAsByte<EWindowMode::Type> setting, bool ApplySettings);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetDepthOfField(const UObject* WorldContextObject, EGraphicsQuality setting);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetBloom(const UObject* WorldContextObject, EGraphicsQuality setting);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetAntiAliasing(const UObject* WorldContextObject, EGraphicsQuality setting);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetAmbientOcclusion(const UObject* WorldContextObject, EGraphicsQuality setting);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ResetToDefaultSettings(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void PopulateDisplaySettings(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetVsync();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetVignette();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EGraphicsQuality GetViewDistanceQuality();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EGraphicsQuality GetTextureQuality();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EGraphicsQuality GetSSR();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EGraphicsQuality GetShadowQuality();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FString> GetResolutionList();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetResolution();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EGraphicsOptionPreset GetPreset();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetMotionBlur();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FText> GetMaxFPSList();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetMaxFPS();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EGraphicsQuality GetFoliageQuality();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TEnumAsByte<EWindowMode::Type> GetDisplayMode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EGraphicsQuality GetDepthOfField();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EGraphicsOptionPreset GetDefaultPreset();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EGraphicsQuality GetBloom();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EGraphicsQuality GetAntiAliasing();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EGraphicsQuality GetAmbientOcclusion();
    
};

