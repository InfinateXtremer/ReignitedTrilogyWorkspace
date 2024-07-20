#pragma once
#include "CoreMinimal.h"
#include "EFlightLevelTargetType.generated.h"

UENUM(BlueprintType)
enum class EFlightLevelTargetType : uint8 {
    EFLT_None,
    EFLT_Barrel,
    EFLT_Ring,
    EFLT_Plane,
    EFLT_Arch,
    EFLT_Chest,
    EFLT_Car,
    EFLT_Boat,
    EFLT_Light,
    EFLT_Capybara,
    EFLT_EskimoSnowmobile,
    EFLT_EskimoParaglider,
    EFLT_Skater,
    EFLT_Walrus,
    EFLT_Pigeon,
    EFLT_Riptoc,
    EFLT_Ram,
    EFLT_Biker,
    EFLT_Vulture,
    EFLT_Serpent,
    EFLT_AllInOne,
    EFLT_Orb,
    EFLT_Copter,
    EFLT_Arch209,
    EFLT_Arch220,
    EFLT_Arch221,
    EFLT_Boat209,
    EFLT_Light129,
    EFLT_Jumpers,
    EFLT_Dandelion307,
    EFLT_Spider307,
    EFLT_Butterfly307,
    EFLT_Cow316,
    EFLT_Mower316,
    EFLT_Plane316,
    EFLT_HoneyComb325,
    EFLT_Beehive325,
    EFLT_Bee325,
    EFLT_Boat325,
    EFLT_Seagull334,
    EFLT_Lobster334,
    EFLT_Gate334,
    EFLT_Sardine334,
    EFLT_MAX UMETA(Hidden),
};
