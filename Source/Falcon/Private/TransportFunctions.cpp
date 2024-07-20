#include "TransportFunctions.h"

class AActor;
class AFalconGameStateBase;
class APortal;
class ATransportManager;
class UObject;

void UTransportFunctions::RespawnAndPosessPlayerCharacter(UObject* WorldContextObject, const FTransform& SpawnTransform) {
}

void UTransportFunctions::ResetPlayerCharacter(UObject* WorldContextObject, const FTransform& SpawnTransform) {
}

void UTransportFunctions::LoadNextHomeworld(UObject* WorldContextObject) {
}

bool UTransportFunctions::IsPlayerCharacter(UObject* WorldContextObject, AActor* PlayerChar, AActor* OtherActor) {
    return false;
}

void UTransportFunctions::GetCurrentLevelSlotOffset(UObject* WorldContextObject, const FName& LevelName, FVector& Offset) {
}

ATransportManager* UTransportFunctions::FindTransportManager(UObject* WorldContextObject) {
    return NULL;
}

APortal* UTransportFunctions::FindTransportActor(UObject* WorldContextObject, FName ObjectName) {
    return NULL;
}

AFalconGameStateBase* UTransportFunctions::FindFalconGameStateBase(UObject* WorldContextObject) {
    return NULL;
}

UTransportFunctions::UTransportFunctions() {
}

