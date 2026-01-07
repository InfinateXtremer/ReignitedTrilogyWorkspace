#ifndef UE4SS_SDK_BP_DestructibleFade_HPP
#define UE4SS_SDK_BP_DestructibleFade_HPP

class UBP_DestructibleFade_C : public UActorComponent
{
    bool Enable;                                                                      // 0x00F0 (size: 0x1)
    TMap<class UMaterialInterface*, class UMaterialInstanceDynamic*> MID_dict;        // 0x00F8 (size: 0x50)
    class UMaterialInterface* DefaultDestructMaterial;                                // 0x0148 (size: 0x8)

    void ResetFade();
    void OriginalMeshMaterials(class UMeshComponent* MeshComponent);
    void BeginFade(float Duration, float Delay);
    void ConstructFade(class UMeshComponent* MeshComponent);
}; // Size: 0x150

#endif
