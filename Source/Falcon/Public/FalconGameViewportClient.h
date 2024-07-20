#pragma once
#include "CoreMinimal.h"
#include "Engine/GameViewportClient.h"
#include "FalconGameViewportClient.generated.h"

UCLASS(Blueprintable, NonTransient)
class UFalconGameViewportClient : public UGameViewportClient {
    GENERATED_BODY()
public:
    UFalconGameViewportClient();
};

