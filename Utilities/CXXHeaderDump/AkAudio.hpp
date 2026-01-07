#ifndef UE4SS_SDK_AkAudio_HPP
#define UE4SS_SDK_AkAudio_HPP

#include "AkAudio_enums.hpp"

struct FAKWaapiJsonObject
{
}; // Size: 0x10

struct FAkAmbSoundCheckpointRecord
{
    bool bCurrentlyPlaying;                                                           // 0x0000 (size: 0x1)

}; // Size: 0x1

struct FAkAudioEventTrackKey
{
    float Time;                                                                       // 0x0000 (size: 0x4)
    class UAkAudioEvent* AkAudioEvent;                                                // 0x0008 (size: 0x8)
    FString EventName;                                                                // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FAkBoolPropertyToControl
{
    FString ItemProperty;                                                             // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FAkPoly
{
    class UAkAcousticTexture* Texture;                                                // 0x0000 (size: 0x8)
    bool EnableSurface;                                                               // 0x0008 (size: 0x1)

}; // Size: 0x10

struct FAkPropertyToControl
{
    FString ItemProperty;                                                             // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FAkWaapiFieldNames
{
    FString FieldName;                                                                // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FAkWaapiSubscriptionId
{
}; // Size: 0x8

struct FAkWaapiUri
{
    FString Uri;                                                                      // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FAkWwiseItemToControl
{
    FAkWwiseObjectDetails ItemPicked;                                                 // 0x0000 (size: 0x30)
    FString ItemPath;                                                                 // 0x0030 (size: 0x10)

}; // Size: 0x40

struct FAkWwiseObjectDetails
{
    FString ItemName;                                                                 // 0x0000 (size: 0x10)
    FString ItemPath;                                                                 // 0x0010 (size: 0x10)
    FString ItemId;                                                                   // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FMovieSceneAkAudioEventTemplate : public FMovieSceneEvalTemplate
{
    class UMovieSceneAkAudioEventSection* Section;                                    // 0x0020 (size: 0x8)

}; // Size: 0x28

struct FMovieSceneAkAudioRTPCSectionData
{
    FString RTPCName;                                                                 // 0x0000 (size: 0x10)
    FRichCurve RTPCCurve;                                                             // 0x0010 (size: 0x70)

}; // Size: 0x80

struct FMovieSceneAkAudioRTPCTemplate : public FMovieSceneEvalTemplate
{
    class UMovieSceneAkAudioRTPCSection* Section;                                     // 0x0020 (size: 0x8)

}; // Size: 0x28

class AAkAcousticPortal : public AVolume
{
    AkAcousticPortalState InitialState;                                               // 0x0350 (size: 0x1)
    float ObstructionRefreshInterval;                                                 // 0x0354 (size: 0x4)
    TEnumAsByte<ECollisionChannel> ObstructionCollisionChannel;                       // 0x0358 (size: 0x1)

    void OpenPortal();
    AkAcousticPortalState GetCurrentState();
    void ClosePortal();
}; // Size: 0x410

class AAkAmbientSound : public AActor
{
    class UAkAudioEvent* AkAudioEvent;                                                // 0x0318 (size: 0x8)
    class UAkComponent* AkComponent;                                                  // 0x0320 (size: 0x8)
    bool StopWhenOwnerIsDestroyed;                                                    // 0x0328 (size: 0x1)
    bool AutoPost;                                                                    // 0x0329 (size: 0x1)

    void StopAmbientSound();
    void StartAmbientSound();
}; // Size: 0x358

class AAkReverbVolume : public AVolume
{
    uint8 bEnabled;                                                                   // 0x0350 (size: 0x1)
    class UAkAuxBus* AuxBus;                                                          // 0x0358 (size: 0x8)
    FString AuxBusName;                                                               // 0x0360 (size: 0x10)
    float SendLevel;                                                                  // 0x0370 (size: 0x4)
    float FadeRate;                                                                   // 0x0374 (size: 0x4)
    float Priority;                                                                   // 0x0378 (size: 0x4)
    class UAkLateReverbComponent* LateReverbComponent;                                // 0x0380 (size: 0x8)

}; // Size: 0x388

class AAkSpatialAudioVolume : public AVolume
{
    class UAkSurfaceReflectorSetComponent* SurfaceReflectorSet;                       // 0x0350 (size: 0x8)
    class UAkLateReverbComponent* LateReverb;                                         // 0x0358 (size: 0x8)
    class UAkRoomComponent* Room;                                                     // 0x0360 (size: 0x8)

}; // Size: 0x368

class AAkSpotReflector : public AActor
{
    class UAkAuxBus* AuxBus;                                                          // 0x0318 (size: 0x8)
    FString AuxBusName;                                                               // 0x0320 (size: 0x10)
    class UAkAcousticTexture* AcousticTexture;                                        // 0x0330 (size: 0x8)
    float DistanceScalingFactor;                                                      // 0x0338 (size: 0x4)
    float Level;                                                                      // 0x033C (size: 0x4)

}; // Size: 0x348

class UAkAcousticTexture : public UObject
{
}; // Size: 0x28

class UAkAudioBank : public UObject
{
    bool AutoLoad;                                                                    // 0x0028 (size: 0x1)

}; // Size: 0x30

class UAkAudioEvent : public UObject
{
    class UAkAudioBank* RequiredBank;                                                 // 0x0028 (size: 0x8)
    float MaxAttenuationRadius;                                                       // 0x0030 (size: 0x4)
    bool IsInfinite;                                                                  // 0x0034 (size: 0x1)
    float MinimumDuration;                                                            // 0x0038 (size: 0x4)
    float MaximumDuration;                                                            // 0x003C (size: 0x4)

}; // Size: 0x40

class UAkAuxBus : public UObject
{
    class UAkAudioBank* RequiredBank;                                                 // 0x0028 (size: 0x8)

}; // Size: 0x38

class UAkCheckBox : public UContentWidget
{
    ECheckBoxState CheckedState;                                                      // 0x0610 (size: 0x1)
    FAkCheckBoxCheckedStateDelegate CheckedStateDelegate;                             // 0x0618 (size: 0x10)
    ECheckBoxState GetCheckBoxState();
    FCheckBoxStyle WidgetStyle;                                                       // 0x0628 (size: 0x4F0)
    TEnumAsByte<EHorizontalAlignment> HorizontalAlignment;                            // 0x0B18 (size: 0x1)
    bool IsFocusable;                                                                 // 0x0B19 (size: 0x1)
    FAkBoolPropertyToControl ThePropertyToControl;                                    // 0x0B20 (size: 0x10)
    FAkWwiseItemToControl ItemToControl;                                              // 0x0B30 (size: 0x40)
    FAkCheckBoxAkOnCheckStateChanged AkOnCheckStateChanged;                           // 0x0B70 (size: 0x10)
    FAkCheckBoxOnItemDropped OnItemDropped;                                           // 0x0B80 (size: 0x10)
    FAkCheckBoxOnPropertyDropped OnPropertyDropped;                                   // 0x0B90 (size: 0x10)

    void SetIsChecked(bool InIsChecked);
    void SetCheckedState(ECheckBoxState InCheckedState);
    void SetAkItemId(const FGuid& ItemId);
    void SetAkBoolProperty(FString ItemProperty);
    bool IsPressed();
    bool IsChecked();
    ECheckBoxState GetCheckedState();
    FString GetAkProperty();
    FGuid GetAkItemId();
}; // Size: 0xBF0

class UAkComponent : public USceneComponent
{
    class UAkAuxBus* EarlyReflectionAuxBus;                                           // 0x02A0 (size: 0x8)
    FString EarlyReflectionAuxBusName;                                                // 0x02A8 (size: 0x10)
    int32 EarlyReflectionOrder;                                                       // 0x02B8 (size: 0x4)
    float EarlyReflectionBusSendGain;                                                 // 0x02BC (size: 0x4)
    float EarlyReflectionMaxPathLength;                                               // 0x02C0 (size: 0x4)
    TEnumAsByte<ECollisionChannel> OcclusionCollisionChannel;                         // 0x02C4 (size: 0x1)
    uint8 EnableSpotReflectors;                                                       // 0x02CC (size: 0x1)
    uint8 DrawFirstOrderReflections;                                                  // 0x02CC (size: 0x1)
    uint8 DrawSecondOrderReflections;                                                 // 0x02CC (size: 0x1)
    uint8 DrawHigherOrderReflections;                                                 // 0x02CC (size: 0x1)
    uint8 DrawSoundPropagation;                                                       // 0x02CC (size: 0x1)
    bool StopWhenOwnerDestroyed;                                                      // 0x02D0 (size: 0x1)
    float AttenuationScalingFactor;                                                   // 0x02D4 (size: 0x4)
    float OcclusionRefreshInterval;                                                   // 0x02D8 (size: 0x4)
    class UAkAudioEvent* AkAudioEvent;                                                // 0x02E0 (size: 0x8)
    FString EventName;                                                                // 0x02E8 (size: 0x10)

    void UseReverbVolumes(bool inUseReverbVolumes);
    void UseEarlyReflections(class UAkAuxBus* AuxBus, int32 Order, float BusSendGain, float MaxPathLength, bool SpotReflectors, FString AuxBusName);
    void Stop();
    void SetSwitch(FString SwitchGroup, FString SwitchState);
    void SetStopWhenOwnerDestroyed(bool bStopWhenOwnerDestroyed);
    void SetRTPCValue(FString RTPC, float Value, int32 InterpolationTimeMs);
    void SetOutputBusVolume(float BusVolume);
    void SetListeners(const TArray<class UAkComponent*>& Listeners);
    void SetAttenuationScalingFactor(float Value);
    void PostTrigger(FString Trigger);
    int32 PostAssociatedAkEvent();
    int32 PostAkEventByName(FString in_EventName);
    int32 PostAkEvent(class UAkAudioEvent* AkEvent, FString in_EventName);
    float GetAttenuationRadius();
}; // Size: 0x470

class UAkGameplayStatics : public UBlueprintFunctionLibrary
{

    void UseReverbVolumes(bool inUseReverbVolumes, class AActor* Actor);
    void UseEarlyReflections(class AActor* Actor, class UAkAuxBus* AuxBus, int32 Order, float BusSendGain, float MaxPathLength, bool SpotReflectors, FString AuxBusName);
    void UnloadBankByName(FString BankName);
    void UnloadBank(class UAkAudioBank* Bank, FString BankName);
    void StopProfilerCapture();
    void StopOutputCapture();
    void StopAllAmbientSounds(class UObject* WorldContextObject);
    void StopAll();
    void StopActor(class AActor* Actor);
    void StartProfilerCapture(FString Filename);
    void StartOutputCapture(FString Filename);
    void StartAllAmbientSounds(class UObject* WorldContextObject);
    class UAkComponent* SpawnAkComponentAtLocation(class UObject* WorldContextObject, class UAkAudioEvent* AkEvent, class UAkAuxBus* EarlyReflectionsBus, FVector Location, FRotator Orientation, bool AutoPost, FString EventName, FString EarlyReflectionsBusName, bool AutoDestroy);
    void SetSwitch(FName SwitchGroup, FName SwitchState, class AActor* Actor);
    void SetState(FName StateGroup, FName State);
    void SetRTPCValue(FName RTPC, float Value, int32 InterpolationTimeMs, class AActor* Actor);
    void SetPanningRule(PanningRule PanRule);
    void SetOutputBusVolume(float BusVolume, class AActor* Actor);
    void SetOcclusionScalingFactor(float ScalingFactor);
    void SetOcclusionRefreshInterval(float RefreshInterval, class AActor* Actor);
    void SetMultiplePositions(class UAkComponent* GameObjectAkComponent, TArray<FTransform> Positions, AkMultiPositionType MultiPositionType);
    void SetMultipleChannelEmitterPositions(class UAkComponent* GameObjectAkComponent, TArray<AkChannelConfiguration> ChannelMasks, TArray<FTransform> Positions, AkMultiPositionType MultiPositionType);
    void SetBusConfig(FString BusName, AkChannelConfiguration ChannelConfiguration);
    void PostTrigger(FName Trigger, class AActor* Actor);
    void PostEventByName(FString EventName, class AActor* Actor, bool bStopWhenAttachedToDestroyed);
    int32 PostEventAttached(class UAkAudioEvent* AkEvent, class AActor* Actor, FName AttachPointName, bool bStopWhenAttachedToDestroyed, FString EventName);
    void PostEventAtLocationByName(FString EventName, FVector Location, FRotator Orientation, class UObject* WorldContextObject);
    int32 PostEventAtLocation(class UAkAudioEvent* AkEvent, FVector Location, FRotator Orientation, FString EventName, class UObject* WorldContextObject);
    int32 PostEvent(class UAkAudioEvent* AkEvent, class AActor* Actor, bool bStopWhenAttachedToDestroyed, FString EventName);
    void LoadInitBank();
    void LoadBanks(const TArray<class UAkAudioBank*>& SoundBanks, bool SynchronizeSoundBanks);
    void LoadBankByName(FString BankName);
    void LoadBank(class UAkAudioBank* Bank, FString BankName);
    bool IsGame(class UObject* WorldContextObject);
    bool IsEditor();
    float GetOcclusionScalingFactor();
    class UAkComponent* GetAkComponent(class USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, TEnumAsByte<EAttachLocation::Type> LocationType);
    void ClearBanks();
    void AddOutputCaptureMarker(FString MarkerText);
}; // Size: 0x28

class UAkItemBoolProperties : public UWidget
{
    FAkItemBoolPropertiesOnSelectionChanged OnSelectionChanged;                       // 0x0100 (size: 0x10)
    FAkItemBoolPropertiesOnPropertyDragged OnPropertyDragged;                         // 0x0110 (size: 0x10)

    void SetSearchText(FString newText);
    FString GetSelectedProperty();
    FString GetSearchText();
}; // Size: 0x140

class UAkItemBoolPropertiesConv : public UBlueprintFunctionLibrary
{

    FText Conv_FAkBoolPropertyToControlToText(const FAkBoolPropertyToControl& INAkBoolPropertyToControl);
    FString Conv_FAkBoolPropertyToControlToString(const FAkBoolPropertyToControl& INAkBoolPropertyToControl);
}; // Size: 0x28

class UAkItemProperties : public UWidget
{
    FAkItemPropertiesOnSelectionChanged OnSelectionChanged;                           // 0x0100 (size: 0x10)
    FAkItemPropertiesOnPropertyDragged OnPropertyDragged;                             // 0x0110 (size: 0x10)

    void SetSearchText(FString newText);
    FString GetSelectedProperty();
    FString GetSearchText();
}; // Size: 0x140

class UAkItemPropertiesConv : public UBlueprintFunctionLibrary
{

    FText Conv_FAkPropertyToControlToText(const FAkPropertyToControl& INAkPropertyToControl);
    FString Conv_FAkPropertyToControlToString(const FAkPropertyToControl& INAkPropertyToControl);
}; // Size: 0x28

class UAkLateReverbComponent : public USceneComponent
{
    uint8 bEnable;                                                                    // 0x02A0 (size: 0x1)
    class UAkAuxBus* AuxBus;                                                          // 0x02A8 (size: 0x8)
    FString AuxBusName;                                                               // 0x02B0 (size: 0x10)
    float SendLevel;                                                                  // 0x02C0 (size: 0x4)
    float FadeRate;                                                                   // 0x02C4 (size: 0x4)
    float Priority;                                                                   // 0x02C8 (size: 0x4)

}; // Size: 0x2E0

class UAkPortalComponent : public USceneComponent
{
}; // Size: 0x2A0

class UAkRoomComponent : public USceneComponent
{
    uint8 bEnable;                                                                    // 0x02A0 (size: 0x1)
    float Priority;                                                                   // 0x02B0 (size: 0x4)
    float WallOcclusion;                                                              // 0x02B4 (size: 0x4)

}; // Size: 0x2D0

class UAkSettings : public UObject
{
    uint8 MaxSimultaneousReverbVolumes;                                               // 0x0028 (size: 0x1)
    FFilePath WwiseProjectPath;                                                       // 0x0030 (size: 0x10)
    FDirectoryPath WwiseWindowsInstallationPath;                                      // 0x0040 (size: 0x10)
    FFilePath WwiseMacInstallationPath;                                               // 0x0050 (size: 0x10)
    bool bAutoConnectToWAAPI;                                                         // 0x0060 (size: 0x1)
    bool SuppressWwiseProjectPathWarnings;                                            // 0x0061 (size: 0x1)

}; // Size: 0x110

class UAkSlider : public UWidget
{
    float Value;                                                                      // 0x0100 (size: 0x4)
    FAkSliderValueDelegate ValueDelegate;                                             // 0x0108 (size: 0x10)
    float GetFloat();
    FSliderStyle WidgetStyle;                                                         // 0x0118 (size: 0x1F0)
    TEnumAsByte<EOrientation> Orientation;                                            // 0x0308 (size: 0x1)
    FLinearColor SliderBarColor;                                                      // 0x030C (size: 0x10)
    FLinearColor SliderHandleColor;                                                   // 0x031C (size: 0x10)
    bool IndentHandle;                                                                // 0x032C (size: 0x1)
    bool Locked;                                                                      // 0x032D (size: 0x1)
    float StepSize;                                                                   // 0x0330 (size: 0x4)
    bool IsFocusable;                                                                 // 0x0334 (size: 0x1)
    FAkPropertyToControl ThePropertyToControl;                                        // 0x0338 (size: 0x10)
    FAkWwiseItemToControl ItemToControl;                                              // 0x0348 (size: 0x40)
    FAkSliderOnValueChanged OnValueChanged;                                           // 0x0388 (size: 0x10)
    FAkSliderOnItemDropped OnItemDropped;                                             // 0x0398 (size: 0x10)
    FAkSliderOnPropertyDropped OnPropertyDropped;                                     // 0x03A8 (size: 0x10)

    void SetValue(float InValue);
    void SetStepSize(float InValue);
    void SetSliderHandleColor(FLinearColor InValue);
    void SetSliderBarColor(FLinearColor InValue);
    void SetLocked(bool InValue);
    void SetIndentHandle(bool InValue);
    void SetAkSliderItemProperty(FString ItemProperty);
    void SetAkSliderItemId(const FGuid& ItemId);
    float GetValue();
    FString GetAkSliderItemProperty();
    FGuid GetAkSliderItemId();
}; // Size: 0x3D8

class UAkSurfaceReflectorSetComponent : public USceneComponent
{
    uint8 bEnableSurfaceReflectors;                                                   // 0x02A0 (size: 0x1)
    TArray<FAkPoly> AcousticPolys;                                                    // 0x02A8 (size: 0x10)

    void UpdateSurfaceReflectorSet();
    void SendSurfaceReflectorSet();
    void RemoveSurfaceReflectorSet();
}; // Size: 0x2D0

class UAkWaapiCalls : public UBlueprintFunctionLibrary
{

    FAKWaapiJsonObject Unsubscribe(const FAkWaapiSubscriptionId& SubscriptionId, bool& UnsubscriptionDone);
    FAKWaapiJsonObject SubscribeToWaapi(const FAkWaapiUri& WaapiUri, const FAKWaapiJsonObject& WaapiOptions, const FSubscribeToWaapiCallback& Callback, FAkWaapiSubscriptionId& SubscriptionId, bool& SubscriptionDone);
    void SetSubscriptionID(const FAkWaapiSubscriptionId& Subscription, int32 ID);
    bool RegisterWaapiProjectLoadedCallback(const FRegisterWaapiProjectLoadedCallbackCallback& Callback);
    bool RegisterWaapiConnectionLostCallback(const FRegisterWaapiConnectionLostCallbackCallback& Callback);
    int32 GetSubscriptionID(const FAkWaapiSubscriptionId& Subscription);
    FText Conv_FAkWaapiSubscriptionIdToText(const FAkWaapiSubscriptionId& INAkWaapiSubscriptionId);
    FString Conv_FAkWaapiSubscriptionIdToString(const FAkWaapiSubscriptionId& INAkWaapiSubscriptionId);
    FAKWaapiJsonObject CallWaapi(const FAkWaapiUri& WaapiUri, const FAKWaapiJsonObject& WaapiArgs, const FAKWaapiJsonObject& WaapiOptions);
}; // Size: 0x28

class UAkWaapiJsonManager : public UBlueprintFunctionLibrary
{

    FAKWaapiJsonObject SetStringField(const FAkWaapiFieldNames& FieldName, FString FieldValue, FAKWaapiJsonObject Target);
    FAKWaapiJsonObject SetObjectField(const FAkWaapiFieldNames& FieldName, FAKWaapiJsonObject FieldValue, FAKWaapiJsonObject Target);
    FAKWaapiJsonObject SetNumberField(const FAkWaapiFieldNames& FieldName, float FieldValue, FAKWaapiJsonObject Target);
    FAKWaapiJsonObject SetBoolField(const FAkWaapiFieldNames& FieldName, bool FieldValue, FAKWaapiJsonObject Target);
    FAKWaapiJsonObject SetArrayStringFields(const FAkWaapiFieldNames& FieldName, const TArray<FString>& FieldStringValues, FAKWaapiJsonObject Target);
    FAKWaapiJsonObject SetArrayObjectFields(const FAkWaapiFieldNames& FieldName, const TArray<FAKWaapiJsonObject>& FieldObjectValues, FAKWaapiJsonObject Target);
    FString GetStringField(const FAkWaapiFieldNames& FieldName, FAKWaapiJsonObject Target);
    FAKWaapiJsonObject GetObjectField(const FAkWaapiFieldNames& FieldName, FAKWaapiJsonObject Target);
    float GetNumberField(const FAkWaapiFieldNames& FieldName, FAKWaapiJsonObject Target);
    int32 GetIntegerField(const FAkWaapiFieldNames& FieldName, FAKWaapiJsonObject Target);
    bool GetBoolField(const FAkWaapiFieldNames& FieldName, FAKWaapiJsonObject Target);
    TArray<FAKWaapiJsonObject> GetArrayField(const FAkWaapiFieldNames& FieldName, FAKWaapiJsonObject Target);
    FText Conv_FAKWaapiJsonObjectToText(FAKWaapiJsonObject INAKWaapiJsonObject);
    FString Conv_FAKWaapiJsonObjectToString(FAKWaapiJsonObject INAKWaapiJsonObject);
}; // Size: 0x28

class UAkWaapiUriConv : public UBlueprintFunctionLibrary
{

    FText Conv_FAkWaapiUriToText(const FAkWaapiUri& INAkWaapiUri);
    FString Conv_FAkWaapiUriToString(const FAkWaapiUri& INAkWaapiUri);
}; // Size: 0x28

class UAkWwiseTree : public UWidget
{
    FAkWwiseTreeOnSelectionChanged OnSelectionChanged;                                // 0x0100 (size: 0x10)
    FAkWwiseTreeOnItemDragged OnItemDragged;                                          // 0x0110 (size: 0x10)

    void SetSearchText(FString newText);
    FAkWwiseObjectDetails GetSelectedItem();
    FString GetSearchText();
}; // Size: 0x140

class UAkWwiseTreeSelector : public UWidget
{
    FAkWwiseTreeSelectorOnSelectionChanged OnSelectionChanged;                        // 0x0100 (size: 0x10)
    FAkWwiseTreeSelectorOnItemDragged OnItemDragged;                                  // 0x0110 (size: 0x10)

}; // Size: 0x160

class UInterpTrackAkAudioEvent : public UInterpTrackVectorBase
{
    TArray<FAkAudioEventTrackKey> Events;                                             // 0x0090 (size: 0x10)
    uint8 bContinueEventOnMatineeEnd;                                                 // 0x00A0 (size: 0x1)

}; // Size: 0xA8

class UInterpTrackAkAudioRTPC : public UInterpTrackFloatBase
{
    FString Param;                                                                    // 0x0090 (size: 0x10)
    uint8 bPlayOnReverse;                                                             // 0x00A0 (size: 0x1)
    uint8 bContinueRTPCOnMatineeEnd;                                                  // 0x00A0 (size: 0x1)

}; // Size: 0xA8

class UInterpTrackInstAkAudioEvent : public UInterpTrackInst
{
    float LastUpdatePosition;                                                         // 0x0028 (size: 0x4)

}; // Size: 0x30

class UInterpTrackInstAkAudioRTPC : public UInterpTrackInst
{
    float LastUpdatePosition;                                                         // 0x0028 (size: 0x4)

}; // Size: 0x30

class UMovieSceneAkAudioEventSection : public UMovieSceneSection
{
    class UAkAudioEvent* Event;                                                       // 0x0150 (size: 0x8)
    bool RetriggerEvent;                                                              // 0x0158 (size: 0x1)
    int32 ScrubTailLengthMs;                                                          // 0x015C (size: 0x4)
    bool StopAtSectionEnd;                                                            // 0x0160 (size: 0x1)
    FString EventName;                                                                // 0x0168 (size: 0x10)
    float MaxSourceDuration;                                                          // 0x0198 (size: 0x4)
    FString MaxDurationSourceID;                                                      // 0x01A0 (size: 0x10)

}; // Size: 0x200

class UMovieSceneAkAudioEventTrack : public UMovieSceneAkTrack
{
}; // Size: 0xD0

class UMovieSceneAkAudioRTPCSection : public UMovieSceneSection
{
    FString Name;                                                                     // 0x0118 (size: 0x10)
    FRichCurve FloatCurve;                                                            // 0x0128 (size: 0x70)

}; // Size: 0x1A0

class UMovieSceneAkAudioRTPCTrack : public UMovieSceneAkTrack
{
}; // Size: 0xD0

class UMovieSceneAkTrack : public UMovieSceneTrack
{
    TArray<class UMovieSceneSection*> Sections;                                       // 0x00B8 (size: 0x10)
    uint8 bIsAMasterTrack;                                                            // 0x00C8 (size: 0x1)

}; // Size: 0xD0

class USAkWaapiFieldNamesConv : public UBlueprintFunctionLibrary
{

    FText Conv_FAkWaapiFieldNamesToText(const FAkWaapiFieldNames& INAkWaapiFieldNames);
    FString Conv_FAkWaapiFieldNamesToString(const FAkWaapiFieldNames& INAkWaapiFieldNames);
}; // Size: 0x28

#endif
