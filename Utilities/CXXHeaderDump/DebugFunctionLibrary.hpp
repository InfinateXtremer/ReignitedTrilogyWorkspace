#ifndef UE4SS_SDK_DebugFunctionLibrary_HPP
#define UE4SS_SDK_DebugFunctionLibrary_HPP

class UDebugFunctionLibrary_C : public UBlueprintFunctionLibrary
{

    void setPhasmidCullDisabled(bool On, class UObject* __WorldContext);
    void getPhasmidCullDisabled(class UObject* __WorldContext, bool& Value);
    void set hover mode(bool On, class UObject* __WorldContext);
    void get hover mode(class UObject* __WorldContext, bool& On);
    void set infinite lives(bool On, class UObject* __WorldContext);
    void get infinite lives(class UObject* __WorldContext, bool& On);
    void set god mode(bool On, class UObject* __WorldContext);
    void get god mode(class UObject* __WorldContext, bool& On);
    void set enemy debug draw state(EEnemyDebugDrawOverrideType override state, bool do save, class UObject* __WorldContext);
    void get viewmode collision unlit(class UObject* __WorldContext, bool& Value);
    void set viewmode collision unlit(bool On, class UObject* __WorldContext);
    void Get Retain Progression Save Data(class UObject* __WorldContext, bool& On);
    void Set Retain Progression Save Data(bool On, class UObject* __WorldContext);
    void Kill All Enemies(class UObject* __WorldContext);
    void Get Toggle Setting(FString setting name, class UObject* __WorldContext, bool& On);
    void Add Toggle Setting(FString setting name, bool On, class UObject* __WorldContext);
    void Get Invert Y(class UObject* __WorldContext, bool& On);
    void set Invert Y(bool On, class UObject* __WorldContext);
    void Get Autoload(class UObject* __WorldContext, bool& On);
    void Set Autoload(bool On, class UObject* __WorldContext);
    void Get Skip Cutscenes(class UObject* __WorldContext, bool& skip 'em);
    void Set Skip Cutscenes(bool Skip, class UObject* __WorldContext);
    void Clear All Debug Settings(class UObject* __WorldContext);
    void Get Debug Setting By Name(FString Name, class UObject* __WorldContext, FDebugSettingData& debug setting data, bool& setting found);
    void Load Debug Settings(class UObject* __WorldContext);
    void Save Debug Setting(FDebugSettingData debug setting, class UObject* __WorldContext);
}; // Size: 0x28

#endif
