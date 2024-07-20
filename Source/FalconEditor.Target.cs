using UnrealBuildTool;

public class FalconEditorTarget : TargetRules {
	public FalconEditorTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Editor;
		//DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.AddRange(new string[] {
			"ClothingSystemRuntime",
			"Falcon",
			"GeometryCache",
		});
	}
}
