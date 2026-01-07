#ifndef UE4SS_SDK_SimpleCamera_HPP
#define UE4SS_SDK_SimpleCamera_HPP

class ASimpleCamera_C : public AActor
{
    class UCameraComponent* Camera;                                                   // 0x0318 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0320 (size: 0x8)

    void UserConstructionScript();
}; // Size: 0x328

#endif
