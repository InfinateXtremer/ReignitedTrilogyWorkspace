#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "TransportFunctions.generated.h"

class AActor;
class AFalconGameStateBase;
class APortal;
class ATransportManager;
class UObject;

UCLASS(Blueprintable)
class FALCON_API UTransportFunctions : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UTransportFunctions();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RespawnAndPosessPlayerCharacter(UObject* WorldContextObject, const FTransform& SpawnTransform);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ResetPlayerCharacter(UObject* WorldContextObject, const FTransform& SpawnTransform);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void LoadNextHomeworld(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsPlayerCharacter(UObject* WorldContextObject, AActor* PlayerChar, AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetCurrentLevelSlotOffset(UObject* WorldContextObject, const FName& LevelName, FVector& Offset);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static ATransportManager* FindTransportManager(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static APortal* FindTransportActor(UObject* WorldContextObject, FName ObjectName);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AFalconGameStateBase* FindFalconGameStateBase(UObject* WorldContextObject);
    
};

