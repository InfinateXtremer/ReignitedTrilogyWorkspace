#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "FollowCameraSettings.h"
#include "FollowCameraStatics.generated.h"

class AActor;
class UCurveFloat;
class UObject;

UCLASS(Blueprintable)
class PHASMID_API UFollowCameraStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFollowCameraStatics();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 PushCameraSettingsWithTransition(const UObject* WorldContextObject, FVector TransitionSettings, int32 PlayerIndex, const FFollowCameraSettings& NewCameraSettings);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 PushCameraSettings(const UObject* WorldContextObject, int32 PlayerIndex, const FFollowCameraSettings& NewCameraSettings);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool PopCameraSettingsWithTransition(const UObject* WorldContextObject, FVector TransitionSettings, int32 PlayerIndex, int32 SettingsId);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool PopCameraSettings(const UObject* WorldContextObject, int32 PlayerIndex, int32 SettingsId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FFollowCameraSettings GetDefaultCameraValues(const UObject* WorldContextObject, int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void CameraSetSecondaryTargetWithRelativeOffset(const UObject* WorldContextObject, int32 PlayerIndex, AActor* Target, FVector Offset, float MinDistance, float MaxDistance, UCurveFloat* ReturnToTargetCurve);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void CameraSetSecondaryTarget(const UObject* WorldContextObject, int32 PlayerIndex, AActor* Target, FVector Offset, UCurveFloat* ReturnToTargetCurve);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void CameraRemoveSecondaryTarget(const UObject* WorldContextObject, int32 PlayerIndex, AActor* Target);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool CameraHasSecondaryTarget(const UObject* WorldContextObject, int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AActor* CameraGetSecondaryTarget(const UObject* WorldContextObject, int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool CameraCannotCenter(const UObject* WorldContextObject, int32 PlayerIndex);
    
};

