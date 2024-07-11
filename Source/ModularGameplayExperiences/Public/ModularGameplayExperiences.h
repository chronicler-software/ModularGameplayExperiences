// Copyright Chronicler.

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

/**
 * @todo Requires a large number of class overrides in the Project Settings.
 *   This is an anti-pattern and should be avoided.
 */
class FModularGameplayExperiencesModule final : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};
