

#pragma once

#include "CoreMinimal.h"
#include "Engine/UserDefinedEnum.h"
#include "FalconLoadEnums.generated.h"

/**
 * 
 */
UCLASS()
class FALCON_API UFalconLoadEnums : public UUserDefinedEnum
{
	GENERATED_BODY()
	
	
	
	
};

UENUM()
namespace EFalconLoadScreen {
	enum Type {
		None = 0,
		GameOver = 1,
		NewGame1 = 2,
		NewGame2 = 3,
		NewGame3 = 4,
		LoadGame = 5,
		Respawn = 6,
		PortalEnter = 7,
		ReturnHome = 8,
		BalloonRide = 9,
		IntroGame3_1 = 10,
		IntroGame3_2 = 11,
		CrushDefeated = 12,
		GulpDefeated = 13,
		RiptoDefeated = 14,
	};
}

UENUM()
namespace EFalconLevelLoadable {
	enum Type {
		LevelCanLoad = 0,
		LevelNeedsPatch = 1,
		LevelNeedsChunk = 2,
	};
}
