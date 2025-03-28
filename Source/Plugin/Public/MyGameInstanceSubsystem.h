// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "MyGameInstanceSubsystem.generated.h"

/**
 * 
 */
UCLASS()
class PLUGIN_API UMyGameInstanceSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	void SetUserName(const FString& NewUserName);

	UFUNCTION(BlueprintCallable, BlueprintPure)
	FString GetUserName() const;

private:
	FString UserName = TEXT("Unknown");
	
};
