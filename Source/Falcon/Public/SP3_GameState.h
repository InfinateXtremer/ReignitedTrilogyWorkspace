#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "SP3_GameState.generated.h"

class APawn;

UCLASS(Blueprintable)
class FALCON_API ASP3_GameState : public AGameStateBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<APawn>> m_charDefs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_dbgFlags;
    
    ASP3_GameState();
};

