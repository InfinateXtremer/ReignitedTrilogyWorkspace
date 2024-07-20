#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ENotificationPriority.h"
#include "ENotificationType.h"
#include "GameplayNotificationDef.h"
#include "GameplayNotificationManager.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UGameplayNotificationManager : public UUserWidget {
    GENERATED_BODY()
public:
    UGameplayNotificationManager();
protected:
    UFUNCTION(BlueprintCallable)
    void RemoveNotification(const FGameplayNotificationDef& Def);
    
    UFUNCTION(BlueprintCallable)
    void QueueNotification(const FGameplayNotificationDef& Def);
    
    UFUNCTION(BlueprintCallable)
    bool HasNextNotification();
    
    UFUNCTION(BlueprintCallable)
    int32 GetQueuedNotificationCount();
    
    UFUNCTION(BlueprintCallable)
    void GetNextNotification(FGameplayNotificationDef& Def);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool compareNotificationDefs(const FGameplayNotificationDef& A, const FGameplayNotificationDef& B);
    
//protected:
//    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
//    void AddAndCreateNotification(TEnumAsByte<ENotificationPriority::Type> MyPriority, TEnumAsByte<ENotificationType::Type> MyType, const FText& NotificationText, int32 MyAdditionalInfo, FGameplayNotificationDef& Def, int32& multiIndex);
    
};

