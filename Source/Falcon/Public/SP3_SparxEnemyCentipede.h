#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SP3_SparxEnemyStaged.h"
#include "Templates/SubclassOf.h"
#include "SP3_SparxEnemyCentipede.generated.h"

class AActor;
class ASP3_SparxEnemyBase;
class ASP3_SparxEnemyCentipede;

UCLASS(Blueprintable)
class FALCON_API ASP3_SparxEnemyCentipede : public ASP3_SparxEnemyStaged {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxNodes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NodeSpacing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D NodeInterp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASP3_SparxEnemyBase> NodeClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SplitHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> SplitPaths;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASP3_SparxEnemyCentipede> SplitClass;
    
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ASP3_SparxEnemyCentipede> m_childA;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ASP3_SparxEnemyCentipede> m_childB;
    
public:
    ASP3_SparxEnemyCentipede();
};

