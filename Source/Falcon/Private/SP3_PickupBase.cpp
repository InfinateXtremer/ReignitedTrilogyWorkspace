#include "SP3_PickupBase.h"

class AActor;
class ASP3_PickupBase;

bool ASP3_PickupBase::Pickup(AActor* sender) {
    return false;
}


FName ASP3_PickupBase::GetType() const {
    return NAME_None;
}

ASP3_PickupBase* ASP3_PickupBase::FindPickup(const AActor* sender, const FVector& posSrcWS, float distMax, FName Type) {
    return NULL;
}

ASP3_PickupBase::ASP3_PickupBase() {
}

