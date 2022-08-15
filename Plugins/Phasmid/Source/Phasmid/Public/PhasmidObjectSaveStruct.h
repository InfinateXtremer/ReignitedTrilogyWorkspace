

#pragma once

#include "CoreMinimal.h"
#include "Engine/UserDefinedStruct.h"
#include "InventoryType.h"
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
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString paramName;                                                                // 0x0000 (size: 0x10)
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float paramValue;                                                                 // 0x0010 (size: 0x4)

};



USTRUCT(BlueprintType)
struct FPhasmidSaveParamList
{
	GENERATED_USTRUCT_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FPhasmidSaveParam> saveParams;                                             // 0x0000 (size: 0x10)

};


USTRUCT(BlueprintType)
struct FPhasmidInventoryData
{
	GENERATED_USTRUCT_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EInventoryType> ItemType;                                                          // 0x0000 (size: 0x1)
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool collected;                                                                   // 0x0001 (size: 0x1)

}; 

USTRUCT(BlueprintType)
struct FPhasmidObjectSaveData
{
	GENERATED_USTRUCT_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FPhasmidInventoryData itemData;                                                   // 0x0000 (size: 0x2)
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FPhasmidSaveParamList itemParamList;                                              // 0x0008 (size: 0x10)

};


USTRUCT(BlueprintType)
struct FPhasmidObjectSaveDataList
{
	GENERATED_USTRUCT_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<FPhasmidObjectSaveData> saveDataList;                                      // 0x0000 (size: 0x10)

};

USTRUCT(BlueprintType)
struct FGemHashArray
{
	GENERATED_USTRUCT_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<int32> GemHashArray;                                                       // 0x0000 (size: 0x10)

};


USTRUCT(BlueprintType)
struct FPhasmidGameSaveObjectDataMap
{
	GENERATED_USTRUCT_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FString, FPhasmidObjectSaveDataList> objectDataMap;              // 0x0000 (size: 0x50)
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<TEnumAsByte<EInventoryType>, FGemHashArray> gemCollectionMap;                 // 0x0050 (size: 0x50)
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<int32, TEnumAsByte<EInventoryType>> gemHashTypeMap;                                       // 0x00A0 (size: 0x50)

};

USTRUCT(BlueprintType)
struct FPhasmidGameSaveObjectId
{
	GENERATED_USTRUCT_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString LevelName;                                                                // 0x0000 (size: 0x10)
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString ObjectName;                                                               // 0x0010 (size: 0x10)

};


USTRUCT(BlueprintType)
struct FPhasmidGameSaveObjectData
{
	GENERATED_USTRUCT_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FPhasmidObjectSaveDataList saveDataList;                                          // 0x0000 (size: 0x10)
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FPhasmidGameSaveObjectId objectId;                                                // 0x0010 (size: 0x20)

};