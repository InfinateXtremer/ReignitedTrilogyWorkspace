#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "TfbWEEDSFunctionLibrary.generated.h"

class UFoliageType;
class UMaterialInterface;
class UObject;

UCLASS(Blueprintable)
class TFBWEEDS_API UTfbWEEDSFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UTfbWEEDSFunctionLibrary();
    UFUNCTION(BlueprintCallable)
    static void PrintWEEDSItems(TMap<UFoliageType*, UMaterialInterface*> List);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void PatchMaterialsFromList(UObject* WorldContextObject, TMap<UFoliageType*, UMaterialInterface*> List, UMaterialInterface* FlowersLOD1Mat, UMaterialInterface* GrassLOD1Mat, UMaterialInterface* SproutLOD1Mat, UMaterialInterface* FlowersLOD2Mat, UMaterialInterface* GrassLOD2Mat, UMaterialInterface* SproutLOD2Mat);
    
    UFUNCTION(BlueprintCallable)
    static FString GetGameDirFullPath();
    
    UFUNCTION(BlueprintCallable)
    static void CalcDampedSimpleHarmonicMotion(UPARAM(Ref) float& pPos, UPARAM(Ref) float& pVel, float equilibriumPos, float DeltaTime, float angularFrequency, float dampingRatio);
    
};

