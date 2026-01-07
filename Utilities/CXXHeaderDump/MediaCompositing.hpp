#ifndef UE4SS_SDK_MediaCompositing_HPP
#define UE4SS_SDK_MediaCompositing_HPP

struct FMediaPlaneParameters
{
    class UMaterialInterface* Material;                                               // 0x0000 (size: 0x8)
    FName TextureParameterName;                                                       // 0x0008 (size: 0x8)
    bool bFillScreen;                                                                 // 0x0010 (size: 0x1)
    FVector2D FillScreenAmount;                                                       // 0x0014 (size: 0x8)
    FVector2D FixedSize;                                                              // 0x001C (size: 0x8)
    class UTexture* RenderTexture;                                                    // 0x0028 (size: 0x8)
    class UMaterialInstanceDynamic* DynamicMaterial;                                  // 0x0030 (size: 0x8)
    class UTexture* MediaTexture;                                                     // 0x0038 (size: 0x8)

}; // Size: 0x40

struct FMovieSceneMediaSectionParams
{
    class UMediaSoundComponent* MediaSoundComponent;                                  // 0x0000 (size: 0x8)
    class UMediaSource* MediaSource;                                                  // 0x0008 (size: 0x8)
    class UMediaTexture* MediaTexture;                                                // 0x0010 (size: 0x8)
    FString Proxy;                                                                    // 0x0018 (size: 0x10)
    float SectionEndTime;                                                             // 0x0028 (size: 0x4)
    float SectionStartTime;                                                           // 0x002C (size: 0x4)

}; // Size: 0x30

struct FMovieSceneMediaSectionTemplate : public FMovieSceneEvalTemplate
{
    FMovieSceneMediaSectionParams Params;                                             // 0x0020 (size: 0x30)

}; // Size: 0x50

class AMediaPlane : public AActor
{
    class UMediaPlaneComponent* MediaPlane;                                           // 0x0318 (size: 0x8)

}; // Size: 0x320

class UMediaPlaneComponent : public UPrimitiveComponent
{
    FMediaPlaneParameters Plane;                                                      // 0x0670 (size: 0x40)

    void SetMediaPlane(FMediaPlaneParameters Plane);
    void OnMediaTextureChanged();
    FMediaPlaneParameters GetPlane();
}; // Size: 0x740

class UMediaPlaneFrustumComponent : public UPrimitiveComponent
{
}; // Size: 0x670

class UMovieSceneMediaSection : public UMovieSceneSection
{
    FString Proxy;                                                                    // 0x0110 (size: 0x10)
    class UMediaSoundComponent* MediaSoundComponent;                                  // 0x0120 (size: 0x8)
    class UMediaTexture* MediaTexture;                                                // 0x0128 (size: 0x8)
    class UMediaSource* MediaSource;                                                  // 0x0130 (size: 0x8)

}; // Size: 0x140

class UMovieSceneMediaTrack : public UMovieSceneNameableTrack
{
    TArray<class UMovieSceneSection*> MediaSections;                                  // 0x00B8 (size: 0x10)

}; // Size: 0xD0

#endif
