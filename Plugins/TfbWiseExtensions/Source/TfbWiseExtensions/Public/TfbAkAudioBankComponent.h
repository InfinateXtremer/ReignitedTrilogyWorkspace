#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TfbAkAudioBankComponent.generated.h"

class UAkAudioBank;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTfbAkAudioBankComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bClickToRefresh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAkAudioBank*> RequiredBanks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAkAudioBank*> ManualExcludeBanks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAkAudioBank*> ManualIncludeBanks;
    
    UTfbAkAudioBankComponent();
    UFUNCTION(BlueprintCallable)
    void FindAudioBanks();
    
};

