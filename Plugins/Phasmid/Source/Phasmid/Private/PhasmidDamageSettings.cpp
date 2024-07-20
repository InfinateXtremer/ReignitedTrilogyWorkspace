#include "PhasmidDamageSettings.h"
#include "PhasmidGameplayAbility_DamageTargets.h"

UPhasmidDamageSettings::UPhasmidDamageSettings() {
    this->DamageTypeDeathTagName = TEXT("Damage.Death");
    this->InvulnerableTagName = TEXT("DamageSystem.CannotTakeDamage");
    this->RequiredDamageSuffix = TEXT("DamageRequirement");
    this->ImmuneToDamageSuffix = TEXT("DamageFilter");
    this->DodgeDamageSuffix = TEXT("DamageDodge");
    this->PreventedDamageBaseTagName = TEXT("DamageSystem.Prevented");
    this->PreventedByDamageGroupTagName = TEXT("DamageSystem.Prevented.DamageGroup");
    this->PreventedByInvulnerabilityTagName = TEXT("DamageSystem.Prevented.Invulnerable");
    this->DefaultDamageAbility = UPhasmidGameplayAbility_DamageTargets::StaticClass();
    this->DefaultCollisionChannel = TEXT("Trigger");
}

