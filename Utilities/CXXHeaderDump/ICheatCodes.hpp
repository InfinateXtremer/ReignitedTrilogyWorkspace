#ifndef UE4SS_SDK_ICheatCodes_HPP
#define UE4SS_SDK_ICheatCodes_HPP

class IICheatCodes_C : public IInterface
{

    void ICheatCodeNotifySpyro(FString CheatStringKey);
    void ICheatCodeSetSpyroSkin(int32 SpyroSkinIndex);
    void ICheatCodeSetSpyroTintColor();
    void ICheatCodeMiniHeadMode(bool MiniHeadEnabled);
    void ICheatCodeSquidSkateboard(bool SquidSkateboardEnabled);
    void ICheatCodeMiniWingsMode(bool MiniWingsEnabled);
    void ICheatCodeFlatSpyroMode(bool FlatSpyroEnabled);
    void ICheatCodeBigHeadMode(bool BigHeadEnabled);
}; // Size: 0x28

#endif
