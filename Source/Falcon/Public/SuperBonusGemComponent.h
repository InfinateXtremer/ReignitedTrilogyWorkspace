#pragma once
#include "CoreMinimal.h"
#include "Components/ArrowComponent.h"
#include "PhasmidObjectSaveDataList.h"
#include "RevengeGemSets.h"
#include "SuperBonusGemComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FALCON_API USuperBonusGemComponent : public UArrowComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRevengeGemSets Gems;
    
    USuperBonusGemComponent();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 getObjectSaveData(FPhasmidObjectSaveDataList& saveData) const;
    
};

