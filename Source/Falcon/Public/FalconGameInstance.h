

#pragma once

#include "CoreMinimal.h"
#include "FalconGameState.h"
#include "Blueprint/UserWidget.h"
#include "Engine/DataTable.h"
#include "Engine/GameInstance.h"
#include "FalconGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class FALCON_API UFalconGameInstance : public UGameInstance
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "Game|FalconGameInstance", meta = (WorldContext = "WorldContextObject"))
	static void DetectPrimaryController();

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "Game|FalconGameInstance", meta = (WorldContext = "WorldContextObject"))
	static bool GameSavingEnabled();

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "Game|FalconGameInstance", meta = (WorldContext = "WorldContextObject"))
	static int32 GetMaximumNumberOfControllers();

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "Game|FalconGameInstance", meta = (WorldContext = "WorldContextObject"))
	static UObject* GetPrimaryController();

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "Game|FalconGameInstance", meta = (WorldContext = "WorldContextObject"))
	static void HandleGameStateChanged(TEnumAsByte<EFalconGameState> aNewState, TEnumAsByte<EFalconGameState> aOldState); //aOldState is probably a return value

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "Game|FalconGameInstance", meta = (WorldContext = "WorldContextObject"))
	static void HandleGameStateChangedForCutscenes(TEnumAsByte<EFalconGameState> aNewState, TEnumAsByte<EFalconGameState> aOldState); //aOldState is probably a return value

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "Game|FalconGameInstance", meta = (WorldContext = "WorldContextObject"))
	static void HandleLevelStreamingComplete();
	
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "Game|FalconGameInstance", meta = (WorldContext = "WorldContextObject"))
	static bool IsReady();

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "Game|FalconGameInstance", meta = (WorldContext = "WorldContextObject"))
	static void OnHideMouseCursorTimer();

	//UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "Game|FalconGameInstance", meta = (WorldContext = "WorldContextObject"))
	//static void OnInputSourceChanged(TEnumAsByte<EInputSource> NewInputSource); //Missing EInputSource

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "Game|FalconGameInstance", meta = (WorldContext = "WorldContextObject"))
	static bool PrimaryControllerDetected();

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "Game|FalconGameInstance", meta = (WorldContext = "WorldContextObject"))
	static void QuestionScreenOptionSelected(int selectedIndex);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "Game|FalconGameInstance", meta = (WorldContext = "WorldContextObject"))
	static void SetBypassSettingInputModeForCutsceneMouseCursor(bool DoBypass);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "Game|FalconGameInstance", meta = (WorldContext = "WorldContextObject"))
	static void ShowExternalLoginUI();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Game|FalconGameInstance")
	FString MainMenuMap;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Game|FalconGameInstance")
	FString WelcomeScreenMap;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Game|FalconGameInstance")
	UObject* _screenManager;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Game|FalconGameInstance")
	TSoftObjectPtr<UDataTable> _widgetTable;
	
};
