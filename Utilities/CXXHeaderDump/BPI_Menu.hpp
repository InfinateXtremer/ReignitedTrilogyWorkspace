#ifndef UE4SS_SDK_BPI_Menu_HPP
#define UE4SS_SDK_BPI_Menu_HPP

class IBPI_Menu_C : public IInterface
{

    void ISwitchedMenu(TEnumAsByte<EMenuState::Type> EMenuState);
}; // Size: 0x28

#endif
