#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "SP3_DamageInterface.h"
#include "Templates/SubclassOf.h"
#include "SP3_VehicleBase.generated.h"

class ACameraActor;
class APawn;

UCLASS(Blueprintable)
class FALCON_API ASP3_VehicleBase : public AActor, public ISP3_DamageInterface {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FComponentReference m_mesh;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FComponentReference m_driveComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_driveSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_hilightTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_releaseTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ACameraActor> m_camClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_camInterp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_healthMax;
    
    ASP3_VehicleBase();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnVFXEvent(FName evtName, const FTransform& xfm, FName param0, float param1);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APawn* GetDriver() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ACameraActor* GetCamera() const;
    
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    bool IsDead() const override PURE_VIRTUAL(IsDead, return false;);
    
    UFUNCTION(BlueprintCallable)
    float GetHealthMax() const override PURE_VIRTUAL(GetHealthMax, return 0.0f;);
    
    UFUNCTION(BlueprintCallable)
    float GetHealth() const override PURE_VIRTUAL(GetHealth, return 0.0f;);
    
};

