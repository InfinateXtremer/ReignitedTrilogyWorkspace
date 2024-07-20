#include "Teleporter.h"
#include "Components/ArrowComponent.h"
#include "Components/BoxComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/TextRenderComponent.h"
#include "GemFinderLinkComponent.h"

class AActor;
class UPrimitiveComponent;

void ATeleporter::SetActorHiddenInGame(bool bNewHidden) {
}

void ATeleporter::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}



ATeleporter::ATeleporter() {
    this->longFade = false;
    this->PartnerTeleporter = NULL;
    this->TeleportTrigger = CreateDefaultSubobject<UBoxComponent>(TEXT("TeleportTrigger"));
    this->LandingPoint = CreateDefaultSubobject<UArrowComponent>(TEXT("LandingPoint"));
    this->PlayerClassOverride = NULL;
    this->MusicOnTeleport = NULL;
    this->MovementMode = EPlayerMoveMode::Unknown;
    this->OpenMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("OpenMesh"));
    this->ClosedMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ClosedMesh"));
    this->vfx = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("vfx"));
    this->StartVFX = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("StartVFX"));
    this->GemFinderLink = CreateDefaultSubobject<UGemFinderLinkComponent>(TEXT("GemFinderLink"));
    this->Enabled = true;
    this->TextRender = CreateDefaultSubobject<UTextRenderComponent>(TEXT("TextRender"));
    this->PlayerTeleportTask = NULL;
}

