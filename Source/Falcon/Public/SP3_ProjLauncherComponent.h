#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "Components/SceneComponent.h"
#include "SP3LauncherEvtSigOnSpawnProjDelegate.h"
#include "SP3LauncherEvtSigOnVFXSetStateDelegate.h"
#include "Templates/SubclassOf.h"
#include "SP3_ProjLauncherComponent.generated.h"

class AActor;
class UHudCounterComponent;
class UUserWidget;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FALCON_API USP3_ProjLauncherComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> HoldClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> ProjClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> ReticleClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHudCounterComponent> UIAmmoClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName UIIconName;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FComponentReference> Barrels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector DelayTimes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D AmmoCounts;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FComponentReference TargetingComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector TargetingParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D InheritVel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Automatic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AutoAim;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSP3LauncherEvtSigOnVFXSetState OnVFXSetState;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSP3LauncherEvtSigOnSpawnProj OnSpawnProj;
    
    USP3_ProjLauncherComponent();
    UFUNCTION(BlueprintCallable)
    void SetTarget(USceneComponent* Target);
    
    UFUNCTION(BlueprintCallable)
    void SetInput(bool Fire);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USceneComponent* GetTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetStateName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumAmmo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxAmmo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetBarrelTransform() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USceneComponent* GetBarrel() const;
    
};

