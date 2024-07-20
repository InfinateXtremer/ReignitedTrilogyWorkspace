#pragma once
#include "CoreMinimal.h"
#include "FalconWidget.h"
#include "QACOnCloseSignatureDelegate.h"
#include "SkateScoreWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class USkateScoreWidget : public UFalconWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText YourScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CourseScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsNewHighScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsTimeScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText NoCourseRecordLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText NewCourseRecordLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultShowTime;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQACOnCloseSignature OnClose;
    
    USkateScoreWidget();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetTimeString(float TimeSeconds, FText& timeText) const;
    
    UFUNCTION(BlueprintCallable)
    void CloseWidget();
    
};

