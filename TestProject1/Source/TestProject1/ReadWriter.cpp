// Fill out your copyright notice in the Description page of Project Settings.


#include "ReadWriter.h"

FString UReadWriter::LoadFileToString(FString Filename) {

	FString directory = FPaths::ConvertRelativePathToFull("/sdcard/UE4Game/TestProject1/TestProject1/Content/Stutter_Speak_Content/Texts");
	FString result;
	IPlatformFile& file = FPlatformFileManager::Get().GetPlatformFile();

	if (file.CreateDirectory(*directory)) {

		FString myFile = directory + "/" + Filename;
		FFileHelper::LoadFileToString(result, *myFile);

	}
	return result;
}

FString UReadWriter::SaveStringToFile(FString Filename, FString Data) {

	FString directory = FPaths::ConvertRelativePathToFull("/sdcard/UE4Game/TestProject1/TestProject1/Content/Stutter_Speak_Content/Texts");
	FString result;
	IPlatformFile& file = FPlatformFileManager::Get().GetPlatformFile();

	if (file.CreateDirectory(*directory)) {

		FString myFile = directory + "/" + Filename;
		FFileHelper::SaveStringToFile(result, *myFile);

	}
	return Filename;
}