#ifndef UE4SS_SDK_HasLocation_HPP
#define UE4SS_SDK_HasLocation_HPP

class IHasLocation_C : public IInterface
{

    void SetLocation(FVector Location, FVector& Adjusted Location);
    void GetLocation(FVector& Location);
}; // Size: 0x28

#endif
