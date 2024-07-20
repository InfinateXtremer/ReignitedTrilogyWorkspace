#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PhasmidGameSaveComponent.generated.h"

class UFalconSaveGame;
class USaveGame;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PHASMID_API UPhasmidGameSaveComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSaveInProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFalconSaveGame* _falconSaveGame;
    
    UPhasmidGameSaveComponent();
    UFUNCTION(BlueprintCallable)
    void SetPendingLevel(const FString& levelMain);
    
    UFUNCTION(BlueprintCallable)
    void PhasmidSaveObjectToSlot(USaveGame* SaveGameObject, const FString& SlotName, const int32 UserIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PhasmidSaveCompleted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void LevelAddedEvent();
    
    UFUNCTION(BlueprintCallable)
    UFalconSaveGame* GetFalconSaveGameObject();
    
};

