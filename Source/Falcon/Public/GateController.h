#pragma once
#include "CoreMinimal.h"
#include "Greeting.h"
#include "QuestController.h"
#include "GateController.generated.h"

class UPortalBlockerComponent;
class UPortalRequirementsComponent;
class UQuestActionsComponent;

UCLASS(Abstract, Blueprintable)
class FALCON_API AGateController : public AQuestController {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPortalRequirementsComponent* m_requirements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPortalBlockerComponent* m_blocker;
    
public:
    AGateController();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Open(UQuestActionsComponent* Actions);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOpen() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GreetPlayer(const FGreeting& Greeting, UQuestActionsComponent* Actions);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Closed(UQuestActionsComponent* Actions);
    
};

