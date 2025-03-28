// MyIDPluginBPLibrary.h

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "MyIDPluginBPLibrary.generated.h"

UCLASS()
class UMyIDPluginBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Execute Sample function", Keywords = "MyIDPlugin sample test testing"), Category = "MyIDPluginTesting")
	static float MyIDPluginSampleFunction(float Param);

public:
	UFUNCTION(BlueprintCallable, Category = "MyIDPlugin|User")
	static void SetUserName(const FString& NewName);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "MyIDPlugin|User")
	static FString GetUserName();

private:
	static FString UserName;
};
