using UnrealBuildTool;

public class Phasmid : ModuleRules {
    public Phasmid(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AIModule",
            "AkAudio",
            "AnimGraphRuntime",
            "AnimationCore",
            "Core",
            "CoreUObject",
            "Engine",
            "GameplayAbilities",
            "GameplayTags",
            "GameplayTasks",
            "InputCore",
            "LevelSequence",
            "MovieScene",
            "MovieSceneTracks",
            "Slate",
            "SlateCore",
            "TfbWiseExtensions",
            "UMG",
        });
    }
}
