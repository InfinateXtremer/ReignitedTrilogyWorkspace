#ifndef UE4SS_SDK_TransportFunctions_HPP
#define UE4SS_SDK_TransportFunctions_HPP

class UTransportFunctions_C : public UBlueprintFunctionLibrary
{

    void SetActorRotationOnSplineAtTimeline(class UTimelineComponent* Timeline, class USplineComponent* Spline, class AActor* Actor, FVector RotationMultiplier, class UObject* __WorldContext);
    void SetActorLocationOnSplineAtTimeline(class UTimelineComponent* Timeline, class USplineComponent* Spline, class AActor* Actor, FRotator AltRotation, class UObject* __WorldContext);
    void SetActorLocationAndRotationOnSplineAtDistance(class USplineComponent* Spline, class AActor* Actor, FRotator AltRotation, float SplineDistance, class UObject* __WorldContext);
    void GetLevelPathFromTableRow(FLevelStreamingData StreamingTableRow, class UObject* __WorldContext, FName& LevelPath);
    void PortalConvertTransforms(class AActor* CurrentPortal, class AActor* targetPortal, FTransform IncomingTransform, class UObject* __WorldContext, FTransform& OutputTransform);
    void IsPlayerCharacter(class AActor* Actor, class UObject* __WorldContext, class ACharacter*& playerCharacter, bool& IsPlayer);
    void PortalConvertLocations(class AActor* CurrentPortal, class AActor* targetPortal, FVector CurrentLocation, class UObject* __WorldContext, FVector& NewLocation);
    void PortalConvertDirections(class AActor* CurrentPortal, class AActor* targetPortal, FVector CurrentDirection, class UObject* __WorldContext, FVector& NewDirection);
    void PortalConvertRotations(class AActor* CurrentPortal, class AActor* targetPortal, FRotator CurrentRotation, class UObject* __WorldContext, FRotator& NewRotation);
    void ActorBehindPortal(class AActor* Actor, class AActor* Portal, class UObject* __WorldContext, bool& ActorIsBehindPortal);
    void SetActorLocationAndRotationOnSplineAtTimeline(class UTimelineComponent* Timeline, class USplineComponent* Spline, class AActor* Actor, FRotator AltRotation, class UObject* __WorldContext);
    void FindGlobalTransporter(class UObject* __WorldContext, class AGlobalTransporter_C*& GlobalTransporter);
    void FindTransportActor(FName ObjectName, class UObject* __WorldContext, class ABasePortal_C*& FoundActor);
}; // Size: 0x28

#endif
