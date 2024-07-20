#include "FalconEnemyComponent.h"

class AActor;
class UAnimMontage;
class UFalconEnemyStateComponent;
class UMaterialInstanceDynamic;
class UObject;
class UParticleSystemComponent;
class UPrimitiveComponent;

bool UFalconEnemyComponent::WillSpawnCollectibleOfType(UClass* Class) {
    return false;
}

UParticleSystemComponent* UFalconEnemyComponent::SpawnEmitter(FFalconStateEmitterStruct EmitterData) {
    return NULL;
}

void UFalconEnemyComponent::SetDebugDrawCurrentStateOverrideState(EEnemyDebugDrawOverrideType overrideType) {
}

void UFalconEnemyComponent::SetDead() {
}

void UFalconEnemyComponent::ResetStateMachine() {
}

void UFalconEnemyComponent::RemoveImmunity(FGameplayTagContainer ImmunityTags) {
}

void UFalconEnemyComponent::OnTakeDamage(AActor* Actor, const FGameplayEventData Payload) {
}

void UFalconEnemyComponent::OnReceiveHit(float Magnitude, FGameplayTagContainer DamageTags, const FHitResult& Hit, const AActor* HitInstigator) {
}

void UFalconEnemyComponent::OnMontageEnded(UAnimMontage* Montage, bool bInterrupted) {
}

void UFalconEnemyComponent::OnDealDamage(AActor* Actor, const FGameplayEventData Payload) {
}

void UFalconEnemyComponent::OnCollisionVolumeExit(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void UFalconEnemyComponent::OnCollisionVolumeBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void UFalconEnemyComponent::OnCollectibleSpawnedByState(UFalconEnemyStateComponent* State, AActor* Actor) {
}

TArray<UMaterialInstanceDynamic*> UFalconEnemyComponent::GetMetalMaterials() {
    return TArray<UMaterialInstanceDynamic*>();
}

FHitResult UFalconEnemyComponent::GetLastHitResult() {
    return FHitResult{};
}

AActor* UFalconEnemyComponent::GetLastHitInstigator() {
    return NULL;
}

bool UFalconEnemyComponent::GetIsMetal() const {
    return false;
}

EEnemyDebugDrawOverrideType UFalconEnemyComponent::GetDebugDrawCurrentStateOverrideState() {
    return EEnemyDebugDrawOverrideType::EEDDO_None;
}

float UFalconEnemyComponent::GetCurrentStateTime() {
    return 0.0f;
}

bool UFalconEnemyComponent::CanBeDamagedByHit(const FGameplayTagContainer& DamageTypes, UPrimitiveComponent* HitComponent) {
    return false;
}

bool UFalconEnemyComponent::CanBeCharged() {
    return false;
}

void UFalconEnemyComponent::BP_RestoreSaveData(const FPhasmidObjectSaveDataList& saveData) {
}

bool UFalconEnemyComponent::BP_IsDead(AActor* Enemy) {
    return false;
}

FGameplayTagContainer UFalconEnemyComponent::BP_GetLastDamageTypesTaken(UObject* Enemy) {
    return FGameplayTagContainer{};
}

FName UFalconEnemyComponent::BP_GetCurrentStateName() const {
    return NAME_None;
}

void UFalconEnemyComponent::BP_ForcePoseUpdate() {
}

void UFalconEnemyComponent::BP_ClearLastDamageTypesTaken(UObject* Enemy) {
}

bool UFalconEnemyComponent::BP_ChangeState_StateComponent(UFalconEnemyStateComponent* StateComponent, bool bForceImmediate) {
    return false;
}

bool UFalconEnemyComponent::BP_ChangeState(FName stateName) {
    return false;
}

void UFalconEnemyComponent::BP_AddSaveData(FPhasmidObjectSaveDataList& saveData) {
}

void UFalconEnemyComponent::BP_AddActorToWatchListByIndex(int32 Index, AActor* Actor) {
}

void UFalconEnemyComponent::BP_AddActorToWatchList(FName NextStateName, AActor* Actor) {
}

bool UFalconEnemyComponent::AllLootCollected() {
    return false;
}

void UFalconEnemyComponent::AddImmunity(const FGameplayTagContainer& ImmunityTags) {
}

UFalconEnemyComponent::UFalconEnemyComponent() {
    this->bUpdateOnEnter = true;
    this->MoveDoneRadius = 10.00f;
    this->MoveDoneHalfAngle = 1.00f;
    this->bChangeMovementToWalkingAfterLaunch = false;
    this->bBroadcastSignalOnPlayerHurt = false;
    this->bEnableStateMachineLogic = true;
    this->bDrawTriggerDistances = false;
    this->bDebugDrawCurrentState = false;
    this->bDebugDrawSightRadius = false;
    this->bDebugDrawDistanceToPlayer = false;
    this->bDebugReviewStateMachine = false;
    this->bDebugDisplayStateMachineReviewToScreen = false;
    this->SightRadius = 0.00f;
    this->SightHalfAngle = 0.00f;
    this->OnScreenPercentage = 100;
    this->HitPoints = 0;
    this->bVisibleAfterDeath = false;
    this->bMuteDuringCutscenes = false;
    this->bIgnoreCutsceneMode = false;
    this->bDisplaceGrass = true;
    this->bStopPlayingMontagesOnEnter = true;
    this->bAllowTriggersToChangeWhileInTheAir = true;
    this->bShowFlamedEffect = true;
    this->bIsMetal = false;
    this->bIncludeBlendBelowBone = false;
    this->ZeroTickIntervalDistance = 800.00f;
    this->CurrentState = NULL;
    this->BlueprintNextState = NULL;
    this->Emitter = NULL;
}

