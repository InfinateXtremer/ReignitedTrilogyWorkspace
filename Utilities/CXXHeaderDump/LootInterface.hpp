#ifndef UE4SS_SDK_LootInterface_HPP
#define UE4SS_SDK_LootInterface_HPP

class ILootInterface_C : public IInterface
{

    void ISparxCanBreakTreasureChest(bool& SparxCanBreak);
    void ILootIsOnGround(bool& LootIsOnGround);
    void ILootGetHasBeenCollected(bool& HasBeenCollected);
    void ILootGetForceAutoCollect(bool& ForceAutoCollect);
    void ILootSetForceAutoCollect(bool ForceAutoCollect);
}; // Size: 0x28

#endif
