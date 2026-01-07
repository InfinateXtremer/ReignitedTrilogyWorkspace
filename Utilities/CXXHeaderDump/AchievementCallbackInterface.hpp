#ifndef UE4SS_SDK_AchievementCallbackInterface_HPP
#define UE4SS_SDK_AchievementCallbackInterface_HPP

class IAchievementCallbackInterface_C : public IInterface
{

    void achievement details callback(FAchievementStruct achievement def, bool found, float Progress);
    void achievement status callback(FName achievement id, bool found, float Progress);
}; // Size: 0x28

#endif
