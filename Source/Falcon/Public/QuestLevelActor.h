#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PhasmidObjectSaveInterface.h"
#include "EIdWorld.h"
#include "ETargetField.h"
#include "QuestBinding.h"
#include "QuestBoundTriggers.h"
#include "QuestControllerBindings.h"
#include "QuestTypeEntry.h"
#include "Templates/SubclassOf.h"
#include "QuestLevelActor.generated.h"

class ACharacter;
class UAkAudioEvent;
class UCameraReadjust;
class UDataTable;
class UQuestLevelManager;
class UScriptedWorld;

UCLASS(Abstract, Blueprintable)
class FALCON_API AQuestLevelActor : public AActor //, public IPhasmidObjectSaveInterface 
{
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UScriptedWorld> Script;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> TotalEggs;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DialogTable;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* FullbodyTable;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* LevelStreamingTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ACharacter> PlayerCharacterClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* MusicEvent;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDelayStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuestControllerBindings ControllerBindings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuestBoundTriggers Triggers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FQuestTypeEntry> DefaultControllers;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EIdWorld World;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FQuestBinding> Bindings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HasBindings;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UQuestLevelManager* m_manager;
    
public:
    AQuestLevelActor();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ToggleInvulnerability(bool invuln);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowSparx();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowGemCounter(bool A);
    
    UFUNCTION(BlueprintCallable)
    void SetDelayStart(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetBoardValue(FName Key, FName Value);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDeactivate();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnActivate();
    
    UFUNCTION(BlueprintCallable)
    bool IsActive();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HideSparx();
    
    UFUNCTION(BlueprintCallable)
    bool GetDelayStart();
    
    UFUNCTION(BlueprintCallable)
    UCameraReadjust* GetCameraReadjust();
    
    UFUNCTION(BlueprintCallable)
    FName GetBoardValueWithField(FName Key, ETargetField Field);
    
    UFUNCTION(BlueprintCallable)
    FName GetBoardValue(FName Key);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ClearInput();
    
    
    // Fix for true pure virtual functions not being implemented
};

