#pragma once
#include "CoreMinimal.h"
#include "EFalconScreenType.generated.h"

UENUM(BlueprintType)
enum class EFalconScreenType : uint8 {
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
    EFST_FlightSummary,
    EFST_MAX UMETA(Hidden),
};

