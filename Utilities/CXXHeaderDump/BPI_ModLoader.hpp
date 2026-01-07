#ifndef UE4SS_SDK_BPI_ModLoader_HPP
#define UE4SS_SDK_BPI_ModLoader_HPP

class IBPI_ModLoader_C : public IInterface
{

    void IChangeFlameColor(FLinearColor NewColor);
    void PrintString(FString In String, FLinearColor TextColor, float Duration);
}; // Size: 0x28

#endif
