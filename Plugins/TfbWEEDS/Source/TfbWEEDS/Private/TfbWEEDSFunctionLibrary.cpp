#include "TfbWEEDSFunctionLibrary.h"

class UFoliageType;
class UMaterialInterface;
class UObject;

void UTfbWEEDSFunctionLibrary::PrintWEEDSItems(TMap<UFoliageType*, UMaterialInterface*> List) {
}

void UTfbWEEDSFunctionLibrary::PatchMaterialsFromList(UObject* WorldContextObject, TMap<UFoliageType*, UMaterialInterface*> List, UMaterialInterface* FlowersLOD1Mat, UMaterialInterface* GrassLOD1Mat, UMaterialInterface* SproutLOD1Mat, UMaterialInterface* FlowersLOD2Mat, UMaterialInterface* GrassLOD2Mat, UMaterialInterface* SproutLOD2Mat) {
}

FString UTfbWEEDSFunctionLibrary::GetGameDirFullPath() {
    return TEXT("");
}

void UTfbWEEDSFunctionLibrary::CalcDampedSimpleHarmonicMotion(float& pPos, float& pVel, float equilibriumPos, float DeltaTime, float angularFrequency, float dampingRatio) {
}

UTfbWEEDSFunctionLibrary::UTfbWEEDSFunctionLibrary() {
}

