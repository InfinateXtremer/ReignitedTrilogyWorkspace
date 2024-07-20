#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "Templates/SubclassOf.h"
#include "SP3_AirCarryObject.generated.h"

class APhasmidLevelActor;
class UDamageType;
class UGameplayEffect;
class USP3_CarrySocketComponent;

UCLASS(Blueprintable)
class FALCON_API ASP3_AirCarryObject : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<APhasmidLevelActor>> m_destroyOnContactWith;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_dropDamageAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDamageType> m_dropDamageType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> m_dropDamageEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer m_dropDamageTags;
    
    ASP3_AirCarryObject();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnObjectDestroyed(AActor* destroyedBy);
    
    UFUNCTION(BlueprintCallable)
    void OnCarryObjectHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit);
    
public:
    UFUNCTION(BlueprintCallable)
    void AttachToSocket(USP3_CarrySocketComponent* socket);
    
};

