#include "EncounterInitialOrders.h"

FEncounterInitialOrders::FEncounterInitialOrders() {
    this->Combatant = NULL;
    this->Orders = EInitialOrderType::EIO_Idle;
    this->TargetActor = NULL;
}

