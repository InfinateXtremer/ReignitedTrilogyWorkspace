// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "falcongamestate.h"
#include "PhasmidObjectSaveStruct.h"
#include "AchievementComponent.h"
#include "AkAudioEvent.h"
#include "FalconLoadEnums.h"
#include "FanfareComponent.h"
#include "PhasmidSaveType.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "GameFramework/GameStateBase.h"
#include "FalconGameStateBase.generated.h"

/**
 * 
 */

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FFalconGameStateBaseOnPlayerDied);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FFalconGameStateBaseOnPlayerReady);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FFalconGameStateBaseOnPlayerReadyS3);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FFalconGameStateBaseOnPlayerTeleportedS3);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FFalconGameStateBaseOnChangeSaveGame);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FFalconGameStateBaseOnGameStateChanged);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FFalconGameStateBaseOnQuestAreaExitRequested);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FFalconGameStateBaseOnGameUnpaused);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FFalconGameStateBaseOnUndeservedEggsChange);
UCLASS()
class FALCON_API AFalconGameStateBase : public AGameStateBase
{
	GENERATED_BODY()
	


public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAchievementComponent* AchievementComponent;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UFalconGameSaveComponent* FalconGameSaveComponent;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USkillPointComponent* SkillPointComponent;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UFanfareComponent* FanfareComponent;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FPhasmidObjectSaveDataList defaultFalconSaveDataList;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EFalconGameState> theCurrentGameState;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EFalconGameState> thePreviousGameState;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 levelStartingTreasure;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 levelStartingTreasureSpent;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString enabledCheat;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<class UDataTable*> _gameLevelMaps;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UDataTable* _levelStreamingTable;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAkAudioEvent* PauseSoundsEvent;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAkAudioEvent* UnpauseSoundsEvent;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UDataTable* _skillPointsTable;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bPlayerReady;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class ATransportManager* transporter;
	UPROPERTY(BlueprintAssignable)
	FFalconGameStateBaseOnUndeservedEggsChange OnUndeservedEggsChange;
	UPROPERTY(BlueprintAssignable)
	FFalconGameStateBaseOnPlayerDied OnPlayerDied;
	UPROPERTY(BlueprintAssignable)
	FFalconGameStateBaseOnPlayerReady OnPlayerReady;
	UPROPERTY(BlueprintAssignable)
	FFalconGameStateBaseOnPlayerReadyS3 OnPlayerReadyS3;
	UPROPERTY(BlueprintAssignable)
	FFalconGameStateBaseOnPlayerTeleportedS3 OnPlayerTeleportedS3;
	UPROPERTY(BlueprintAssignable)
	FFalconGameStateBaseOnChangeSaveGame OnChangeSaveGame;
	UPROPERTY(BlueprintAssignable)
	FFalconGameStateBaseOnGameStateChanged OnGameStateChanged;
	UPROPERTY(BlueprintAssignable)
	FFalconGameStateBaseOnQuestAreaExitRequested onQuestAreaExitRequested;
	UPROPERTY(BlueprintAssignable)
	FFalconGameStateBaseOnGameUnpaused OnGameUnpaused;

	UFUNCTION(BlueprintCallable)
	void SystemStart();
	UFUNCTION(BlueprintCallable)
	void SystemRestartAfterLogin(bool userAdded);
	UFUNCTION(BlueprintCallable)
	void ShowLoadScreen(bool Show, float fadeTime, TEnumAsByte<EFalconLoadScreen::Type> screenType);
	UFUNCTION(BlueprintCallable)
	void ShowInventoryUI();
	//UFUNCTION(BlueprintCallable) Can't make it work for some reason
	//void SaveGame(EPhasmidSaveType saveType, FString LevelPath);
	UFUNCTION(BlueprintCallable)
	void SaveFileCreated();
	UFUNCTION(BlueprintCallable)
	void RespawningPlayer(FString Checkpoint);
	UFUNCTION(BlueprintCallable)
	void PlayerDied(class AActor* Actor, const FGameplayEventData Payload);
	UFUNCTION(BlueprintCallable)
	bool PauseGameState(bool Pause, bool ForceUnpause);
	UFUNCTION(BlueprintCallable)
	void OnPlayerReadyCallback();
	UFUNCTION(BlueprintCallable)
	void OnGameUnpaused__DelegateSignature();
	UFUNCTION(BlueprintCallable)
	void OnGameLoadCompleteCallback();
	UFUNCTION(BlueprintCallable)
	void LoadGameAsync(bool forceReload, bool skipRestore);
	UFUNCTION(BlueprintCallable)
	void LoadGame(bool forceReload, bool skipRestore);
	
	UFUNCTION(BlueprintCallable)
	bool IsDevelopmentBuild();
	UFUNCTION(BlueprintCallable)
	void InvokeSystemLogin();
	UFUNCTION(BlueprintCallable)
	float GetTimePlayedForGame();
	UFUNCTION(BlueprintCallable)
	void ChangeTheStateOfTheGame(EFalconGameState newGameState);
	UFUNCTION(BlueprintCallable)
	TEnumAsByte<EFalconLevelLoadable::Type> CanLoadLevel(FString LevelShortName);
	UFUNCTION(BlueprintCallable)
	void BP_SetPlayerInventoryItemCount(EInventoryType ItemType, int32 Count, bool updateSettings);
	UFUNCTION(BlueprintCallable)
	void BP_SaveProgression(const class AActor* playerStartActor);
	UFUNCTION(BlueprintCallable)
	void BP_RespawnPlayer();
	UFUNCTION(BlueprintCallable)
	void BP_LoadIntoLevel(FName PortalRow, FName PortalName, TEnumAsByte<EFalconLoadScreen::Type> screenType);

};
