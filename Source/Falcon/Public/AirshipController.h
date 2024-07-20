#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Engine/EngineTypes.h"
#include "AirshipFMV.h"
#include "AirshipPlayerEventDelegate.h"
#include "QuestController.h"
#include "Templates/SubclassOf.h"
#include "AirshipController.generated.h"

class AActor;
class AMasterLightingManager;
class APortal;
class UPrimitiveComponent;
class UQuestActionsComponent;
class USphereComponent;

UCLASS(Abstract, Blueprintable)
class FALCON_API AAirshipController : public AQuestController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAirshipPlayerEvent GoSpyroGo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAirshipFMV AirshipFMV;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle CurrentHub;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMasterLightingManager* LightingManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> SpyroIgc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* SphereComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<APortal>> AirshipList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinAirshipIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* AirshipIGC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IgnoreDesignerControl;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APortal* m_airship;
    
public:
    AAirshipController();
protected:
    UFUNCTION(BlueprintCallable)
    void updateAirship();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Unlocked(UQuestActionsComponent* Actions);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReadyForNextRealm(UQuestActionsComponent* Actions);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OutOfWorld(UQuestActionsComponent* Actions);
    
protected:
    UFUNCTION(BlueprintCallable)
    void onSphereOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Locked(UQuestActionsComponent* Actions);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDebugMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Hidden(UQuestActionsComponent* Actions);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ForceBoarding(UQuestActionsComponent* Actions);
    
};

