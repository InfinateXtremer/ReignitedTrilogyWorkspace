#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "EInventoryType.h"
#include "EPhasmidSaveType.h"
#include "PhasmidObjectSaveDataList.h"
#include "ChangeSaveGameDelegateDelegate.h"
#include "EFalconAreaExitTitle.h"
#include "EFalconGameState.h"
#include "EFalconLevelLoadable.h"
#include "EFalconLoadScreen.h"
#include "EggChangeOmeletteDelegate.h"
#include "FalconGameStateBaseInterface.h"
#include "FalconGameStateChangedDelegate.h"
#include "FalconGameStateOnlineInterface.h"
#include "PlayerCharacterReadyDelegate.h"
#include "PlayerDeathDelegateDelegate.h"
#include "QuestAreaExitRequestedDelegate.h"
#include "FalconGameStateBase.generated.h"

class AActor;
class ATransportManager;
class UAchievementComponent;
class UAkAudioEvent;
class UDataTable;
class UFalconGameSaveComponent;
class UFanfareComponent;
class USkillPointComponent;

UCLASS(Blueprintable)
class FALCON_API AFalconGameStateBase : public AGameStateBase { //, public IFalconGameStateOnlineInterface, public IFalconGameStateBaseInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnGameUnpaused);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerDeathDelegate OnPlayerDied;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerCharacterReady OnPlayerReady;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerCharacterReady OnPlayerReadyS3;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerCharacterReady OnPlayerTeleportedS3;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChangeSaveGameDelegate OnChangeSaveGame;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFalconGameStateChanged OnGameStateChanged;
    
    UPROPERTY(BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuestAreaExitRequested onQuestAreaExitRequested;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGameUnpaused OnGameUnpaused;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAchievementComponent* AchievementComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFalconGameSaveComponent* FalconGameSaveComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkillPointComponent* SkillPointComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFanfareComponent* FanfareComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPhasmidObjectSaveDataList defaultFalconSaveDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFalconGameState theCurrentGameState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFalconGameState thePreviousGameState;
    
    UPROPERTY(BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEggChangeOmelette OnUndeservedEggsChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 levelStartingTreasure;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 levelStartingTreasureSpent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString enabledCheat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UDataTable*> _gameLevelMaps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* _levelStreamingTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* PauseSoundsEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* UnpauseSoundsEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* _skillPointsTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayerReady;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATransportManager* transporter;
    
public:
    AFalconGameStateBase();
    //UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    //void SystemStart();
    
    //UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    //void SystemRestartAfterLogin(bool userAdded);
    
    UFUNCTION(BlueprintCallable)
    void ShowLoadScreen(bool Show, float fadeTime, TEnumAsByte<EFalconLoadScreen::Type> screenType);
    
    //UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    //void ShowInventoryUI();
    
    UFUNCTION(BlueprintCallable)
    void SaveGame(EPhasmidSaveType saveType, const FString& LevelPath);
    
    UFUNCTION(BlueprintCallable)
    void SaveFileCreated();
    
    UFUNCTION(BlueprintCallable)
    void RespawningPlayer(const FString& Checkpoint);
    
    UFUNCTION(BlueprintCallable)
    void PlayerDied(AActor* Actor, const FGameplayEventData Payload);
    
    UFUNCTION(BlueprintCallable)
    bool PauseGameState(bool Pause, bool ForceUnpause);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnPlayerReadyCallback();
    
    UFUNCTION(BlueprintCallable)
    void OnGameLoadCompleteCallback();
    
public:
    UFUNCTION(BlueprintCallable)
    void LoadGameAsync(bool forceReload, bool skipRestore);
    
    UFUNCTION(BlueprintCallable)
    void LoadGame(bool forceReload, bool skipRestore);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDevelopmentBuild();
    
    //UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    //void InvokeSystemLogin();
    
    UFUNCTION(BlueprintCallable)
    float GetTimePlayedForGame();
    
    UFUNCTION(BlueprintCallable)
    void ChangeTheStateOfTheGame(EFalconGameState newGameState);
    
    UFUNCTION(BlueprintCallable)
    TEnumAsByte<EFalconLevelLoadable::Type> CanLoadLevel(const FString& LevelShortName);
    
    //UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    //void BP_SetPlayerInventoryItemCount(EInventoryType ItemType, int32 Count, bool updateSettings);
    //
    //UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    //void BP_SaveProgression(const AActor* playerStartActor);
    //
    //UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    //void BP_RespawnPlayer();
    //
    //UFUNCTION(BlueprintCallable)
    //void BP_LoadIntoLevel(FName PortalRow, FName PortalName, TEnumAsByte<EFalconLoadScreen::Type> screenType);
    
    
    // Fix for true pure virtual functions not being implemented
    //UFUNCTION(BlueprintCallable)
    //void SetCheatEnabled(const FString& Name) override PURE_VIRTUAL(SetCheatEnabled,);
    //
    //UFUNCTION(BlueprintCallable)
    //bool NeedsPatch(const FString& LevelShortName) override PURE_VIRTUAL(NeedsPatch, return false;);
    //
    //UFUNCTION(BlueprintCallable)
    //bool IsFlightLevel(const FString& LevelPath) override PURE_VIRTUAL(IsFlightLevel, return false;);
    //
    //UFUNCTION(BlueprintCallable)
    //bool IsBossLevel(const FString& LevelPath) override PURE_VIRTUAL(IsBossLevel, return false;);
    //
    //UFUNCTION(BlueprintCallable)
    //int32 GetTreasureSpentAtLevelStart() override PURE_VIRTUAL(GetTreasureSpentAtLevelStart, return 0;);
    //
    //UFUNCTION(BlueprintCallable)
    //int32 GetTreasureAtLevelStart() override PURE_VIRTUAL(GetTreasureAtLevelStart, return 0;);
    //
    //UFUNCTION(BlueprintCallable)
    //bool GetQuestActivated() override PURE_VIRTUAL(GetQuestActivated, return false;);
    //
    //UFUNCTION(BlueprintCallable)
    //bool GetPatchApplied() override PURE_VIRTUAL(GetPatchApplied, return false;);
    //
    //UFUNCTION(BlueprintCallable)
    //EFalconAreaExitTitle GetExitAreaTitle() override PURE_VIRTUAL(GetExitAreaTitle, return EFalconAreaExitTitle::None;);
    //
    //UFUNCTION(BlueprintCallable)
    //bool GetCheatEnabled(const FString& Name) override PURE_VIRTUAL(GetCheatEnabled, return false;);
    
};

