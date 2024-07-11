// Copyright Chronicler.

#include "ModularGameplayExperiences.h"

#include "ModularGameplayExperiencesLogs.h"

#define LOCTEXT_NAMESPACE "FModularGameplayExperiencesModule"

void FModularGameplayExperiencesModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
}

void FModularGameplayExperiencesModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE

DEFINE_LOG_CATEGORY(LogModularGameplayExperiences);

IMPLEMENT_MODULE(FModularGameplayExperiencesModule, ModularGameplayExperiences)
