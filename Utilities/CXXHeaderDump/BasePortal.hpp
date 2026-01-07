#ifndef UE4SS_SDK_BasePortal_HPP
#define UE4SS_SDK_BasePortal_HPP

class ABasePortal_C : public APortal
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0418 (size: 0x8)
    class UWidgetComponent* Widget;                                                   // 0x0420 (size: 0x8)
    class UPortalNameComponent_C* PortalNameComponent;                                // 0x0428 (size: 0x8)
    class USplineComponent* name spline;                                              // 0x0430 (size: 0x8)
    class ALightingManager_C* LightManager_DEPRECATED;                                // 0x0438 (size: 0x8)
    class AGlobalTransporter_C* GlobalTransport;                                      // 0x0440 (size: 0x8)
    FString PartnerPortalName_BASE;                                                   // 0x0448 (size: 0x10)
    FString display text;                                                             // 0x0458 (size: 0x10)
    FDataTableRowHandle LevelStreamTableRow;                                          // 0x0468 (size: 0x10)
    FPostProcessSettings TransportPostProcessSettings;                                // 0x0480 (size: 0x520)
    FPostProcessSettings GameplayPostProcessSettings;                                 // 0x09A0 (size: 0x520)

    bool TriggerTransport(class ACharacter* playerCharacter);
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void setPortalEnabled(bool Enabled);
    void setPortalVisible(bool visible);
    void ExecuteUbergraph_BasePortal(int32 EntryPoint);
}; // Size: 0xEC0

#endif
