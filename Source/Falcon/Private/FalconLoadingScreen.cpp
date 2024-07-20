#include "FalconLoadingScreen.h"
#include "Camera/CameraComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/StaticMeshComponent.h"

class USplineComponent;

void AFalconLoadingScreen::UpdateSpyroMeshPosition(USplineComponent* Spline, float Time) {
}

void AFalconLoadingScreen::StopStateMachine() {
}

void AFalconLoadingScreen::StartState(int32 StateIndex) {
}

void AFalconLoadingScreen::ShowLoadScreen(TEnumAsByte<EFalconLoadScreen::Type> screenType, float fadeTime) {
}

int32 AFalconLoadingScreen::RegisterState(FFalconLoadingScreenStateStart Start, FFalconLoadingScreenStateUpdate Update) {
    return 0;
}

void AFalconLoadingScreen::HideLoadScreen(float fadeTime) {
}

void AFalconLoadingScreen::EndState(int32 NextStateIndex) {
}

//void AFalconLoadingScreen::BP_OnShowLoadScreen(EFalconLoadScreen::Type screenType)
//{
//}
//
//void AFalconLoadingScreen::BP_OnHideLoadScreen()
//{
//}



AFalconLoadingScreen::AFalconLoadingScreen() {
    this->SceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
    this->StageMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Stage Mesh"));
    this->SpyroMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Spyro Mesh"));
    this->ElapsedTime = 0.00f;
    this->CurrentFadeTime = 0.00f;
    this->StateSelect = -1;
    this->InitialState = 0;
}

