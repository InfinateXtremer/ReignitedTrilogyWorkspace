#ifndef UE4SS_SDK_SortActorArrayByDistance_HPP
#define UE4SS_SDK_SortActorArrayByDistance_HPP

class USortActorArrayByDistance_C : public UBlueprintFunctionLibrary
{

    void SortActorArrayByDistanceToTarget(TArray<class AActor*>& InputArray, class AActor* TargetActor, class UObject* __WorldContext, TArray<class AActor*>& OutputArray);
    void SortActorArrayByHorizontalDistanceToTarget(TArray<class AActor*>& InputArray, class AActor* TargetActor, class UObject* __WorldContext, TArray<class AActor*>& OutputArray);
}; // Size: 0x28

#endif
