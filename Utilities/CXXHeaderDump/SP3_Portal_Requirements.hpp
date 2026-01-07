#ifndef UE4SS_SDK_SP3_Portal_Requirements_HPP
#define UE4SS_SDK_SP3_Portal_Requirements_HPP

class ASP3_Portal_Requirements_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0320 (size: 0x8)
    TArray<class UStaticMesh*> Symbols;                                               // 0x0328 (size: 0x10)
    int32 Number;                                                                     // 0x0338 (size: 0x4)
    int32 #ofDigits;                                                                  // 0x033C (size: 0x4)
    TSoftObjectPtr<APortalTransporter_C> Portal;                                      // 0x0340 (size: 0x28)
    int32 Temp;                                                                       // 0x0368 (size: 0x4)
    class AQuestLevelActor* Qla;                                                      // 0x0370 (size: 0x8)

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_SP3_Portal_Requirements(int32 EntryPoint);
}; // Size: 0x378

#endif
