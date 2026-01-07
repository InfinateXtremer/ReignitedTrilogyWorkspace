#ifndef UE4SS_SDK_RealTarget_HPP
#define UE4SS_SDK_RealTarget_HPP

class ARealTarget_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x0320 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0328 (size: 0x8)
    class AActor* Waypoints1;                                                         // 0x0330 (size: 0x8)
    class AActor* Waypoints2;                                                         // 0x0338 (size: 0x8)
    class AActor* Waypoints3;                                                         // 0x0340 (size: 0x8)
    class AActor* Waypoints4;                                                         // 0x0348 (size: 0x8)
    float Time;                                                                       // 0x0350 (size: 0x4)
    class AActor* mantaRay;                                                           // 0x0358 (size: 0x8)
    float dist;                                                                       // 0x0360 (size: 0x4)
    class AActor* Waypoints5;                                                         // 0x0368 (size: 0x8)

    void UserConstructionScript();
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_RealTarget(int32 EntryPoint);
}; // Size: 0x370

#endif
