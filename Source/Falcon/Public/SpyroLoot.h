#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "PhasmidLevelActor.h"
#include "ECollectionSequenceState.h"
#include "SpyroLoot.generated.h"

class ACharacter;
class UCurveFloat;

UCLASS(Blueprintable)
class FALCON_API ASpyroLoot : public APhasmidLevelActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LevelKeyForSave;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SparxCollectionDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MovingPositionLerpDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PlayerOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* SparxCollectionHeightCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACharacter* playerCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECollectionSequenceState CollectionSequenceState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bManualLootRotation: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator ManualCollectionRotation;
    
public:
    ASpyroLoot();
protected:
    UFUNCTION(BlueprintCallable)
    void StartSparxCollection(ACharacter* CollectingCharacter);
    
    UFUNCTION(BlueprintCallable)
    void StartContactCollection(ACharacter* CollectingCharacter);
    
    UFUNCTION(BlueprintCallable)
    void StartChargeCollection(ACharacter* CollectingCharacter);
    
    UFUNCTION(BlueprintCallable)
    void SparxLootSlurp(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CollectionCompleted();
    
    UFUNCTION(BlueprintCallable)
    void ChargeLootSlurp(float DeltaTime);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_SetGemAutoCollect();
    
};

