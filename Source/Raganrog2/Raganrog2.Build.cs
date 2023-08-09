// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Raganrog2 : ModuleRules
{
	public Raganrog2(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "EnhancedInput" });
	}
}
