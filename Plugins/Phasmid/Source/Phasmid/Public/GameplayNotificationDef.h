#pragma once
#include "CoreMinimal.h"
#include "ENotificationPriority.h"
#include "ENotificationType.h"
#include "GameplayNotificationDef.generated.h"

USTRUCT(BlueprintType)
struct FGameplayNotificationDef {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ENotificationPriority::Type> Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ENotificationType::Type> MyType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText NotificationText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AdditionalData;
    
    PHASMID_API FGameplayNotificationDef();
};

