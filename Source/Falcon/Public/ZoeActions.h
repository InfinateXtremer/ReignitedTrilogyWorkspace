#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ZoeActions.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FALCON_API UZoeActions : public UActorComponent {
    GENERATED_BODY()
public:
    //UPROPERTY(BlueprintAssignable, EditAnywhere, meta=(AllowPrivateAccess=true))
    //FZoeAction OnAppearing;
    //
    //UPROPERTY(BlueprintAssignable, EditAnywhere, meta=(AllowPrivateAccess=true))
    //FZoeAction OnDisappearing;
    //
    //UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    //FZoeAction OnVanish;
    
    //UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    //FZoeLatentAction OnZapping;
    //
    //UZoeActions();
};

