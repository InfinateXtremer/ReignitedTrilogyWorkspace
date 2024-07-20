#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "FalconGameStateInterface.generated.h"

class ULevel;

UINTERFACE(Blueprintable)
class PHASMID_API UFalconGameStateInterface : public UInterface {
    GENERATED_BODY()
};

class PHASMID_API IFalconGameStateInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetEnableLoadScreen(bool Enable, float fadeTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCutsceneEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCutsceneBegin();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool InCutscene();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ULevel* GetCurrentLevelForSaveData(FString& LevelName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AwardLifeFromSkillPoint();
    
};

