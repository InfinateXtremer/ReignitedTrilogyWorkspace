#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "FalconUITimerLibrary.generated.h"

UCLASS(Blueprintable)
class UFalconUITimerLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFalconUITimerLibrary();
    UFUNCTION(BlueprintCallable)
    static void K2_UnpauseFalconUITimer(FTimerHandle Handle);
    
    UFUNCTION(BlueprintCallable)
    static FTimerHandle K2_SetFalconUITimer(FTimerDynamicDelegate Delegate, float Time, bool bLooping);
    
    UFUNCTION(BlueprintCallable)
    static void K2_PauseFalconUITimer(FTimerHandle Handle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool K2_IsFalconUITimerPaused(FTimerHandle Handle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool K2_IsFalconUITimerActive(FTimerHandle Handle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float K2_GetFalconUITimeRemaining(FTimerHandle Handle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float K2_GetFalconUITimeElapsed(FTimerHandle Handle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool K2_DoesFalconUITimerExist(FTimerHandle Handle);
    
    UFUNCTION(BlueprintCallable)
    static void K2_ClearFalconUITimer(FTimerHandle Handle);
    
    UFUNCTION(BlueprintCallable)
    static void K2_ClearAndInvalidateFalconUITimer(UPARAM(Ref) FTimerHandle& Handle);
    
};

