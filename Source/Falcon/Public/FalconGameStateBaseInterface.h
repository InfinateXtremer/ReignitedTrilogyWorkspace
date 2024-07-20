#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EFalconAreaExitTitle.h"
#include "FalconGameStateBaseInterface.generated.h"

UINTERFACE(BlueprintType, meta=(CannotImplementInterfaceInBlueprint))
class FALCON_API UFalconGameStateBaseInterface : public UInterface {
    GENERATED_BODY()
};

class FALCON_API IFalconGameStateBaseInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual void SetCheatEnabled(const FString& Name) PURE_VIRTUAL(SetCheatEnabled,);
    
    UFUNCTION(BlueprintCallable)
    virtual bool NeedsPatch(const FString& LevelShortName) PURE_VIRTUAL(NeedsPatch, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool IsFlightLevel(const FString& LevelPath) PURE_VIRTUAL(IsFlightLevel, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool IsBossLevel(const FString& LevelPath) PURE_VIRTUAL(IsBossLevel, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual int32 GetTreasureSpentAtLevelStart() PURE_VIRTUAL(GetTreasureSpentAtLevelStart, return 0;);
    
    UFUNCTION(BlueprintCallable)
    virtual int32 GetTreasureAtLevelStart() PURE_VIRTUAL(GetTreasureAtLevelStart, return 0;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool GetQuestActivated() PURE_VIRTUAL(GetQuestActivated, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool GetPatchApplied() PURE_VIRTUAL(GetPatchApplied, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual EFalconAreaExitTitle GetExitAreaTitle() PURE_VIRTUAL(GetExitAreaTitle, return EFalconAreaExitTitle::None;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool GetCheatEnabled(const FString& Name) PURE_VIRTUAL(GetCheatEnabled, return false;);
    
};

