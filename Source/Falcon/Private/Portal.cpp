#include "Portal.h"
#include "Components/BoxComponent.h"
#include "Components/CapsuleComponent.h"

class AActor;
class ACharacter;
class APortal;
class UPrimitiveComponent;

void APortal::UnTriggerPreload_Implementation() {
}

bool APortal::TriggerTransport_Implementation(ACharacter* playerCharacter) {
    return false;
}

void APortal::TriggerPreload_Implementation() {
}

void APortal::Tick(float DeltaSeconds) {
}

void APortal::SwitchBeforeTransport() {
}

void APortal::setPortalVisible_Implementation(bool visible) {
}

void APortal::setPortalEnabled_Implementation(bool Enabled) {
}

bool APortal::RemoveDownloadMessage_Implementation() {
    return false;
}


void APortal::OnPartnerPortalFound_Implementation(APortal* FoundParter) {
}

void APortal::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
	UE_LOG(LogTemp, Warning, TEXT("Overlapping."));
}

void APortal::HandlePlayerSpawnAfterFade_Implementation() {
}

void APortal::HandlePlayerSpawn_Implementation(float delayDuration) {
}

FTransform APortal::GetSpawnTransform_Implementation() {
    return FTransform{};
}

void APortal::GetProgressionInfo_Implementation(FString& NewCheckpointName, FString& NewLevelPath) {
}

void APortal::EndPlay(const TEnumAsByte<EEndPlayReason::Type> EndPlayReason) {
}

void APortal::EnablePortalCollectibles_Implementation(bool Enabled) {
}

bool APortal::CheckForPatch_Implementation() {
    return false;
}

bool APortal::CanLoadLevel_Implementation() {
    return false;
}

void APortal::BeginPlay() {
}

void APortal::AddCamLocationSlave_Implementation(FTransform slaveLocation, float Duration) {
}

APortal::APortal() {
    this->PreloadActive = false;
    this->LightingManager = NULL;
    this->TransitionTrigger = CreateDefaultSubobject<UBoxComponent>(TEXT("TrasitionTrigger"));
	this->TransitionTrigger->SetupAttachment(RootComponent);
	TransitionTrigger->OnComponentBeginOverlap.AddDynamic(this, &APortal::OnOverlapBegin);
    this->TransitionTrigger->SetMobility(EComponentMobility::Movable);
    this->HandlePlayerSpawnDelay = 0.00f;
    this->rotationFixed = false;
    this->prepatchready = true;
    this->AnimPlayRate = 1.00f;
    this->SetLevelVisiblePercentage = 0.60f;
    this->PartnerPortal = NULL;
    this->PlayerChar = NULL;
    this->PlayerController = NULL;
    this->EnableTransport = true;
    this->TransportManager = NULL;
    this->CollectiblesEnabled = true;
    this->PreloadEnabled = true;
    this->ReadyToRemove = false;
    this->ShowDownloadMessage = false;
    this->DemoMode = false;
}

