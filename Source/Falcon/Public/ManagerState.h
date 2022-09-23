

#pragma once

#include "CoreMinimal.h"
#include "Engine/UserDefinedEnum.h"
#include "ManagerState.generated.h"

/**
 * 
 */
UCLASS()
class FALCON_API UManagerStateEnum : public UUserDefinedEnum
{
	GENERATED_BODY()
	
	
	
	
};

UENUM()
enum EManagerState {
	EMS_IDLE = 0,
	EMS_UNLOADING = 1,
	EMS_LOADING = 2,
	EMS_WAITING = 3,
	EMS_NOTIFY = 4,
	EMS_NOTIFY_DELAY = 5,
	EMS_MAX = 6,
};