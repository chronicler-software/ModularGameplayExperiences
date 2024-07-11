// Copyright Chronicler.


#pragma once
#include "CommonGameInstance.h"

#include "ModularGameInstance.generated.h"

/**
 * Implements a number of base features of CommonGameInstance that are useful for most games.
 *
 * @todo CommonGame classes depend directly on Subsystems. This should be refactored to use Multicast delegates.
 */
UCLASS(Config="Game")
class MODULARGAMEPLAYEXPERIENCES_API UModularGameInstance : public UCommonGameInstance
{
	GENERATED_BODY()

public:
	explicit UModularGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

protected:
	void OnPreClientTravelToSession(FString& URL);

	/**
	 *	@ingroup UCommonGameInstance
	 *	@{
	 */
public:
	virtual void Init() override;
	/**
	 * @}
	 */
};
