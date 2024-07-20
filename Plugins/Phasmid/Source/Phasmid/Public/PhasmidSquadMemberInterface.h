#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "PhasmidSquadMemberInterface.generated.h"

class AActor;

UINTERFACE(Blueprintable, MinimalAPI)
class UPhasmidSquadMemberInterface : public UInterface {
    GENERATED_BODY()
};

class IPhasmidSquadMemberInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool SetTarget(AActor* Target);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool SetSquadOrders(const FString& Orders, AActor* Target);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool SetMoveToLocation(FVector Location);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool SetAllowedToTaunt(bool Allowed);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool SetAllowedToAttack(bool Allowed);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool SetAlerted(bool alerted);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFailedToFindCover();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCoverAssigned(FVector Start, FVector End, FRotator Orientation);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsDead();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsAlerted();
    
};

