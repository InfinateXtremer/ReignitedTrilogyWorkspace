#include "GemFinderAsyncNode.h"
#include "Templates/SubclassOf.h"

class AActor;
class UGemFinderAsyncNode;
class UObject;

void UGemFinderAsyncNode::UpdateSearch() {
}

void UGemFinderAsyncNode::BuildGraph() {
}

void UGemFinderAsyncNode::BuildGemHeap() {
}

UGemFinderAsyncNode* UGemFinderAsyncNode::BP_FindClosestActorWithGemAsync(const UObject* WorldContextObject, AActor* Target, TArray<TSubclassOf<AActor>> ActorClasses, UClass* GemClass, int32 MaxDiscoveryCount, int32 MaxCheckCount) {
    return NULL;
}

UGemFinderAsyncNode::UGemFinderAsyncNode() {
}

