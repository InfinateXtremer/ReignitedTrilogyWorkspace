#ifndef UE4SS_SDK_LevelSequence_HPP
#define UE4SS_SDK_LevelSequence_HPP

struct FBoundActorProxy
{
}; // Size: 0x1

struct FLevelSequenceBindingReference
{
    FString PackageName;                                                              // 0x0000 (size: 0x10)
    FSoftObjectPath ExternalObjectPath;                                               // 0x0010 (size: 0x18)
    FString ObjectPath;                                                               // 0x0028 (size: 0x10)

}; // Size: 0x38

struct FLevelSequenceBindingReferenceArray
{
    TArray<FLevelSequenceBindingReference> References;                                // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FLevelSequenceBindingReferences
{
    TMap<class FGuid, class FLevelSequenceBindingReferenceArray> BindingIdToReferences; // 0x0000 (size: 0x50)

}; // Size: 0x50

struct FLevelSequenceLegacyObjectReference
{
}; // Size: 0x20

struct FLevelSequenceObject
{
    TLazyObjectPtr<class UObject> ObjectOrOwner;                                      // 0x0000 (size: 0x1C)
    FString ComponentName;                                                            // 0x0020 (size: 0x10)
    TWeakObjectPtr<class UObject> CachedComponent;                                    // 0x0030 (size: 0x8)

}; // Size: 0x38

struct FLevelSequenceObjectReferenceMap
{
}; // Size: 0x50

struct FLevelSequencePlayerSnapshot
{
    FString MasterName;                                                               // 0x0000 (size: 0x10)
    float MasterTime;                                                                 // 0x0010 (size: 0x4)
    FString CurrentShotName;                                                          // 0x0018 (size: 0x10)
    float CurrentShotLocalTime;                                                       // 0x0028 (size: 0x4)
    class UCameraComponent* CameraComponent;                                          // 0x0030 (size: 0x8)
    FLevelSequenceSnapshotSettings Settings;                                          // 0x0038 (size: 0x8)
    FMovieSceneSequenceID ShotID;                                                     // 0x0040 (size: 0x4)

}; // Size: 0x48

struct FLevelSequenceSnapshotSettings
{
    uint8 ZeroPadAmount;                                                              // 0x0000 (size: 0x1)
    float FrameRate;                                                                  // 0x0004 (size: 0x4)

}; // Size: 0x8

class ALevelSequenceActor : public AActor
{
    bool bAutoPlay;                                                                   // 0x0320 (size: 0x1)
    FMovieSceneSequencePlaybackSettings PlaybackSettings;                             // 0x0328 (size: 0x30)
    class ULevelSequencePlayer* SequencePlayer;                                       // 0x0358 (size: 0x8)
    FSoftObjectPath LevelSequence;                                                    // 0x0360 (size: 0x18)
    TArray<class AActor*> AdditionalEventReceivers;                                   // 0x0378 (size: 0x10)
    class ULevelSequenceBurnInOptions* BurnInOptions;                                 // 0x0388 (size: 0x8)
    class UMovieSceneBindingOverrides* BindingOverrides;                              // 0x0390 (size: 0x8)
    bool bOverrideInstanceData;                                                       // 0x0398 (size: 0x1)
    class UObject* DefaultInstanceData;                                               // 0x03A0 (size: 0x8)
    class ULevelSequenceBurnIn* BurnInInstance;                                       // 0x03A8 (size: 0x8)

    void SetSequence(class ULevelSequence* InSequence);
    void SetEventReceivers(TArray<class AActor*> AdditionalReceivers);
    void SetBinding(FMovieSceneObjectBindingID Binding, const TArray<class AActor*>& Actors, bool bAllowBindingsFromAsset);
    void ResetBindings();
    void ResetBinding(FMovieSceneObjectBindingID Binding);
    void RemoveBinding(FMovieSceneObjectBindingID Binding, class AActor* Actor);
    class ULevelSequence* GetSequence(bool bLoad, bool bInitializePlayer);
    void AddBinding(FMovieSceneObjectBindingID Binding, class AActor* Actor, bool bAllowBindingsFromAsset);
}; // Size: 0x3B0

class UDefaultLevelSequenceInstanceData : public UObject
{
    class AActor* TransformOriginActor;                                               // 0x0030 (size: 0x8)
    FTransform TransformOrigin;                                                       // 0x0040 (size: 0x30)

}; // Size: 0x70

class ULevelSequence : public UMovieSceneSequence
{
    class UMovieScene* MovieScene;                                                    // 0x03B0 (size: 0x8)
    FLevelSequenceObjectReferenceMap ObjectReferences;                                // 0x03B8 (size: 0x50)
    FLevelSequenceBindingReferences BindingReferences;                                // 0x0408 (size: 0x50)
    TMap<class FString, class FLevelSequenceObject> PossessedObjects;                 // 0x0458 (size: 0x50)

}; // Size: 0x4B0

class ULevelSequenceBurnIn : public UUserWidget
{
    FLevelSequencePlayerSnapshot FrameInformation;                                    // 0x0208 (size: 0x48)
    class ALevelSequenceActor* LevelSequenceActor;                                    // 0x0250 (size: 0x8)

    void SetSettings(class UObject* InSettings);
    TSubclassOf<class ULevelSequenceBurnInInitSettings> GetSettingsClass();
}; // Size: 0x258

class ULevelSequenceBurnInInitSettings : public UObject
{
}; // Size: 0x28

class ULevelSequenceBurnInOptions : public UObject
{
    bool bUseBurnIn;                                                                  // 0x0028 (size: 0x1)
    FSoftClassPath BurnInClass;                                                       // 0x0030 (size: 0x18)
    class ULevelSequenceBurnInInitSettings* Settings;                                 // 0x0048 (size: 0x8)

}; // Size: 0x50

class ULevelSequencePlayer : public UMovieSceneSequencePlayer
{
    FLevelSequencePlayerOnCameraCut OnCameraCut;                                      // 0x07F8 (size: 0x10)
    TArray<class UObject*> AdditionalEventReceivers;                                  // 0x0838 (size: 0x10)

    class ULevelSequencePlayer* CreateLevelSequencePlayer(class UObject* WorldContextObject, class ULevelSequence* LevelSequence, FMovieSceneSequencePlaybackSettings Settings, class ALevelSequenceActor*& OutActor);
}; // Size: 0x8A0

#endif
