#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MP4PlayerFunctionLibrary.generated.h"

class UMediaPlayer;

UCLASS(Blueprintable)
class UMP4PlayerFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMP4PlayerFunctionLibrary();
private:
    UFUNCTION(BlueprintCallable)
    static void SetDefaultLanguage(UMediaPlayer* Player);
    
    UFUNCTION(BlueprintCallable)
    static void PlayWithCurrentLanguage(UMediaPlayer* Player);
    
};

