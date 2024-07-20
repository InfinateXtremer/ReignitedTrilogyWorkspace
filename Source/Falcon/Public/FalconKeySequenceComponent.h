#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "InputCoreTypes.h"
#include "FalconKeySequenceComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FALCON_API UFalconKeySequenceComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UFalconKeySequenceComponent();
    UFUNCTION(BlueprintCallable)
    void DebugPrintCodes();
    
    UFUNCTION(BlueprintCallable)
    void ClearInput();
    
    UFUNCTION(BlueprintCallable)
    bool AddKeyAndCheckForMatch(const FKey& InKey, FString& sequenceName);
    
};

