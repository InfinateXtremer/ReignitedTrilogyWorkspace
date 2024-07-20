using UnrealBuildTool;

public class TfbPlugin : ModuleRules {
    public TfbPlugin(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AkAudio",
            "AnimGraphRuntime",
            "AnimationCore",
            "AudioMixer",
            "Core",
            "CoreUObject",
            "Engine",
            "InputCore",
            "LevelSequence",
            "MediaAssets",
            "MovieScene",
            "MovieSceneTracks",
            "Slate",
            "SlateCore",
            "UMG",
        });
    }
}
