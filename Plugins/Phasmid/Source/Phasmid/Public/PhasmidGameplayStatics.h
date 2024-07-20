#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PhasmidGameplayStatics.generated.h"

UCLASS(Blueprintable)
class PHASMID_API UPhasmidGameplayStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPhasmidGameplayStatics();
    UFUNCTION(BlueprintCallable)
    static void SetGodMode(bool isGod);
    
    UFUNCTION(BlueprintCallable)
    static bool IsRightToLeftLanguage();
    
    UFUNCTION(BlueprintCallable)
    static bool GetGodMode();
    
};

