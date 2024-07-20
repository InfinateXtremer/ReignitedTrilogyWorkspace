#include "SP3CharAbilParamsMeleeAttack.h"

FSP3CharAbilParamsMeleeAttack::FSP3CharAbilParamsMeleeAttack() {
    this->m_holdMax = 0.00f;
    this->m_dmgAmount = 0.00f;
    this->m_dmgType = NULL;
    this->m_dmgEffect = NULL;
    this->m_moveScalar = 0.00f;
    this->m_turnScalar = 0.00f;
    this->m_allowAir = false;
    this->m_allowTurn = false;
    this->m_deflectEnable = false;
    this->m_jumpCancel = 0.00f;
    this->m_meleeCancel = 0.00f;
    this->m_resumeMoveState = 0;
}

