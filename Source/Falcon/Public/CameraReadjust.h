#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Templates/SubclassOf.h"
#include "CameraReadjust.generated.h"

class AActor;
class UGameplayEffect;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FALCON_API UCameraReadjust : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Resetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> CameraCenter;
    
    UCameraReadjust();
    UFUNCTION(BlueprintCallable)
    void SetCameraLookAtTarget(AActor* Target);
    
    UFUNCTION(BlueprintCallable)
    void HardCancel();
    
    UFUNCTION(BlueprintCallable)
    void CameraReset(float Timer);
    
    UFUNCTION(BlueprintCallable)
    void CameraReadjust(AActor* Destination, bool Teleport, float Speed, bool Custom);
    
    UFUNCTION(BlueprintCallable)
    void CameraAutoadjust(AActor* talker);
    
};

