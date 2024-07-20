#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EWwiseEvent.h"
#include "TfbWiseExtensionsBPLibrary.generated.h"

class AActor;
class UAkAudioEvent;
class UAkComponent;

UCLASS(Blueprintable)
class UTfbWiseExtensionsBPLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_ThreeParams(FAudioParameterDelegate, int32, EventID, EWwiseEvent, WWiseEvent, UAkComponent*, GameObjectID);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FAudioFinishedDelegate, int32, EventID, EWwiseEvent, WWiseEvent, UAkComponent*, GameObjectID);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAudioFinishedDelegate LibraryDelegate;
    
    UTfbWiseExtensionsBPLibrary();
    UFUNCTION(BlueprintCallable)
    static int32 PostTerminatingEvent(UAkAudioEvent* AkEvent, AActor* Actor, UTfbWiseExtensionsBPLibrary::FAudioParameterDelegate Delegate);
    
};

