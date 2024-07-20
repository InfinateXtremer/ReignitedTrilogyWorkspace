#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "PhasmidSettings.generated.h"

UCLASS(Blueprintable)
class UPhasmidSettings : public UObject {
    GENERATED_BODY()
public:
    UPhasmidSettings();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetSettingAsVector2D(const FString& Name, bool& found, FVector2D& Value, bool& wrongType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetSettingAsVector(const FString& Name, bool& found, FVector& Value, bool& wrongType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetSettingAsString(const FString& Name, bool& found, FString& Value, bool& wrongType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetSettingAsInt(const FString& Name, bool& found, int32& Value, bool& wrongType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetSettingAsFloat(const FString& Name, bool& found, float& Value, bool& wrongType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetSettingAsColor(const FString& Name, bool& found, FLinearColor& Value, bool& wrongType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetSettingAsBool(const FString& Name, bool& found, bool& Value, bool& wrongType) const;
    
};

