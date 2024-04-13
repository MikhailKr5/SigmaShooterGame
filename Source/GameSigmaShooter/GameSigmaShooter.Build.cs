// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class GameSigmaShooter : ModuleRules
{
	public GameSigmaShooter(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
