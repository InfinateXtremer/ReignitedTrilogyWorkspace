#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ActionsList.h"
#include "QuestCustomAdjust.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FALCON_API UQuestCustomAdjust : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FActionsList> Adjusts;
    
    UQuestCustomAdjust();
    UFUNCTION(BlueprintCallable)
    void SetIndex(int32 adjustIndex, int32 actionIndex);
    
};

