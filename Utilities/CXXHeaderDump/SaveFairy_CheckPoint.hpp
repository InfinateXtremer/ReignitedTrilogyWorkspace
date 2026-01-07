#ifndef UE4SS_SDK_SaveFairy_CheckPoint_HPP
#define UE4SS_SDK_SaveFairy_CheckPoint_HPP

class ASaveFairy_CheckPoint_C : public AActor
{
    class UArrowComponent* Arrow;                                                     // 0x0318 (size: 0x8)
    class UTextRenderComponent* TextRender;                                           // 0x0320 (size: 0x8)
    class UChildActorComponent* ChildActor;                                           // 0x0328 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0330 (size: 0x8)

    void UserConstructionScript();
}; // Size: 0x338

#endif
