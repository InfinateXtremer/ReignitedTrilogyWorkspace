#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "GemFinderOutputPinDelegate.h"
#include "Templates/SubclassOf.h"
#include "GemFinderAsyncNode.generated.h"

class AActor;
class UGemFinderAsyncNode;
class UObject;

UCLASS(Blueprintable)
class UGemFinderAsyncNode : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGemFinderOutputPin Success;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGemFinderOutputPin Failed;
    
    UGemFinderAsyncNode();
private:
    UFUNCTION(BlueprintCallable)
    void UpdateSearch();
    
    UFUNCTION(BlueprintCallable)
    void BuildGraph();
    
    UFUNCTION(BlueprintCallable)
    void BuildGemHeap();
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UGemFinderAsyncNode* BP_FindClosestActorWithGemAsync(const UObject* WorldContextObject, AActor* Target, TArray<TSubclassOf<AActor>> ActorClasses, UClass* GemClass, int32 MaxDiscoveryCount, int32 MaxCheckCount);
    
};

