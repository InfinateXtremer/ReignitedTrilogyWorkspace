

#pragma once

#include "CoreMinimal.h"
#include "Engine/UserDefinedStruct.h"
#include "QuestStructs.generated.h"

/**
 * 
 */
UCLASS()
class FALCON_API UQuestStructs : public UUserDefinedStruct
{
	GENERATED_BODY()
	
	
	
	
};

//USTRUCT(BlueprintType)
//struct FNameTable
//{
//	GENERATED_USTRUCT_BODY()
//
//public:
//
//	TArray<FString> m_names;                                                          // 0x0000 (size: 0x10)
//	TArray<int32> m_alpha;                                                            // 0x0010 (size: 0x10)
//
//}; // Size: 0x20
//
//USTRUCT(BlueprintType)
//struct FQuestNameTable
//{
//	GENERATED_USTRUCT_BODY()
//
//public:
//
//	FNameTable m_names;                                                               // 0x0000 (size: 0x20)
//
//}; // Size: 0x20
//
//USTRUCT(BlueprintType)
//struct FQuestSavable
//{
//	GENERATED_USTRUCT_BODY()
//
//public:
//
//	int32 namePart;                                                                   // 0x0000 (size: 0x4)
//	int32 valPart;                                                                    // 0x0004 (size: 0x4)
//
//}; // Size: 0x8
//
//USTRUCT(BlueprintType)
//struct FQuestSavedBoard
//{
//	GENERATED_USTRUCT_BODY()
//
//public:
//
//	TMap<FQuestSavable, FQuestSavable> keyValues;                         // 0x0000 (size: 0x50)
//
//}; // Size: 0x50
//
//USTRUCT(BlueprintType)
//struct FQuestSaveData
//{
//	GENERATED_USTRUCT_BODY()
//
//public:
//
//	FQuestNameTable names;                                                            // 0x0000 (size: 0x20)
//	TMap<FQuestSavable, FQuestSavedBoard> boards;                         // 0x0020 (size: 0x50)
//
//};