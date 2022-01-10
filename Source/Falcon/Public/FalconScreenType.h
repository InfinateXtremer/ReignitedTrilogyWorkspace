

#pragma once

#include "CoreMinimal.h"
#include "Engine/UserDefinedEnum.h"
#include "FalconScreenType.generated.h"

/**
 * 
 */
UCLASS()
class FALCON_API UFalconScreenType : public UUserDefinedEnum
{
	GENERATED_BODY()
	
	
	
	
};

UENUM()
enum EFalconScreenType
{
	EFST_None,
	EFST_MainMenu,
	EFST_Pause,
	EFST_Inventory,
	EFST_Title,
	EFST_Save,
	EFST_Main,
	EFST_Controller,
	EFST_HudTimer,
	EFST_HudCounter,
	EFST_Footer,
	EFST_Question,
	EFST_InventoryTotals,
	EFST_Reticle,
	EFST_MiniMap,
	EFST_SpeedRunTimer,
	EFST_Dialog,
	EFST_DialogQuestion,
	EFST_DialogDifficulty,
	EFST_DialogTreasure,
	EFST_HudGate,
	EFST_BossBar,
	EFST_LevelKey,
	EFST_OrbCollected,
	EFST_FlightScreen,
	EFST_FlightSummary
};