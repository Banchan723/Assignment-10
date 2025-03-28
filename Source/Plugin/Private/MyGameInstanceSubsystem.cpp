// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameInstanceSubsystem.h"

void UMyGameInstanceSubsystem::SetUserName(const FString& NewUserName)
{
	UserName = NewUserName;
	UE_LOG(LogTemp, Warning, TEXT("GameInstance Subsystem: UserName set to %s"), *UserName);
}

FString UMyGameInstanceSubsystem::GetUserName() const
{
	return UserName;
}