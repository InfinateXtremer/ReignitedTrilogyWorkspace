#ifndef UE4SS_SDK_CNS2155_TheProfessor_HPP
#define UE4SS_SDK_CNS2155_TheProfessor_HPP

class ACNS2155_TheProfessor_C : public ABP_Base_Friendly_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0900 (size: 0x8)
    class UStaticMeshComponent* Notepad;                                              // 0x0908 (size: 0x8)
    class UStaticMeshComponent* Pencil;                                               // 0x0910 (size: 0x8)
    bool TriggerBox;                                                                  // 0x0918 (size: 0x1)

    int32 getObjectSaveData(FPhasmidObjectSaveDataList& dataList);
    void UserConstructionScript();
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void MissionReporter(class AActor* Reporter, bool Remove);
    void MissionStart(class AActor* MasterActor, int32 Value);
    void MissionEnd(bool Success, bool LevelEnd);
    void MissionForceStart(class AActor* RequestingActor, float RequestValue);
    void MissionReset(class AActor* RequestActor);
    void MissionSetup(bool Active);
    void MissionSuspend(bool Suspend);
    void MissionRestore();
    void MissionAlert(class AActor* Actor, int32 Value);
    void ExecuteUbergraph_CNS2155_TheProfessor(int32 EntryPoint);
}; // Size: 0x919

#endif
