#ifndef UE4SS_SDK_MusicFunctionLib_HPP
#define UE4SS_SDK_MusicFunctionLib_HPP

class UMusicFunctionLib_C : public UBlueprintFunctionLibrary
{

    void Restart Music(class UObject* __WorldContext);
    void Stop Music(class UObject* __WorldContext, FString& Music String);
    void Play Music(FString Music String, class UObject* __WorldContext);
}; // Size: 0x28

#endif
