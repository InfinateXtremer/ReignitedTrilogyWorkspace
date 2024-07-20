#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EInputSource -FallbackName=EInputSource
#include "EKeybindingEntry.h"
#include "EPhasmidAction.h"
#include "PhasmidIconReturnData.h"
#include "PhasmidGlyphSystem.generated.h"

UCLASS(Blueprintable)
class PHASMID_API UPhasmidGlyphSystem : public UObject {
    GENERATED_BODY()
public:
    UPhasmidGlyphSystem();
    UFUNCTION(BlueprintCallable)
    static bool SynthesizeKeyDownEventFromControlCommand(const FString& ControlCommand, UObject* ContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FPhasmidIconReturnData GetIconFromControlCommand(const FString& ControlCommand, UObject* ContextObject);
    
    //UFUNCTION(BlueprintCallable, BlueprintPure)
    //static FPhasmidIconReturnData GetIconFromAction(EPhasmidAction Action, UObject* ContextObject, EKeybindingEntry KeybindingEntry, EInputSource ForceInputSource);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EPhasmidAction GetActionFromControlCommand(const FString& ControlCommand, UObject* ContextObject);
    
};

