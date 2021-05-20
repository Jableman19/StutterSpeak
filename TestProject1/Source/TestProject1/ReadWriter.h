// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include <Runtime\Core\Public\Misc\FileHelper.h> //Adds file access
#include "ReadWriter.generated.h"

/**
 * Allows for BP nodes with a string value to read in/out to txt
 */
UCLASS()
class TESTPROJECT1_API UReadWriter : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

		UFUNCTION(BlueprintCallable, Category = "File I/O")
		static FString LoadFileToString(FString Filename);

		UFUNCTION(BlueprintCallable, Category = "File I/O")
		static FString SaveStringToFile(FString Filename, FString Data);
	
};
