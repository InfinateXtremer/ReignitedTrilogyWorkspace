#include "SP3_BossPickupBase.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"

class AActor;
class UPrimitiveComponent;

void ASP3_BossPickupBase::SetFallingEnabled(bool bEnabled) {
}

void ASP3_BossPickupBase::OnPickupLanded_Implementation(const FHitResult& Hit) {
}

void ASP3_BossPickupBase::OnPickupActivated_Implementation(AActor* Actor) {
}

void ASP3_BossPickupBase::OnCollisionCompHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

void ASP3_BossPickupBase::OnActorBeginOverlapCallback(AActor* OverlappedActor, AActor* OtherActor) {
}

bool ASP3_BossPickupBase::GetFallingEnabled() {
    return false;
}

ASP3_BossPickupBase::ASP3_BossPickupBase() {
    this->CollisionComp = CreateDefaultSubobject<USphereComponent>(TEXT("CollisionComp"));
    this->MeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComp"));
    this->m_bFalling = false;
    this->m_fMaxLandingAngle = 30.00f;
}

