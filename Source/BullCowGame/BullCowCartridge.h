// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Console/Cartridge.h"
#include "BullCowCartridge.generated.h"


UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class BULLCOWGAME_API UBullCowCartridge : public UCartridge
{

	GENERATED_BODY()

	public:
	void InitGuessParams();

	virtual void BeginPlay() override;
	virtual void OnInput(const FString& Input) override;
	FString GetIsogramValidationMessage(FString Input);

	private:
	FString IsoGram;
	int32 Attempts;
};
