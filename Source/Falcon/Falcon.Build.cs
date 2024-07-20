using UnrealBuildTool;

public class Falcon : ModuleRules {
    public Falcon(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AIModule",
            "AkAudio",
            "AnimGraphRuntime",
            "AnimationCore",
            "AudioMixer",
            "Core",
            "CoreUObject",
            "Engine",
            "GameplayAbilities",
            "GameplayTags",
            "GameplayTasks",
            "InputCore",
            "LevelSequence",
            "MediaAssets",
            "MovieScene",
            "MovieSceneTracks",
            "Phasmid",
            "Slate",
            "SlateCore",
            "TfbPlugin",
            "TfbWiseExtensions",
            "UMG",
        });
    }
}
