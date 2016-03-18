// Fill out your copyright notice in the Description page of Project Settings.

#include "FracturedProject.h"
#include "FracturedProjectGameMode.h"

void AFracturedProjectGameMode::PreLogin(const FString & Options, const FString & Address, const TSharedPtr< const FUniqueNetId > & UniqueId, FString & ErrorMessage)
{
	if (AFracturedProjectGameMode::player_amount >= 2)
	{
		ErrorMessage = "Server is full, cannot join Server.";
		UE_LOG(LogTemp, Warning, TEXT("Player was rejected"));
	}
	else
	{
		Super::PreLogin(Options, Address, UniqueId, ErrorMessage);
		UE_LOG(LogTemp, Warning, TEXT("Player was accepted"));
	}

}

void AFracturedProjectGameMode::PostLogin(APlayerController * NewPlayer)
{
	Super::PostLogin(NewPlayer);
	AFracturedProjectGameMode::player_amount++;
}
