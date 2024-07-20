#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "FalconGameStateSaveInterface.generated.h"

class AActor;

UINTERFACE(Blueprintable)
class FALCON_API UFalconGameStateSaveInterface : public UInterface {
    GENERATED_BODY()
};

class FALCON_API IFalconGameStateSaveInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ShowSavingUI(bool inShow);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetCurrentLevelNameForActor(AActor* Actor, FString& LevelName);
    
};

