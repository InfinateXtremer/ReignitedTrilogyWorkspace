#pragma once
#include "CoreMinimal.h"
#include "GenericTeamAgentInterface.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Character.h"
#include "Engine/EngineTypes.h"
#include "GameFramework/RootMotionSource.h"
#include "AbilitySystemInterface.h"
#include "GameplayTagContainer.h"
#include "GameplayTagAssetInterface.h"
#include "GameplayTagContainer.h"
#include "DamageEventDelegateDelegate.h"
#include "EPhasmidTeamId.h"
#include "PhasmidDamageInterface.h"
#include "PhasmidObserverInterface.h"
#include "PhasmidCharacterMovementComponent.h"
#include "PhasmidCharacter.generated.h"

class APhasmidCharacter;
class UCombatPoolComponent;
class UCurveFloat;
class UCurveVector;
class UDataTable;
class UGameplayAbilitySet;
class UObject;
class UPhasmidAbilitySystemComponent;
class USplineComponent;

UCLASS(Blueprintable)
class PHASMID_API APhasmidCharacter : public ACharacter //, public IGenericTeamAgentInterface, public IAbilitySystemInterface, public IGameplayTagAssetInterface, public IPhasmidDamageInterface, public IPhasmidObserverInterface 
{
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnInputDelegate, APhasmidCharacter*, Character, FGameplayTag, InputTag, bool, bPressed);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseTurnRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseLookUpRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName InitialAttributeRowName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* InitialAttributeDataTable;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInputDelegate OnInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bForceSpawnAIController: 1;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer InitialGameplayTags;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGameplayAbilitySet* AbilitySet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCombatPoolComponent* CombatPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_TeamId, meta=(AllowPrivateAccess=true))
    EPhasmidTeamId TeamId;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPhasmidAbilitySystemComponent* AbilitySystem;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDamageEventDelegate OnTakeDamageDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDamageEventDelegate OnDeathDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDamageEventDelegate OnDealDamageDelegate;
    
    APhasmidCharacter();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void SplineJump(USplineComponent* Spline);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShouldCheckPushOffLedge();
    
    UFUNCTION(BlueprintCallable)
    void SetTeamId(EPhasmidTeamId newTeamId);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void PredictTagAdded(FGameplayTag TagAdded, float Time);
    
    UFUNCTION(BlueprintCallable)
    void PredictRootMotionMoveToForce(FVector TargetLocation, float Duration, bool bSetNewMovementMode, TEnumAsByte<EMovementMode> MovementMode, bool bRestrictSpeedToExpected, UCurveVector* PathOffsetCurve, ERootMotionFinishVelocityMode VelocityOnFinishMode, FVector SetVelocityOnFinish, float ClampVelocityOnFinish);
    
    UFUNCTION(BlueprintCallable)
    void PredictRootMotionJumpForce(FRotator Rotation, float Distance, float Height, float Duration, float MinimumLandedTriggerTime, bool bFinishOnLanded, UCurveVector* PathOffsetCurve, UCurveFloat* TimeMappingCurve);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRep_TeamId(EPhasmidTeamId oldTeamId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPressed(FGameplayTag Input);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsJumpProvidingForce() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleInput(FGameplayTag Input, bool bPressed);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_FellOutOfWorld();
    
    
    // Fix for true pure virtual functions not being implemented
public:
    //UFUNCTION(BlueprintCallable)
    //bool HasMatchingGameplayTag(FGameplayTag TagToCheck); //const override PURE_VIRTUAL(HasMatchingGameplayTag, return false;);
    
    //UFUNCTION(BlueprintCallable)
    //bool HasAnyMatchingGameplayTags(const FGameplayTagContainer& TagContainer); //const override PURE_VIRTUAL(HasAnyMatchingGameplayTags, return false;);
    //
    //UFUNCTION(BlueprintCallable)
    //bool HasAllMatchingGameplayTags(const FGameplayTagContainer& TagContainer); //const override PURE_VIRTUAL(HasAllMatchingGameplayTags, return false;);
    //
    //UFUNCTION(BlueprintCallable)
    //void GetOwnedGameplayTags(FGameplayTagContainer& TagContainer); //const override PURE_VIRTUAL(GetOwnedGameplayTags,);
    //
    //UFUNCTION(BlueprintCallable)
    //void RegisterObserver(UObject* Observer); //override PURE_VIRTUAL(RegisterObserver,);
    
};

