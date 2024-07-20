#include "PhasmidCollisionStruct.h"

FPhasmidCollisionStruct::FPhasmidCollisionStruct() {
    this->Shape = ECollisionRegionShape::Sphere;
    this->CollisionFilter = ECollisionRegionFilter::OtherTeamOnly;
    this->bCollideWithOwner = false;
    this->OverrideCollisionAbility = NULL;
    this->bSkipDamageExecution = false;
    this->CollisionInterval = 0.00f;
    this->EndCollisionInterval = 0.00f;
    this->CollisionMagnitude = 0.00f;
    this->InitialLifeTime = 0.00f;
    this->bInteractWithWalls = false;
    this->bAttachToParent = false;
    this->LocationRule = EAttachmentRule::KeepRelative;
    this->RotationRule = EAttachmentRule::KeepRelative;
    this->ScaleRule = EAttachmentRule::KeepRelative;
}

