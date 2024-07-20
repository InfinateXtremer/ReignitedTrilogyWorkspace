#pragma once
#include "CoreMinimal.h"
#include "EFalconLoadScreen.generated.h"

UENUM(BlueprintType)
namespace EFalconLoadScreen {
    enum Type {
        None,
        GameOver,
        NewGame1,
        NewGame2,
        NewGame3,
        LoadGame,
        Respawn,
        PortalEnter,
        ReturnHome,
        BalloonRide,
        IntroGame3_1,
        IntroGame3_2,
        CrushDefeated,
        GulpDefeated,
        RiptoDefeated,
    };
}

