// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class SurviveJumper : ModuleRules
{
	public SurviveJumper(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"AIModule",
			"StateTreeModule",
			"GameplayStateTreeModule",
			"UMG",
			"Slate"
		});

		PrivateDependencyModuleNames.AddRange(new string[] { });

		PublicIncludePaths.AddRange(new string[] {
			"SurviveJumper",
			"SurviveJumper/Variant_Platforming",
			"SurviveJumper/Variant_Platforming/Animation",
			"SurviveJumper/Variant_Combat",
			"SurviveJumper/Variant_Combat/AI",
			"SurviveJumper/Variant_Combat/Animation",
			"SurviveJumper/Variant_Combat/Gameplay",
			"SurviveJumper/Variant_Combat/Interfaces",
			"SurviveJumper/Variant_Combat/UI",
			"SurviveJumper/Variant_SideScrolling",
			"SurviveJumper/Variant_SideScrolling/AI",
			"SurviveJumper/Variant_SideScrolling/Gameplay",
			"SurviveJumper/Variant_SideScrolling/Interfaces",
			"SurviveJumper/Variant_SideScrolling/UI"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
