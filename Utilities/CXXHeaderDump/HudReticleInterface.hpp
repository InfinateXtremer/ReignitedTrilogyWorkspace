#ifndef UE4SS_SDK_HudReticleInterface_HPP
#define UE4SS_SDK_HudReticleInterface_HPP

class IHudReticleInterface_C : public IInterface
{

    void Hud Reticle - MoveTo(FVector2D new position, bool Lerp, float lerp seconds);
    void Hud Reticle - Fire();
    void Hud Reticle - Hide();
    void Hud Reticle - Show();
}; // Size: 0x28

#endif
