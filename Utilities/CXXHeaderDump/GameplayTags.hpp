#ifndef UE4SS_SDK_GameplayTags_HPP
#define UE4SS_SDK_GameplayTags_HPP

#include "GameplayTags_enums.hpp"

struct FGameplayTag
{
    FName TagName;                                                                    // 0x0000 (size: 0x8)

}; // Size: 0x8

struct FGameplayTagCategoryRemap
{
    FString BaseCategory;                                                             // 0x0000 (size: 0x10)
    TArray<FString> RemapCategories;                                                  // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FGameplayTagContainer
{
    TArray<FGameplayTag> GameplayTags;                                                // 0x0000 (size: 0x10)
    TArray<FGameplayTag> ParentTags;                                                  // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FGameplayTagCreationWidgetHelper
{
}; // Size: 0x1

struct FGameplayTagNode
{
}; // Size: 0x50

struct FGameplayTagQuery
{
    int32 TokenStreamVersion;                                                         // 0x0000 (size: 0x4)
    TArray<FGameplayTag> TagDictionary;                                               // 0x0008 (size: 0x10)
    TArray<uint8> QueryTokenStream;                                                   // 0x0018 (size: 0x10)
    FString UserDescription;                                                          // 0x0028 (size: 0x10)
    FString AutoDescription;                                                          // 0x0038 (size: 0x10)

}; // Size: 0x48

struct FGameplayTagRedirect
{
    FName OldTagName;                                                                 // 0x0000 (size: 0x8)
    FName NewTagName;                                                                 // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FGameplayTagReferenceHelper
{
}; // Size: 0x40

struct FGameplayTagSource
{
    FName SourceName;                                                                 // 0x0000 (size: 0x8)
    EGameplayTagSourceType SourceType;                                                // 0x0008 (size: 0x1)
    class UGameplayTagsList* SourceTagList;                                           // 0x0010 (size: 0x8)

}; // Size: 0x18

struct FGameplayTagTableRow : public FTableRowBase
{
    FName Tag;                                                                        // 0x0008 (size: 0x8)
    FString DevComment;                                                               // 0x0010 (size: 0x10)

}; // Size: 0x20

class IGameplayTagAssetInterface : public IInterface
{

    bool HasMatchingGameplayTag(FGameplayTag TagToCheck);
    bool HasAnyMatchingGameplayTags(const FGameplayTagContainer& TagContainer);
    bool HasAllMatchingGameplayTags(const FGameplayTagContainer& TagContainer);
    void GetOwnedGameplayTags(FGameplayTagContainer& TagContainer);
}; // Size: 0x28

class UBlueprintGameplayTagLibrary : public UBlueprintFunctionLibrary
{

    bool RemoveGameplayTag(FGameplayTagContainer& TagContainer, FGameplayTag Tag);
    bool NotEqual_TagTag(FGameplayTag A, FString B);
    bool NotEqual_TagContainerTagContainer(FGameplayTagContainer A, FString B);
    bool NotEqual_GameplayTagContainer(const FGameplayTagContainer& A, const FGameplayTagContainer& B);
    bool NotEqual_GameplayTag(FGameplayTag A, FGameplayTag B);
    bool MatchesTag(FGameplayTag TagOne, FGameplayTag TagTwo, bool bExactMatch);
    bool MatchesAnyTags(FGameplayTag TagOne, const FGameplayTagContainer& OtherContainer, bool bExactMatch);
    FGameplayTagContainer MakeLiteralGameplayTagContainer(FGameplayTagContainer Value);
    FGameplayTag MakeLiteralGameplayTag(FGameplayTag Value);
    FGameplayTagQuery MakeGameplayTagQuery(FGameplayTagQuery TagQuery);
    FGameplayTagContainer MakeGameplayTagContainerFromTag(FGameplayTag SingleTag);
    FGameplayTagContainer MakeGameplayTagContainerFromArray(const TArray<FGameplayTag>& GameplayTags);
    bool IsGameplayTagValid(FGameplayTag GameplayTag);
    bool HasTag(const FGameplayTagContainer& TagContainer, FGameplayTag Tag, bool bExactMatch);
    bool HasAnyTags(const FGameplayTagContainer& TagContainer, const FGameplayTagContainer& OtherContainer, bool bExactMatch);
    bool HasAllTags(const FGameplayTagContainer& TagContainer, const FGameplayTagContainer& OtherContainer, bool bExactMatch);
    bool HasAllMatchingGameplayTags(TScriptInterface<class IGameplayTagAssetInterface> TagContainerInterface, const FGameplayTagContainer& OtherContainer);
    FName GetTagName(const FGameplayTag& GameplayTag);
    int32 GetNumGameplayTagsInContainer(const FGameplayTagContainer& TagContainer);
    FString GetDebugStringFromGameplayTagContainer(const FGameplayTagContainer& TagContainer);
    FString GetDebugStringFromGameplayTag(FGameplayTag GameplayTag);
    void GetAllActorsOfClassMatchingTagQuery(class UObject* WorldContextObject, TSubclassOf<class AActor> ActorClass, const FGameplayTagQuery& GameplayTagQuery, TArray<class AActor*>& OutActors);
    bool EqualEqual_GameplayTagContainer(const FGameplayTagContainer& A, const FGameplayTagContainer& B);
    bool EqualEqual_GameplayTag(FGameplayTag A, FGameplayTag B);
    bool DoesTagAssetInterfaceHaveTag(TScriptInterface<class IGameplayTagAssetInterface> TagContainerInterface, FGameplayTag Tag);
    bool DoesContainerMatchTagQuery(const FGameplayTagContainer& TagContainer, const FGameplayTagQuery& TagQuery);
    void BreakGameplayTagContainer(const FGameplayTagContainer& GameplayTagContainer, TArray<FGameplayTag>& GameplayTags);
    void AppendGameplayTagContainers(FGameplayTagContainer& InOutTagContainer, const FGameplayTagContainer& InTagContainer);
    void AddGameplayTag(FGameplayTagContainer& TagContainer, FGameplayTag Tag);
}; // Size: 0x28

class UEditableGameplayTagQuery : public UObject
{
    FString UserDescription;                                                          // 0x0028 (size: 0x10)
    class UEditableGameplayTagQueryExpression* RootExpression;                        // 0x0048 (size: 0x8)
    FGameplayTagQuery TagQueryExportText_Helper;                                      // 0x0050 (size: 0x48)

}; // Size: 0x98

class UEditableGameplayTagQueryExpression : public UObject
{
}; // Size: 0x28

class UEditableGameplayTagQueryExpression_AllExprMatch : public UEditableGameplayTagQueryExpression
{
    TArray<class UEditableGameplayTagQueryExpression*> Expressions;                   // 0x0028 (size: 0x10)

}; // Size: 0x38

class UEditableGameplayTagQueryExpression_AllTagsMatch : public UEditableGameplayTagQueryExpression
{
    FGameplayTagContainer Tags;                                                       // 0x0028 (size: 0x20)

}; // Size: 0x48

class UEditableGameplayTagQueryExpression_AnyExprMatch : public UEditableGameplayTagQueryExpression
{
    TArray<class UEditableGameplayTagQueryExpression*> Expressions;                   // 0x0028 (size: 0x10)

}; // Size: 0x38

class UEditableGameplayTagQueryExpression_AnyTagsMatch : public UEditableGameplayTagQueryExpression
{
    FGameplayTagContainer Tags;                                                       // 0x0028 (size: 0x20)

}; // Size: 0x48

class UEditableGameplayTagQueryExpression_NoExprMatch : public UEditableGameplayTagQueryExpression
{
    TArray<class UEditableGameplayTagQueryExpression*> Expressions;                   // 0x0028 (size: 0x10)

}; // Size: 0x38

class UEditableGameplayTagQueryExpression_NoTagsMatch : public UEditableGameplayTagQueryExpression
{
    FGameplayTagContainer Tags;                                                       // 0x0028 (size: 0x20)

}; // Size: 0x48

class UGameplayTagsDeveloperSettings : public UObject
{
    FString DeveloperConfigName;                                                      // 0x0028 (size: 0x10)

}; // Size: 0x38

class UGameplayTagsList : public UObject
{
    FString ConfigFileName;                                                           // 0x0028 (size: 0x10)
    TArray<FGameplayTagTableRow> GameplayTagList;                                     // 0x0038 (size: 0x10)

}; // Size: 0x48

class UGameplayTagsManager : public UObject
{
    TArray<FGameplayTagSource> TagSources;                                            // 0x00A8 (size: 0x10)
    TArray<class UDataTable*> GameplayTagTables;                                      // 0x0120 (size: 0x10)

}; // Size: 0x180

class UGameplayTagsSettings : public UGameplayTagsList
{
    bool ImportTagsFromConfig;                                                        // 0x0048 (size: 0x1)
    bool WarnOnInvalidTags;                                                           // 0x0049 (size: 0x1)
    TArray<FGameplayTagCategoryRemap> CategoryRemapping;                              // 0x0050 (size: 0x10)
    bool FastReplication;                                                             // 0x0060 (size: 0x1)
    TArray<FSoftObjectPath> GameplayTagTableList;                                     // 0x0068 (size: 0x10)
    TArray<FGameplayTagRedirect> GameplayTagRedirects;                                // 0x0078 (size: 0x10)
    TArray<FName> CommonlyReplicatedTags;                                             // 0x0088 (size: 0x10)
    int32 NumBitsForContainerSize;                                                    // 0x0098 (size: 0x4)
    int32 NetIndexFirstBitSegment;                                                    // 0x009C (size: 0x4)

}; // Size: 0xA0

#endif
