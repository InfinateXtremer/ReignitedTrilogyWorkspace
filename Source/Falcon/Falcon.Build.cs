// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.IO;


public class Falcon : ModuleRules
{
	public Falcon(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
		
		PublicIncludePaths.AddRange(new string[] {"Phasmid/Public"});
		PublicIncludePaths.Add(Path.Combine(ModuleDirectory, "Phasmid/Public"));
		PublicIncludePaths.Add(Path.Combine(ModuleDirectory, "Plugins/Phasmid/Public"));		
		
		PublicIncludePaths.AddRange(new string[] {"TfbWiseExtensions/Public"});
		PublicIncludePaths.Add(Path.Combine(ModuleDirectory, "TfbWiseExtensions/Public"));
		PublicIncludePaths.Add(Path.Combine(ModuleDirectory, "Plugins/TfbWiseExtensions/Public"));
	
		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "GameplayAbilities", "GameplayTags", "GameplayTasks", "UMG", "AkAudio", "Phasmid", "TfbWiseExtensions"});

		PrivateDependencyModuleNames.AddRange(new string[] { "Phasmid", "TfbWiseExtensions" });

		// Uncomment if you are using Slate UI
		PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore", "Phasmid", "TfbWiseExtensions" });
		
		 //Uncomment if you are using online features
		 PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
