#ifndef UE4SS_SDK_DamageLibrary_HPP
#define UE4SS_SDK_DamageLibrary_HPP

class UDamageLibrary_C : public UBlueprintFunctionLibrary
{

    void ApplyDestructibleDamage(class UDestructibleComponent* Target, float DamageAmount, const FVector& HitLocation, const FVector& ImpulseDir, float ImpulseStrength, class UObject* __WorldContext, bool& Success);
    void Falcon: MakeInvulnerable(class AActor* EffectCauser, class AActor* EffectTarget, float Duration, bool Force, class UObject* __WorldContext);
    void Falcon: RestoreHealth(class AActor* RestoreCauser, class AActor* RestoreTarget, float Magnitude, FGameplayTagContainer Tags, class UObject* __WorldContext);
    void Falcon: ApplyDamageGroup(float DamageMagnitude, class AActor* DamageCauser, class AActor* DamageTarget, FGameplayTagContainer DamageTags, FName DamageGroupName, class UObject* __WorldContext);
    FActiveGameplayEffectHandle Falcon: ApplyDamage(class AActor* DamageCauser, class AActor* DamageTarget, float Magnitude, FGameplayTagContainer Tags, class UObject* __WorldContext);
}; // Size: 0x28

#endif
