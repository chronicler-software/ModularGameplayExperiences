// Copyright Chronicler.

#pragma once

#include "CommonSessionSubsystem.h"
#include "CommonUserSubsystem.h"
#include "ModularExperienceDefinition.h"
#include "ModularGameMode.h"
#include "DataAsset/ModularPawnData.h"

#include "ModularExperienceGameMode.generated.h"


/**
 * Post login event, triggered when a player or bot joins the game as well as after seamless and non seamless travel.
 *
 * This is called after the player has finished initialization.
 */
DECLARE_MULTICAST_DELEGATE_TwoParams(FOnModularGameModePlayerInitialized, AGameModeBase* /*GameMode*/, AController* /*NewPlayer*/);

/**
 * Game mode that defers to Gameplay Experiences for flexible functionality.
 *
 * Automatically sets up Pawn spawning data from ModularPawnData applied with the ModularPawnComponent.
 */
UCLASS(Config="Game", Meta=(ShortTooltip="The base game mode class used by this project."))
class MODULARGAMEPLAYEXPERIENCES_API AModularExperienceGameMode : public AModularGameModeBase
{
	GENERATED_BODY()

public:
	explicit AModularExperienceGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	UFUNCTION(BlueprintCallable, Category = "Lyra|Pawn")
	const UModularPawnData* GetPawnDataForController(const AController* InController) const;

	// Restart (respawn) the specified player or bot next frame
	// - If bForceReset is true, the controller will be reset this frame (abandoning the currently possessed pawn, if any)
	UFUNCTION(BlueprintCallable)
	void RequestPlayerRestartNextFrame(AController* Controller, bool bForceReset = false);

	// Agnostic version of PlayerCanRestart that can be used for both player bots and players
	virtual bool ControllerCanRestart(AController* Controller);

	// Delegate called on player initialization, described above
	FOnModularGameModePlayerInitialized OnGameModePlayerInitialized;

	/**
	 * @ingroup AGameModeBase
	 * @{
	 */
	virtual UClass* GetDefaultPawnClassForController_Implementation(AController* InController) override;

	virtual void InitGame(const FString& MapName, const FString& Options, FString& ErrorMessage) override;

	virtual APawn* SpawnDefaultPawnAtTransform_Implementation(AController* NewPlayer, const FTransform& SpawnTransform) override;

	/**
	 * Disables spawning at start spots since that is now handled by the spawn management component.
	 *
	 * @param Player
	 * @return false
	 */
	virtual bool ShouldSpawnAtStartSpot(AController* Player) override;

	virtual void HandleStartingNewPlayer_Implementation(APlayerController* NewPlayer) override;

	virtual AActor* ChoosePlayerStart_Implementation(AController* Player) override;

	virtual void FinishRestartPlayer(AController* NewPlayer, const FRotator& StartRotation) override;

	virtual bool PlayerCanRestart_Implementation(APlayerController* Player) override;

	virtual void InitGameState() override;

	/**
	 * Disables start spots until after PostLogin.
	 * The experience needs to be loaded before we can choose a start spot.
	 *
	 * @param Player
	 * @param Portal
	 * @param OutErrorMessage
	 * @return true
	 */
	virtual bool UpdatePlayerStartSpot(AController* Player, const FString& Portal, FString& OutErrorMessage) override;

	virtual void GenericPlayerInitialization(AController* NewPlayer) override;

	virtual void FailedToRestartPlayer(AController* NewPlayer) override;
	/**
	 * @}
	 */

protected:
	UFUNCTION()
	void OnUserInitializedForDedicatedServer(
		const UCommonUserInfo* UserInfo,
		bool bSuccess,
		FText Error,
		ECommonUserPrivilege RequestedPrivilege,
		ECommonUserOnlineContext OnlineContext);

	void OnExperienceLoaded(const UModularExperienceDefinition* CurrentExperience);
	bool IsExperienceLoaded() const;
	void OnMatchAssignmentGiven(FPrimaryAssetId ExperienceId, const FString& ExperienceIdSource);
	void HandleMatchAssignmentIfNotExpectingOne();
	// @todo Encapsulate this in multiple hosting options.
	bool TryDedicatedServerLogin();
	void HostDedicatedServerMatch(ECommonSessionOnlineMode OnlineMode);

};
