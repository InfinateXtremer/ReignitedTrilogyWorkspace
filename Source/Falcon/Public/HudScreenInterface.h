#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EFanfareType.h"
#include "HudScreenInterface.generated.h"

class UObject;
class UUserWidget;

UINTERFACE(Blueprintable)
class FALCON_API UHudScreenInterface : public UInterface {
    GENERATED_BODY()
};

class FALCON_API IHudScreenInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowTitle();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowTalkModeUI(bool inShow);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowSpitModeUI(bool inShow);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowSpiritOrbCount();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowProfileChangedScreen(bool inShow);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowMovieTheaterScreen(bool inShow);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowLookModeUI(bool inShow);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowFanfare(EFanfareType MessageType, const FString& optionalName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowEggCollected(int32 eggCount, int32 eggTotal);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowDifficultyScreen(bool inShow);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowControllerErrorScreen(bool inShow);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetMiniMapVisibility(bool InVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MiniMapAddTalismanMarker(const UObject* talisman);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MiniMapAddGreenOrbMarkers();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddInteractiveWidget(UUserWidget* UserWidget, int32 ZOrder);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddGameplayWidget(UUserWidget* UserWidget, int32 ZOrder);
    
};

