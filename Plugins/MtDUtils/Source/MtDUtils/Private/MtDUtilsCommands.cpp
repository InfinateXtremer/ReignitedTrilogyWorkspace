// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "MtDUtilsCommands.h"

#define LOCTEXT_NAMESPACE "FMtDUtilsModule"

void FMtDUtilsCommands::RegisterCommands()
{
	UI_COMMAND(PluginAction, "MtDUtils", "Execute MtDUtils action", EUserInterfaceActionType::Button, FInputGesture());
}

#undef LOCTEXT_NAMESPACE
