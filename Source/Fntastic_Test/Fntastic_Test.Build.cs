// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Fntastic_Test : ModuleRules
{
	public Fntastic_Test(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
