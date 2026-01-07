#ifndef UE4SS_SDK_Trolly_Fail_Boxes_HPP
#define UE4SS_SDK_Trolly_Fail_Boxes_HPP

class ATrolly_Fail_Boxes_C : public AActor
{
    class UParticleSystemComponent* FX_PS_BigBrownBox_Explosion;                      // 0x0318 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0320 (size: 0x8)
    class UStaticMeshComponent* Art;                                                  // 0x0328 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0330 (size: 0x8)
    bool Destroyable;                                                                 // 0x0338 (size: 0x1)

    void UserConstructionScript();
}; // Size: 0x339

#endif
