

#include "Portal.h"





void APortal::UnTriggerPreload()
{
}

bool APortal::TriggerTransport(ACharacter * playerCharacter)
{
	return false;
}

void APortal::TriggerPreload()
{
}

void APortal::Tick(float DeltaSeconds)
{
}

void APortal::SwitchBeforeTransport()
{
}

void APortal::setPortalVisible(bool visible)
{
}

void APortal::setPortalEnabled(bool Enabled)
{
}

bool APortal::RemoveDownloadMessage()
{
	return false;
}

void APortal::ReceivePortalStart()
{
}

void APortal::OnPartnerPortalFound(APortal * FoundParter)
{
}

void APortal::OnOverlapBegin(UPrimitiveComponent * OverlappedComp, AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult)
{
}

void APortal::HandlePlayerSpawnAfterFade()
{
}

void APortal::HandlePlayerSpawn(float delayDuration)
{
}

FTransform APortal::GetSpawnTransform()
{
	return FTransform();
}

void APortal::GetProgressionInfo(FString & NewCheckpointName, FString & NewLevelPath)
{
}

void APortal::EndPlay(const TEnumAsByte<EEndPlayReason::Type> EndPlayReason)
{
}

void APortal::EnablePortalCollectibles(bool Enabled)
{
}

bool APortal::CheckForPatch()
{
	return false;
}

bool APortal::CanLoadLevel()
{
	return false;
}

void APortal::BeginPlay()
{
}

void APortal::AddCamLocationSlave(FTransform slaveLocation, float Duration)
{
}
