// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "IOFileSurfer.generated.h"

/**
 * 
 */
UCLASS()
class TESTPROJECT1_API UIOFileSurfer : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	static TArray<FString> GetAllFilesInDirectory(const FString directory,
	const bool fullPath = true, const FString onlyFilesStartingWith = TEXT(""), const FString onlyFilesEndingWith = TEXT("txt"));


};
