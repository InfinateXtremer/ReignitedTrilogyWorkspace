#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PhasmidSoftReference.h"
#include "PhasmidSoftReferenceLibrary.generated.h"

class AActor;

UCLASS(Blueprintable)
class UPhasmidSoftReferenceLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPhasmidSoftReferenceLibrary();
    UFUNCTION(BlueprintCallable)
    static AActor* ResolveReference(FPhasmidSoftReference PhasmidSoftRef);
    
};

