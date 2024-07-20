#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PhasmidWeaponLibrary.generated.h"

class UDecalComponent;
class UMaterialInterface;
class UObject;

UCLASS(Blueprintable)
class UPhasmidWeaponLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPhasmidWeaponLibrary();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UDecalComponent* SpawnDecalAtLocationWithFadeSize(const UObject* WorldContextObject, UMaterialInterface* DecalMaterial, FVector DecalSize, FVector Location, FRotator Rotation, float LifeSpan, float FadedScreenSize);
    
};

