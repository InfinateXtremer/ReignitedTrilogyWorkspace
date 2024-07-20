#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "FalconGameInstanceInterface.generated.h"

class AFalconScreenManager;

UINTERFACE(BlueprintType, meta=(CannotImplementInterfaceInBlueprint))
class UFalconGameInstanceInterface : public UInterface {
    GENERATED_BODY()
};

class IFalconGameInstanceInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual void GetUserProfileName(FString& ProfileName) PURE_VIRTUAL(GetUserProfileName,);
    
    UFUNCTION(BlueprintCallable)
    virtual bool GetSkipFrontEnd() PURE_VIRTUAL(GetSkipFrontEnd, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual AFalconScreenManager* GetFalconScreenManager() PURE_VIRTUAL(GetFalconScreenManager, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool GetDemoMode() PURE_VIRTUAL(GetDemoMode, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual void closeProfileChangedDialog() PURE_VIRTUAL(closeProfileChangedDialog,);
    
};

