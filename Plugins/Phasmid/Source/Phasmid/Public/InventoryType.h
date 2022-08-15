// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/UserDefinedEnum.h"
#include "InventoryType.generated.h"

/**
 * 
 */
UCLASS()
class PHASMID_API UInventoryType : public UUserDefinedEnum
{
	GENERATED_BODY()




};


UENUM(BlueprintType)	
enum EInventoryType {
    EIT_None = 0,
    EIT_Treasure = 1,
    EIT_BlueGem = 2,
    EIT_RedGem = 3,
    EIT_GreenGem = 4,
    EIT_YellowGem = 5,
    EIT_PurpleGem = 6,
    EIT_S2RedGem = 7,
    EIT_S2GreenGem = 8,
    EIT_S2PurpleGem = 9,
    EIT_S2YellowGem = 10,
    EIT_S2MagentaGem = 11,
    EIT_S1FlightReward = 12,
    EIT_S2FlightReward = 13,
    EIT_TreasureEnd = 14,
    EIT_Egg = 15,
    EIT_Dragon = 16,
    EIT_Orb = 17,
    EIT_Life = 18,
    EIT_LifeOrb = 19,
    EIT_Health = 20,
    EIT_Checkpoint = 21,
    EIT_PushBlock = 22,
    EIT_S2GreenOrb = 23,
    EIT_S2SpiritParticle = 24,
    EIT_LevelVisit = 25,
    EIT_PortalExit = 26,
    EIT_LevelDiode = 27,
    EIT_Talisman = 28,
    EIT_S3Egg = 29,
    EIT_Climbing = 30,
    EIT_HeadBash = 31,
    EIT_Swimming = 32,
    EIT_Superflame = 33,
    EIT_TreasureSpent = 34,
    EIT_FlightResult = 35,
    EIT_SkillPoint = 36,
    EIT_Butterfly = 37,
    EIT_Difficulty = 38,
    EIT_LastLevelPlayed = 39,
    EIT_TimePlayed = 40,
    EIT_S2BlueButterfly = 41,
    EIT_S2Boss = 42,
    EIT_S1Boss = 43,
    EIT_S3Boss = 44,
    EIT_SparxPower_GemCollectRange = 45,
    EIT_SparxPower_GemFinder = 46,
    EIT_SparxPower_ExtraHP = 47,
    EIT_SparxPower_ChestBreaking = 48,
    EIT_ShowOrbs = 49,
    EIT_S3BonusEgg = 50,
	EIT_MAX = 51,
};