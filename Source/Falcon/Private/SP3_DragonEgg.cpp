#include "SP3_DragonEgg.h"
#include "Components/CapsuleComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/StaticMeshComponent.h"


ASP3_DragonEgg::ASP3_DragonEgg() {
    this->m_tReveal = 1.00f;
    this->m_tRemove = 1.00f;
    this->m_dataTable = NULL;
    this->m_autoShow = false;
    this->m_dmgHatch = false;
    this->Collision = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Collision"));
    this->egg = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("egg"));
    this->Dragon = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Dragon"));
    this->HornAcc = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("HornAcc"));
    this->TailAcc = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TailAcc"));
    this->HeadAcc = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("HeadAcc"));
    this->GlassesAcc = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("GlassesAcc"));
    this->Paired = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Paired"));
    this->HatchVFX = NULL;
    this->m_reqHatch = false;
    this->m_hatchRev = false;
    this->m_pairedMeshObj = NULL;
    this->m_pairedAnimObj = NULL;
    this->m_hatchBPObj = NULL;
}

