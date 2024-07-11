// Copyright Chronicler.

using UnrealBuildTool;

public class ModularGameplayExperiences : ModuleRules
{
	public ModularGameplayExperiences(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		
		PublicIncludePaths.AddRange(
			new string[] {
				// ... add public include paths required here ...
			}
			);
				
		
		PrivateIncludePaths.AddRange(
			new string[] {
				// ... add other private include paths required here ...
			}
			);
			
		
		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"CommonGame",
				"CommonInput",
				"CommonLoadingScreen",
				"CommonUser",
				"Core",
				"GameFeatures",
				"ModularGameplay",
				"ModularGameplayActors",
				"ModularGameplayData",
				"NetCore",
				"UMG",
			}
			);
			
		
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"CoreUObject",
				"Engine",
				"EngineSettings",
				"EnhancedInput",
				"GameplayTags",
				"GameplayMessageRuntime",
				"Slate",
				"SlateCore",
			}
			);
		
		
		DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
				// ... add any modules that your module loads dynamically here ...
			}
			);
	}
}
