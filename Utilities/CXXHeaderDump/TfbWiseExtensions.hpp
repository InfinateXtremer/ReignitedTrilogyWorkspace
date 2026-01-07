#ifndef UE4SS_SDK_TfbWiseExtensions_HPP
#define UE4SS_SDK_TfbWiseExtensions_HPP

#include "TfbWiseExtensions_enums.hpp"

class UTfbAkAudioBankComponent : public UActorComponent
{
    bool bClickToRefresh;                                                             // 0x00F0 (size: 0x1)
    TArray<class UAkAudioBank*> RequiredBanks;                                        // 0x00F8 (size: 0x10)
    TArray<class UAkAudioBank*> ManualExcludeBanks;                                   // 0x0108 (size: 0x10)
    TArray<class UAkAudioBank*> ManualIncludeBanks;                                   // 0x0118 (size: 0x10)

    void FindAudioBanks();
}; // Size: 0x138

class UTfbAkAudioBankManager : public UObject
{
}; // Size: 0x78

class UTfbAkComponent : public UAkComponent
{
    bool TfbWwiseEnable;                                                              // 0x0468 (size: 0x1)

}; // Size: 0x4B0

class UTfbWiseExtensionsBPLibrary : public UBlueprintFunctionLibrary
{
    FTfbWiseExtensionsBPLibraryLibraryDelegate LibraryDelegate;                       // 0x0028 (size: 0x10)

    int32 PostTerminatingEvent(class UAkAudioEvent* AkEvent, class AActor* Actor, FPostTerminatingEventDelegate Delegate);
    void AudioParameterDelegate__DelegateSignature(int32 EventID, EWwiseEvent WWiseEvent, class UAkComponent* GameObjectID);
    void AudioFinishedDelegate__DelegateSignature(int32 EventID, EWwiseEvent WWiseEvent, class UAkComponent* GameObjectID);
}; // Size: 0x38

#endif
