// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Framework/Commands/Commands.h"
#include "MtDUtilsStyle.h"

class FMtDUtilsCommands : public TCommands<FMtDUtilsCommands>
{
public:

	FMtDUtilsCommands()
		: TCommands<FMtDUtilsCommands>(TEXT("MtDUtils"), NSLOCTEXT("Contexts", "MtDUtils", "MtDUtils Plugin"), NAME_None, FMtDUtilsStyle::GetStyleSetName())
	{
	}

	// TCommands<> interface
	virtual void RegisterCommands() override;

public:
	TSharedPtr< FUICommandInfo > PluginAction;
};
