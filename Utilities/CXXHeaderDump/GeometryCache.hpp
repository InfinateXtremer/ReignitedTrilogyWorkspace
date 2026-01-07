#ifndef UE4SS_SDK_GeometryCache_HPP
#define UE4SS_SDK_GeometryCache_HPP

struct FGeometryCacheMeshBatchInfo
{
}; // Size: 0xC

struct FGeometryCacheMeshData
{
}; // Size: 0x50

struct FTrackRenderData
{
}; // Size: 0x50

class AGeometryCacheActor : public AActor
{
    class UGeometryCacheComponent* GeometryCacheComponent;                            // 0x0318 (size: 0x8)

    class UGeometryCacheComponent* GetGeometryCacheComponent();
}; // Size: 0x320

class UGeometryCache : public UObject
{
    TArray<class UMaterialInterface*> Materials;                                      // 0x0030 (size: 0x10)
    TArray<class UGeometryCacheTrack*> Tracks;                                        // 0x0040 (size: 0x10)

}; // Size: 0x60

class UGeometryCacheComponent : public UMeshComponent
{
    class UGeometryCache* GeometryCache;                                              // 0x0698 (size: 0x8)
    bool bRunning;                                                                    // 0x06A0 (size: 0x1)
    bool bLooping;                                                                    // 0x06A1 (size: 0x1)
    float StartTimeOffset;                                                            // 0x06A4 (size: 0x4)
    float PlaybackSpeed;                                                              // 0x06A8 (size: 0x4)
    int32 NumTracks;                                                                  // 0x06AC (size: 0x4)
    float ElapsedTime;                                                                // 0x06B0 (size: 0x4)

    void Stop();
    void SetStartTimeOffset(const float NewStartTimeOffset);
    void SetPlaybackSpeed(const float NewPlaybackSpeed);
    void SetLooping(const bool bNewLooping);
    bool SetGeometryCache(class UGeometryCache* NewGeomCache);
    void PlayReversedFromEnd();
    void PlayReversed();
    void PlayFromStart();
    void Play();
    void Pause();
    bool IsPlayingReversed();
    bool IsPlaying();
    bool IsLooping();
    float GetStartTimeOffset();
    float GetPlaybackSpeed();
}; // Size: 0x710

class UGeometryCacheTrack : public UObject
{
}; // Size: 0x50

class UGeometryCacheTrack_FlipbookAnimation : public UGeometryCacheTrack
{
    uint32 NumMeshSamples;                                                            // 0x0050 (size: 0x4)

    void AddMeshSample(const FGeometryCacheMeshData& MeshData, const float SampleTime);
}; // Size: 0x78

class UGeometryCacheTrack_TransformAnimation : public UGeometryCacheTrack
{

    void SetMesh(const FGeometryCacheMeshData& NewMeshData);
}; // Size: 0xA0

class UGeometryCacheTrack_TransformGroupAnimation : public UGeometryCacheTrack
{

    void SetMesh(const FGeometryCacheMeshData& NewMeshData);
}; // Size: 0xA0

#endif
