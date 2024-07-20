using UnrealBuildTool;

public class TfbWEEDS : ModuleRules {
    public TfbWEEDS(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "Foliage",
        });
    }
}
