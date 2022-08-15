

#pragma once

#include "CoreMinimal.h"
#include "FalconModuleSaveGame.h"
#include "Components/ActorComponent.h"
#include "GameFramework/SaveGame.h"
#include "FalconGameSaveComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FFalconGameSaveComponentOnLoadGameAsyncComplete);


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class FALCON_API UFalconGameSaveComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UFalconGameSaveComponent();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _saveInProgress;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UFalconModuleSaveGame* _falconSaveGame;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UFalconModuleSaveGame* _shadowFalconSaveGame;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USaveGame* _tempSaveGameData;
	
	UPROPERTY(BlueprintAssignable)
	FFalconGameSaveComponentOnLoadGameAsyncComplete OnLoadGameAsyncComplete;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString _saveSlotName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString _saveSlotNameOld;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _doDebugPrint;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _minSaveWait;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
	
};
