#ifndef UE4SS_SDK_LevelInfoInterface_HPP
#define UE4SS_SDK_LevelInfoInterface_HPP

class ILevelInfoInterface_C : public IInterface
{

    void get completion pct for level(FString level path, float& pct complete);
    void get level visited(FString level path, bool& visited);
}; // Size: 0x28

#endif
