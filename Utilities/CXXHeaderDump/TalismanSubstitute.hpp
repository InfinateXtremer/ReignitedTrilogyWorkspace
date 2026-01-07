#ifndef UE4SS_SDK_TalismanSubstitute_HPP
#define UE4SS_SDK_TalismanSubstitute_HPP

class ATalismanSubstitute_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0320 (size: 0x8)
    FPhasmidObjectSaveDataList save data list;                                        // 0x0328 (size: 0x10)

    void Get Is Visible On Mini Map(bool& return);
    void UserConstructionScript();
    void Set Visible On Mini Map();
    void ExecuteUbergraph_TalismanSubstitute(int32 EntryPoint);
}; // Size: 0x338

#endif
