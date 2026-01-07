#ifndef UE4SS_SDK_CNS2116_KangaTheGemcutter_HPP
#define UE4SS_SDK_CNS2116_KangaTheGemcutter_HPP

class ACNS2116_KangaTheGemcutter_C : public ABP_Base_Friendly_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0900 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0908 (size: 0x8)
    class UStaticMeshComponent* LightCone;                                            // 0x0910 (size: 0x8)
    class UTextRenderComponent* TextRender_0;                                         // 0x0918 (size: 0x8)
    class AActor* Boulder;                                                            // 0x0920 (size: 0x8)
    class AActor* Boulder IGC;                                                        // 0x0928 (size: 0x8)

    void UserConstructionScript();
    void MissionReset(class AActor* RequestActor);
    void MissionSetup(bool Active);
    void MissionSuspend(bool Suspend);
    void MissionRestore();
    void ReceiveBeginPlay();
    void MissionForceStart(class AActor* RequestingActor, float RequestValue);
    void MissionEnd(bool Success, bool LevelEnd);
    void ReceiveTick(float DeltaSeconds);
    void MissionStart(class AActor* MasterActor, int32 Value);
    void MissionAlert(class AActor* Actor, int32 Value);
    void MissionReporter(class AActor* Reporter, bool Remove);
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void ExecuteUbergraph_CNS2116_KangaTheGemcutter(int32 EntryPoint);
}; // Size: 0x930

#endif
