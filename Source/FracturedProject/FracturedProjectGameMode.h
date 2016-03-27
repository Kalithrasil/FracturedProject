// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/GameMode.h"
#include "FracturedProjectGameMode.generated.h"

/**
 * 
 */
UCLASS()
class FRACTUREDPROJECT_API AFracturedProjectGameMode : public AGameMode
{
	GENERATED_BODY()

		int player_amount = 0;

		virtual void PreLogin(const FString & Options, const FString & Address, const TSharedPtr< const FUniqueNetId > & UniqueId, FString & ErrorMessage) override;
	
		virtual void PostLogin(APlayerController * NewPlayer) override;


};
