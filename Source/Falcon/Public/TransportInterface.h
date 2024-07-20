#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "TransportInterface.generated.h"

class AActor;
class APawn;

UINTERFACE(Blueprintable, MinimalAPI)
class UTransportInterface : public UInterface {
    GENERATED_BODY()
};

class ITransportInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TI_TurnOnOrbs();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TI_TriggerPreload();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TI_TransitionTriggerDetectedTarget();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TI_TransitionTriggerDetectedSource();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TI_TransitionCompleteTarget(bool Success, APawn* playerCharacter, AActor* targetPortal);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TI_TransitionCompleteSource();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TI_TransitionBeginTarget(APawn* playerCharacter, AActor* sourcePortal);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TI_TransitionBeginSource();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TI_ReturnHomeMenu();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TI_LoadNextHomeworld();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TI_LevelEndItemCollected();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SavePortalRotation(FRotator CurrentRotation);
    
};

