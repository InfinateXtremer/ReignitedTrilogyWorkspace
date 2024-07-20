using UnrealBuildTool;

public class FalconTarget : TargetRules {
	public FalconTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Game;
		//DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.AddRange(new string[] {
			"ClothingSystemRuntime",
			"Falcon",
			"GeometryCache",
		});
	}
}
