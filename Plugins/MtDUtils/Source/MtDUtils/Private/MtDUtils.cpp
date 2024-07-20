// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "MtDUtils.h"
#include "MtDUtilsStyle.h"
#include "MtDUtilsCommands.h"
#include "Misc/MessageDialog.h"
#include "Framework/MultiBox/MultiBoxBuilder.h"

#include "LevelEditor.h"

static const FName MtDUtilsTabName("MtDUtils");

#define LOCTEXT_NAMESPACE "FMtDUtilsModule"

void FMtDUtilsModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	
	FMtDUtilsStyle::Initialize();
	FMtDUtilsStyle::ReloadTextures();

	FMtDUtilsCommands::Register();
	
	PluginCommands = MakeShareable(new FUICommandList);

	PluginCommands->MapAction(
		FMtDUtilsCommands::Get().PluginAction,
		FExecuteAction::CreateRaw(this, &FMtDUtilsModule::PluginButtonClicked),
		FCanExecuteAction());
		
	FLevelEditorModule& LevelEditorModule = FModuleManager::LoadModuleChecked<FLevelEditorModule>("LevelEditor");
	
	{
		TSharedPtr<FExtender> MenuExtender = MakeShareable(new FExtender());
		MenuExtender->AddMenuExtension("WindowLayout", EExtensionHook::After, PluginCommands, FMenuExtensionDelegate::CreateRaw(this, &FMtDUtilsModule::AddMenuExtension));

		LevelEditorModule.GetMenuExtensibilityManager()->AddExtender(MenuExtender);
	}
	
	{
		TSharedPtr<FExtender> ToolbarExtender = MakeShareable(new FExtender);
		ToolbarExtender->AddToolBarExtension("Settings", EExtensionHook::After, PluginCommands, FToolBarExtensionDelegate::CreateRaw(this, &FMtDUtilsModule::AddToolbarExtension));
		
		LevelEditorModule.GetToolBarExtensibilityManager()->AddExtender(ToolbarExtender);
	}
}

void FMtDUtilsModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
	FMtDUtilsStyle::Shutdown();

	FMtDUtilsCommands::Unregister();
}

void FMtDUtilsModule::PluginButtonClicked()
{

	FString SaveDir = FPaths::ProjectSavedDir();
	FString CookedDir = TEXT("Cooked\\WindowsNoEditor\\Falcon");
	FString Combined = FPaths::Combine(SaveDir, CookedDir);
	UE_LOG(LogTemp, Warning, TEXT("Project file path is %s"), *Combined);
	FPlatformProcess::ExploreFolder(*Combined);
}

void FMtDUtilsModule::AddMenuExtension(FMenuBuilder& Builder)
{
	Builder.AddMenuEntry(FMtDUtilsCommands::Get().PluginAction);
}

void FMtDUtilsModule::AddToolbarExtension(FToolBarBuilder& Builder)
{
	Builder.AddToolBarButton(FMtDUtilsCommands::Get().PluginAction);
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FMtDUtilsModule, MtDUtils)