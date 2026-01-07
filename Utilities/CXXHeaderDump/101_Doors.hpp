#ifndef UE4SS_SDK_101_Doors_HPP
#define UE4SS_SDK_101_Doors_HPP

class A101_Doors_C : public AMission_Item_Base_StateMachine_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0480 (size: 0x8)
    class UAkComponent* AkAudio;                                                      // 0x0488 (size: 0x8)
    class UStaticMeshComponent* CubeCollision;                                        // 0x0490 (size: 0x8)
    class UStaticMeshComponent* Knocker_R;                                            // 0x0498 (size: 0x8)
    class UStaticMeshComponent* Knocker_L;                                            // 0x04A0 (size: 0x8)
    class UStaticMeshComponent* Door_R;                                               // 0x04A8 (size: 0x8)
    class UStaticMeshComponent* Door_L;                                               // 0x04B0 (size: 0x8)
    class UBP_StateComponent_C* State_Hit;                                            // 0x04B8 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x04C0 (size: 0x8)
    float DoorKnock_Knocker_R_09A69EED45175CDF5318419348DF2851;                       // 0x04C8 (size: 0x4)
    float DoorKnock_Knocker_L_09A69EED45175CDF5318419348DF2851;                       // 0x04CC (size: 0x4)
    float DoorKnock_DoorValue_R_09A69EED45175CDF5318419348DF2851;                     // 0x04D0 (size: 0x4)
    float DoorKnock_DoorValue_L_09A69EED45175CDF5318419348DF2851;                     // 0x04D4 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> DoorKnock__Direction_09A69EED45175CDF5318419348DF2851; // 0x04D8 (size: 0x1)
    class UTimelineComponent* DoorKnock;                                              // 0x04E0 (size: 0x8)
    float RandomMultiplier;                                                           // 0x04E8 (size: 0x4)

    void UserConstructionScript();
    void DoorKnock__FinishedFunc();
    void DoorKnock__UpdateFunc();
    void BndEvt__State_Hit_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ExecuteUbergraph_101_Doors(int32 EntryPoint);
}; // Size: 0x4EC

#endif
