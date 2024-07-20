#include "FalconGraphicsOptionStatics.h"

class UObject;

void UFalconGraphicsOptionStatics::SetVsync(const UObject* WorldContextObject, bool isOn) {
}

void UFalconGraphicsOptionStatics::SetVignette(const UObject* WorldContextObject, bool isOn) {
}

void UFalconGraphicsOptionStatics::SetViewDistanceQuality(const UObject* WorldContextObject, EGraphicsQuality setting) {
}

void UFalconGraphicsOptionStatics::SetTextureQuality(const UObject* WorldContextObject, EGraphicsQuality setting) {
}

void UFalconGraphicsOptionStatics::SetSSR(const UObject* WorldContextObject, EGraphicsQuality setting) {
}

void UFalconGraphicsOptionStatics::SetShadowQuality(const UObject* WorldContextObject, EGraphicsQuality setting) {
}

void UFalconGraphicsOptionStatics::SetResolution(const UObject* WorldContextObject, int32 setting, bool ApplySettings) {
}

void UFalconGraphicsOptionStatics::SetPreset(const UObject* WorldContextObject, EGraphicsOptionPreset Preset) {
}

void UFalconGraphicsOptionStatics::SetMotionBlur(const UObject* WorldContextObject, bool isOn) {
}

void UFalconGraphicsOptionStatics::SetMaxFPS(const UObject* WorldContextObject, int32 setting) {
}

void UFalconGraphicsOptionStatics::SetFoliageQuality(const UObject* WorldContextObject, EGraphicsQuality setting) {
}

void UFalconGraphicsOptionStatics::SetDisplayMode(const UObject* WorldContextObject, TEnumAsByte<EWindowMode::Type> setting, bool ApplySettings) {
}

void UFalconGraphicsOptionStatics::SetDepthOfField(const UObject* WorldContextObject, EGraphicsQuality setting) {
}

void UFalconGraphicsOptionStatics::SetBloom(const UObject* WorldContextObject, EGraphicsQuality setting) {
}

void UFalconGraphicsOptionStatics::SetAntiAliasing(const UObject* WorldContextObject, EGraphicsQuality setting) {
}

void UFalconGraphicsOptionStatics::SetAmbientOcclusion(const UObject* WorldContextObject, EGraphicsQuality setting) {
}

void UFalconGraphicsOptionStatics::ResetToDefaultSettings(const UObject* WorldContextObject) {
}

void UFalconGraphicsOptionStatics::PopulateDisplaySettings(const UObject* WorldContextObject) {
}

bool UFalconGraphicsOptionStatics::GetVsync() {
    return false;
}

bool UFalconGraphicsOptionStatics::GetVignette() {
    return false;
}

EGraphicsQuality UFalconGraphicsOptionStatics::GetViewDistanceQuality() {
    return EGraphicsQuality::QUALITY_LOW;
}

EGraphicsQuality UFalconGraphicsOptionStatics::GetTextureQuality() {
    return EGraphicsQuality::QUALITY_LOW;
}

EGraphicsQuality UFalconGraphicsOptionStatics::GetSSR() {
    return EGraphicsQuality::QUALITY_LOW;
}

EGraphicsQuality UFalconGraphicsOptionStatics::GetShadowQuality() {
    return EGraphicsQuality::QUALITY_LOW;
}

TArray<FString> UFalconGraphicsOptionStatics::GetResolutionList() {
    return TArray<FString>();
}

int32 UFalconGraphicsOptionStatics::GetResolution() {
    return 0;
}

EGraphicsOptionPreset UFalconGraphicsOptionStatics::GetPreset() {
    return EGraphicsOptionPreset::PRESET_LOW;
}

bool UFalconGraphicsOptionStatics::GetMotionBlur() {
    return false;
}

TArray<FText> UFalconGraphicsOptionStatics::GetMaxFPSList() {
    return TArray<FText>();
}

int32 UFalconGraphicsOptionStatics::GetMaxFPS() {
    return 0;
}

EGraphicsQuality UFalconGraphicsOptionStatics::GetFoliageQuality() {
    return EGraphicsQuality::QUALITY_LOW;
}

TEnumAsByte<EWindowMode::Type> UFalconGraphicsOptionStatics::GetDisplayMode() {
    return EWindowMode::Fullscreen;
}

EGraphicsQuality UFalconGraphicsOptionStatics::GetDepthOfField() {
    return EGraphicsQuality::QUALITY_LOW;
}

EGraphicsOptionPreset UFalconGraphicsOptionStatics::GetDefaultPreset() {
    return EGraphicsOptionPreset::PRESET_LOW;
}

EGraphicsQuality UFalconGraphicsOptionStatics::GetBloom() {
    return EGraphicsQuality::QUALITY_LOW;
}

EGraphicsQuality UFalconGraphicsOptionStatics::GetAntiAliasing() {
    return EGraphicsQuality::QUALITY_LOW;
}

EGraphicsQuality UFalconGraphicsOptionStatics::GetAmbientOcclusion() {
    return EGraphicsQuality::QUALITY_LOW;
}

UFalconGraphicsOptionStatics::UFalconGraphicsOptionStatics() {
}

