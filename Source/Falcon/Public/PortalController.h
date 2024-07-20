#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "EFalconLoadScreen.h"
#include "QuestController.h"
#include "PortalController.generated.h"

class AActor;
class UAkAudioEvent;
class UParticleSystem;
class UPortalBlockerComponent;
class UPortalRequirementsComponent;
class UPrimitiveComponent;
class UQuestActionsComponent;

UCLASS(Abstract, Blueprintable, NotPlaceable)
class FALCON_API APortalController : public AQuestController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* sfx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* vfx;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPortalRequirementsComponent* m_requirements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPortalBlockerComponent* m_blocker;
    
public:
    APortalController();
protected:
    UFUNCTION(BlueprintCallable)
    void TimerForVFX();
    
public:
    //UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    //void Open(UQuestActionsComponent* Actions);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
public:
    UFUNCTION(BlueprintCallable)
    bool ForceTransport(EFalconLoadScreen::Type Screen);

    //UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    //void ForcePortalTransport(EFalconLoadScreen::Type Screen);
    
};

