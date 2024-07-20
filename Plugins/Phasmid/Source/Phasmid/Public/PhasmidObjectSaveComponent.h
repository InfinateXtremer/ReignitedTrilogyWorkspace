#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EInventoryType.h"
#include "PhasmidObjectSaveDataList.h"
#include "PhasmidSaveParam.h"
#include "PhasmidObjectSaveComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PHASMID_API UPhasmidObjectSaveComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPhasmidObjectSaveDataList objectSaveData;
    
    UPhasmidObjectSaveComponent();
    UFUNCTION(BlueprintCallable)
    bool SetSaveParam(int32 dataIndex, int32 paramIndex, const FPhasmidSaveParam& saveParam, bool updateSave);
    
    UFUNCTION(BlueprintCallable)
    void SetCollected(int32 dataIndex, bool updateSave);
    
    UFUNCTION(BlueprintCallable)
    bool GetSaveParam(int32 dataIndex, int32 paramIndex, FPhasmidSaveParam& saveParam);
    
    UFUNCTION(BlueprintCallable)
    int32 GetParamCount(int32 dataIndex);
    
    UFUNCTION(BlueprintCallable)
    int32 GetItemCount();
    
    UFUNCTION(BlueprintCallable)
    EInventoryType getInventoryType(int32 dataIndex);
    
    UFUNCTION(BlueprintCallable)
    bool GetCollected(int32 dataIndex);
    
};

