// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class ARayOfHope : ModuleRules
{
	public ARayOfHope(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "EnhancedInput" });
	}
}
