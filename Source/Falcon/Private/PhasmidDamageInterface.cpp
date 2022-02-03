

#include "PhasmidDamageInterface.h"

bool IPhasmidDamageInterface::OnHealthRestored_Implementation(const FGameplayEventData & Payload)
{
	return false;
}

bool IPhasmidDamageInterface::OnDeath_Implementation(const FGameplayEventData & Payload)
{
	return false;
}

bool IPhasmidDamageInterface::OnDealDamage_Implementation(const FGameplayEventData & Payload)
{
	return false;
}

bool IPhasmidDamageInterface::OnDamage_Implementation(const FGameplayEventData & Payload)
{
	return false;
}

void IPhasmidDamageInterface::IsImmuneToDamage_Implementation()
{
}

bool IPhasmidDamageInterface::IsDead_Implementation()
{
	return false;
}

bool IPhasmidDamageInterface::IsChargeTarget_Implementation()
{
	return false;
}
