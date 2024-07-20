#pragma once
#include "CoreMinimal.h"
#include "Components/ArrowComponent.h"
#include "Engine/EngineTypes.h"
#include "EPlayerVisibility.h"
#include "OnPlayerSeenSignatureDelegate.h"
#include "WatchPlayerComponent.generated.h"

class ACharacter;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FALCON_API UWatchPlayerComponent : public UArrowComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUse2DVision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SightDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CosHalfAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseUnderwaterVision;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FComponentReference EyeComponent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerSeenSignature OnPlayerSeen;
    
    UWatchPlayerComponent();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 TotalSightings() const;
    
    UFUNCTION(BlueprintCallable)
    void StopLooking();
    
    UFUNCTION(BlueprintCallable)
    bool StartLooking();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 RecentSightings() const;
    
    UFUNCTION(BlueprintPure)
    EPlayerVisibility PlayerVisibility() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ACharacter* GetPlayer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanSeePlayer() const;
    
};

