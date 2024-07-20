#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EFalconScreenLayerType.h"
#include "EFalconScreenType.h"
#include "FalconScreenManager.generated.h"

class UDataTable;
class UFalconLayerWidget;
class UFalconWidget;

UCLASS(Blueprintable)
class FALCON_API AFalconScreenManager : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* _widgetTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<EFalconScreenLayerType, UFalconLayerWidget*> _layers;
    
public:
    AFalconScreenManager();
    UFUNCTION(BlueprintCallable)
    void SetActiveLayer(EFalconScreenLayerType inLayerType);
    
    UFUNCTION(BlueprintCallable)
    void RemoveScreen(EFalconScreenType inScreen, bool inImmediate);
    
    UFUNCTION(BlueprintCallable)
    UFalconWidget* FindScreen(EFalconScreenType inScreen);
    
    UFUNCTION(BlueprintCallable)
    void ClearAllWidgets();
    
    UFUNCTION(BlueprintCallable)
    UFalconWidget* AddScreen(EFalconScreenType inScreen);
    
};

