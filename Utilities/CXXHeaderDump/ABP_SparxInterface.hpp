#ifndef UE4SS_SDK_ABP_SparxInterface_HPP
#define UE4SS_SDK_ABP_SparxInterface_HPP

class IABP_SparxInterface_C : public IInterface
{

    void INotifySparxHealthStateChanged(int32 NewHealth);
    void ISetSparxMoveToDirection(FVector2D MoveToDirection);
    void INotifySparxStateChanged(TEnumAsByte<ESparxState::Type> NewSparxState);
}; // Size: 0x28

#endif
