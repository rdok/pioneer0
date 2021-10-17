// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Console/Cartridge.h"
#include "PioneerCartridge.generated.h"


UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class PIONEER_API UPioneerCartridge : public UCartridge
{

	GENERATED_BODY()

	public:
	void SetupGuessingGame();
	void HandleInvalidGuess(FString message);
	void ResetAttempts();
	bool GameHasEnded;
	void EndGame();
	void HandleGuess(FString Guess);

	virtual void BeginPlay() override;
	virtual void OnInput(const FString& Input) override;

	FString ValidateGuess(FString Response);

	private:
	FString Secret;
	int32 Attempts;
};