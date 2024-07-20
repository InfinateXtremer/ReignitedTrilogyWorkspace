#include "SP3_SparxEnemyBase.h"
#include "SP3_HomingTargetComponent.h"
#include "Templates/SubclassOf.h"

class AActor;
class APawn;
class UAnimMontage;
class USceneComponent;

AActor* ASP3_SparxEnemyBase::SpawnProjectile(const USceneComponent* Component, FName socket, TSubclassOf<AActor> ProjClass, float Speed, float InheritVel, float aimAdjust) {
    return NULL;
}

void ASP3_SparxEnemyBase::SetTarget(AActor* Target) {
}

void ASP3_SparxEnemyBase::SetFacingDir(float angDegWS) {
}

void ASP3_SparxEnemyBase::RxActorHit(AActor* Self, AActor* Other, FVector N, const FHitResult& Hit) {
}

void ASP3_SparxEnemyBase::PlayMontage(UAnimMontage* Montage, float Rate) {
}


float ASP3_SparxEnemyBase::GetTargetDistance() const {
    return 0.0f;
}

float ASP3_SparxEnemyBase::GetTargetAngle() const {
    return 0.0f;
}

AActor* ASP3_SparxEnemyBase::GetTarget() const {
    return NULL;
}

ESP3_ProjColType ASP3_SparxEnemyBase::GetProjColType(AActor* proj, APawn* sender, const FHitResult& Hit) const {
    return ESP3_ProjColType::Default;
}

int32 ASP3_SparxEnemyBase::GetNumProjectiles() const {
    return 0;
}

float ASP3_SparxEnemyBase::GetFacingDir() const {
    return 0.0f;
}

void ASP3_SparxEnemyBase::ClearProjectiles() {
}

void ASP3_SparxEnemyBase::ApplyKnockback(const FVector& from, float Impulse, float Duration) {
}

ASP3_SparxEnemyBase::ASP3_SparxEnemyBase() {
    this->m_floorZ = 0.00f;
    this->m_healthMax = 1.00f;
    this->m_waitChildren = false;
    this->m_clearChildren = false;
    this->m_contactDmgType = NULL;
    this->m_contactDmgAmt = 1.00f;
    this->m_uiHealthClass = NULL;
    this->m_noFriendlyFire = true;
    this->m_autoTarget = false;
    this->m_autoTgtPoint = NULL;
    this->m_autoTgtRange = -1.00f;
    this->m_autoTgtAngle = 180.00f;
    this->m_dbgDraw = false;
    this->HomingTarget = CreateDefaultSubobject<USP3_HomingTargetComponent>(TEXT("HomingTarget"));
    this->DebugText = NULL;
}

