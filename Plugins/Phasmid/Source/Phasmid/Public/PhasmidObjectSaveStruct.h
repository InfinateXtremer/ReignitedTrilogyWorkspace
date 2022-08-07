

#pragma once

#include "CoreMinimal.h"
#include "Engine/UserDefinedStruct.h"
#include "EInventoryType.h"
#include "PhasmidObjectSaveStruct.generated.h"

/**
 * 
 */
UCLASS()
class PHASMID_API UPhasmidObjectSaveUserStruct : public UUserDefinedStruct
{
	GENERATED_BODY()
	
	
	
	
};

USTRUCT(BlueprintType)
struct FPhasmidSaveParam
{
	GENERATED_USTRUCT_BODY()

public:
    FString paramName;                                                                // 0x0000 (size: 0x10)
    float paramValue;                                                                 // 0x0010 (size: 0x4)

};



USTRUCT(BlueprintType)
struct FPhasmidSaveParamList
{
	GENERATED_USTRUCT_BODY()

public:
    TArray<FPhasmidSaveParam> saveParams;                                             // 0x0000 (size: 0x10)

};


USTRUCT(BlueprintType)
struct FPhasmidInventoryData
{
	GENERATED_USTRUCT_BODY()

public:
    EInventoryType ItemType;                                                          // 0x0000 (size: 0x1)
    bool collected;                                                                   // 0x0001 (size: 0x1)

}; 

USTRUCT(BlueprintType)
struct FPhasmidObjectSaveData
{
	GENERATED_USTRUCT_BODY()

public:
    FPhasmidInventoryData itemData;                                                   // 0x0000 (size: 0x2)
    FPhasmidSaveParamList itemParamList;                                              // 0x0008 (size: 0x10)

};


USTRUCT(BlueprintType)
struct FPhasmidObjectSaveDataList
{
	GENERATED_USTRUCT_BODY()

public:
    TArray<FPhasmidObjectSaveData> saveDataList;                                      // 0x0000 (size: 0x10)

};

USTRUCT(BlueprintType)
struct FGemHashArray
{
	GENERATED_USTRUCT_BODY()

public:
    TArray<int32> GemHashArray;                                                       // 0x0000 (size: 0x10)

};


USTRUCT(BlueprintType)
struct FPhasmidGameSaveObjectDataMap
{
	GENERATED_USTRUCT_BODY()

public:
    TMap<class FString, FPhasmidObjectSaveDataList> objectDataMap;              // 0x0000 (size: 0x50)
    TMap<EInventoryType, FGemHashArray> gemCollectionMap;                 // 0x0050 (size: 0x50)
    TMap<int32, EInventoryType> gemHashTypeMap;                                       // 0x00A0 (size: 0x50)

};

USTRUCT(BlueprintType)
struct FPhasmidGameSaveObjectId
{
	GENERATED_USTRUCT_BODY()

public:
    FString LevelName;                                                                // 0x0000 (size: 0x10)
    FString ObjectName;                                                               // 0x0010 (size: 0x10)

};


USTRUCT(BlueprintType)
struct FPhasmidGameSaveObjectData
{
	GENERATED_USTRUCT_BODY()

public:
    FPhasmidObjectSaveDataList saveDataList;                                          // 0x0000 (size: 0x10)
    FPhasmidGameSaveObjectId objectId;                                                // 0x0010 (size: 0x20)

};