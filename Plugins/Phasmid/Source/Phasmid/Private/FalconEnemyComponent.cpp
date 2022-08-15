

#include "FalconEnemyComponent.h"

bool UFalconEnemyComponent::WillSpawnCollectibleOfType(UClass * Class)
{
	return false;
}

UParticleSystemComponent * UFalconEnemyComponent::SpawnEmitter(FFalconStateEmitterStruct EmitterData)
{
	return nullptr;
}

void UFalconEnemyComponent::SetDebugDrawCurrentStateOverrideState(EEnemyDebugDrawOverrideType overrideType)
{
}

void UFalconEnemyComponent::SetDead()
{
}

void UFalconEnemyComponent::ResetStateMachine()
{
}

void UFalconEnemyComponent::RemoveImmunity(FGameplayTagContainer ImmunityTags)
{
}

void UFalconEnemyComponent::OnTakeDamage(AActor * Actor, const FGameplayEventData Payload)
{
}

void UFalconEnemyComponent::OnReceiveHit(float Magnitude, FGameplayTagContainer DamageTags, const FHitResult & Hit, const AActor * HitInstigator)
{
}

void UFalconEnemyComponent::OnMontageEnded(UAnimMontage * Montage, bool bInterrupted)
{
}

void UFalconEnemyComponent::OnDealDamage(AActor * Actor, const FGameplayEventData Payload)
{
}

void UFalconEnemyComponent::OnCollisionVolumeExit(UPrimitiveComponent * OverlappedComponent, AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex)
{
}

void UFalconEnemyComponent::OnCollisionVolumeBeginOverlap(UPrimitiveComponent * OverlappedComponent, AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult)
{
}

void UFalconEnemyComponent::OnCollectibleSpawnedByState(UFalconEnemyStateComponent * State, AActor * Actor)
{
}

TArray<class UMaterialInstanceDynamic*> UFalconEnemyComponent::GetMetalMaterials()
{
	return TArray<class UMaterialInstanceDynamic*>();
}

FHitResult UFalconEnemyComponent::GetLastHitResult()
{
	return FHitResult();
}

AActor * UFalconEnemyComponent::GetLastHitInstigator()
{
	return nullptr;
}

bool UFalconEnemyComponent::GetIsMetal()
{
	return false;
}

EEnemyDebugDrawOverrideType UFalconEnemyComponent::GetDebugDrawCurrentStateOverrideState()
{
	return EEnemyDebugDrawOverrideType();
}

float UFalconEnemyComponent::GetCurrentStateTime()
{
	return 0.0f;
}

bool UFalconEnemyComponent::CanBeDamagedByHit(const FGameplayTagContainer & DamageTypes, UPrimitiveComponent * HitComponent)
{
	return false;
}

bool UFalconEnemyComponent::CanBeCharged()
{
	return false;
}

void UFalconEnemyComponent::BP_RestoreSaveData(const FPhasmidObjectSaveDataList & saveData)
{
}

bool UFalconEnemyComponent::BP_IsDead(AActor * Enemy)
{
	return false;
}

FGameplayTagContainer UFalconEnemyComponent::BP_GetLastDamageTypesTaken(UObject * Enemy)
{
	return FGameplayTagContainer();
}

FName UFalconEnemyComponent::BP_GetCurrentStateName()
{
	return FName();
}

void UFalconEnemyComponent::BP_ForcePoseUpdate()
{
}

void UFalconEnemyComponent::BP_ClearLastDamageTypesTaken(UObject * Enemy)
{
}

bool UFalconEnemyComponent::BP_ChangeState_StateComponent(UFalconEnemyStateComponent * StateComponent, bool bForceImmediate)
{
	return false;
}

bool UFalconEnemyComponent::BP_ChangeState(FName stateName)
{
	return false;
}

void UFalconEnemyComponent::BP_AddSaveData(FPhasmidObjectSaveDataList & saveData)
{
}

void UFalconEnemyComponent::BP_AddActorToWatchListByIndex(int32 Index, AActor * Actor)
{
}

void UFalconEnemyComponent::BP_AddActorToWatchList(FName NextStateName, AActor * Actor)
{
}

bool UFalconEnemyComponent::AllLootCollected()
{
	return false;
}

void UFalconEnemyComponent::AddImmunity(const FGameplayTagContainer & ImmunityTags)
{
}
