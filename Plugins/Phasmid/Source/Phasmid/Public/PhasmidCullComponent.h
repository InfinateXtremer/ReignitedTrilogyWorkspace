#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PhasmidCullComponent.generated.h"

class AActor;
class UMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PHASMID_API UPhasmidCullComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FCullEventDelegate, AActor*, Actor, bool, bIsCulled);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CullDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CullDistanceSquared;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CullCheckTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanActorBeDisabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanActorBeDisabledByVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanActorBeZKilled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreZDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReducedMoveInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseCamAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoCull;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStillAutoCullWhenVolumeControlled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bEnableCollisionCulling: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CollisionCullDistance;
    
    UPhasmidCullComponent();
    UFUNCTION(BlueprintCallable)
    void UnbindFromCull(AActor* EventOwner);
    
    UFUNCTION(BlueprintCallable)
    static void SetGameStateCullReady(bool bReady);
    
    UFUNCTION(BlueprintCallable)
    void SetCullDistance(float NewCullDistance);
    
    UFUNCTION(BlueprintCallable)
    void SetAutoUpdateCull(bool bNewEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetActorEnabled(bool bNewEnabled);
    
    UFUNCTION(BlueprintCallable)
    bool IsCulled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActorCulled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetOffScreen() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetMeshOffScreen(UMeshComponent* MeshComponent) const;
    
    UFUNCTION(BlueprintCallable)
    static bool GetGameStateCullReady();
    
    UFUNCTION(BlueprintCallable)
    void CheckCull();
    
    UFUNCTION(BlueprintCallable)
    void BindToCull(AActor* EventOwner, const UPhasmidCullComponent::FCullEventDelegate& Event);
    
};

