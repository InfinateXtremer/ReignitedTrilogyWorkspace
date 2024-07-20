#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "QuestActionsComponent.generated.h"

class UQuestTask;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FALCON_API UQuestActionsComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UQuestTask* m_pendingTask;
    
public:
    UQuestActionsComponent();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBound() const;
    
    UFUNCTION(BlueprintCallable)
    void EndAction();
    
};

