#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SP3SparxEnemyStage.h"
#include "SP3_SparxEnemyBase.h"
#include "SP3_SparxEnemyStaged.generated.h"

UCLASS(Blueprintable)
class FALCON_API ASP3_SparxEnemyStaged : public ASP3_SparxEnemyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_curStageName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSP3SparxEnemyStage> m_stage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_damageTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_deathTime;
    
    ASP3_SparxEnemyStaged();
    UFUNCTION(BlueprintCallable)
    void SetStageByName(FName Name);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStageSeqTest(FName stageCur, FName stageNext, bool& advanceOUT);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCalcMoveInput(FName stage, const FVector& moveIN, float rotIN, FVector& MoveOut, float& rotOUT);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetStageTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetStageName() const;
    
};

