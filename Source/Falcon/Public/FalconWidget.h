

#pragma once

#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "UObject/Object.h"
#include "Blueprint/UserWidget.h"
#include "FalconWidget.generated.h"

/**
 * 
 */
UCLASS()
class FALCON_API UFalconWidget : public UUserWidget
{
	GENERATED_BODY()
	
	
public:

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "Game|FalconWidget", meta = (WorldContext = "WorldContextObject"))
		static void ConfigScreen(UObject* configData);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "Game|FalconWidget", meta = (WorldContext = "WorldContextObject"))
		static void ConfigureScreen(UObject* configData); //Configdata needs to be a struct FalconScreenConfigData
	
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "Game|FalconWidget", meta = (WorldContext = "WorldContextObject"))
		static void HideScreen(bool immediate);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "Game|FalconWidget", meta = (WorldContext = "WorldContextObject"))
		static void OnKeyDownFromGameInstance(bool Handled, FKeyEvent KeyEvent);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "Game|FalconWidget", meta = (WorldContext = "WorldContextObject"))
		static void OnMouseButtonDownFromGameInstance(bool Handled, FKeyEvent MouseKey);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "Game|FalconWidget", meta = (WorldContext = "WorldContextObject"))
		static void OnMouseButtonUpFromGameInstance(bool Handled, FKeyEvent MouseKey);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "Game|FalconWidget", meta = (WorldContext = "WorldContextObject"))
		static UObject* QueryScreen(UObject* configData); //Both return and configData needs to be as struct

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "Game|FalconWidget", meta = (WorldContext = "WorldContextObject"))
		static void ShowScreen(); //Both return and configData needs to be as struct	

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Game|FalconWidget")
		bool ListenForGameInstanceKeyDown;
};
