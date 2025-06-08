// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class PatronBuilder : ModuleRules
{
	public PatronBuilder(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
