#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "SP3CrySktEvtSigOnAttachDelegate.h"
#include "SP3CrySktEvtSigOnVFXSetStateDelegate.h"
#include "SP3_CarrySocketComponent.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FALCON_API USP3_CarrySocketComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<AActor>> m_acceptClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_hilightTime;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSP3CrySktEvtSigOnVFXSetState OnVFXSetState;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSP3CrySktEvtSigOnAttach OnAttach;
    
    USP3_CarrySocketComponent();
};

