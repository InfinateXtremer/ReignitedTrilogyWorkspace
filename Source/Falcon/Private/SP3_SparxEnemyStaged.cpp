#include "SP3_SparxEnemyStaged.h"

void ASP3_SparxEnemyStaged::SetStageByName(FName Name) {
}



float ASP3_SparxEnemyStaged::GetStageTime() const {
    return 0.0f;
}

FName ASP3_SparxEnemyStaged::GetStageName() const {
    return NAME_None;
}

ASP3_SparxEnemyStaged::ASP3_SparxEnemyStaged() {
    this->m_damageTime = 0.50f;
    this->m_deathTime = 1.00f;
}

