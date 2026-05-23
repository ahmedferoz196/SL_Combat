// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class SL_Combat : ModuleRules
{
	public SL_Combat(ReadOnlyTargetRules Target) : base(Target)
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
			"SL_Combat",
			"SL_Combat/Variant_Platforming",
			"SL_Combat/Variant_Platforming/Animation",
			"SL_Combat/Variant_Combat",
			"SL_Combat/Variant_Combat/AI",
			"SL_Combat/Variant_Combat/Animation",
			"SL_Combat/Variant_Combat/Gameplay",
			"SL_Combat/Variant_Combat/Interfaces",
			"SL_Combat/Variant_Combat/UI",
			"SL_Combat/Variant_SideScrolling",
			"SL_Combat/Variant_SideScrolling/AI",
			"SL_Combat/Variant_SideScrolling/Gameplay",
			"SL_Combat/Variant_SideScrolling/Interfaces",
			"SL_Combat/Variant_SideScrolling/UI"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
