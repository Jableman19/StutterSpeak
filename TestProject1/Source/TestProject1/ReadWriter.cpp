// Fill out your copyright notice in the Description page of Project Settings.

#include "ReadWriter.h"


FString UReadWriter::LoadFileToString(FString Filename) {
	
	FString directory = FPaths::ConvertRelativePathToFull("/sdcard/UE4Game/TestProject1");
	FString result;
	IPlatformFile& file = FPlatformFileManager::Get().GetPlatformFile();

	if (file.CreateDirectory(*directory)) {

		FString myFile = directory + "/" + Filename;
		FFileHelper::LoadFileToString(result, *myFile);
		//std::string const stringDir = TCHAR_TO_UTF8(*directory);
		//std::cout << stringDir;
		GEngine->UEngine::AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, directory);

	}
	return result;
}

FString UReadWriter::SaveStringToFile(FString Filename, FString Data) {

	FString directory = FPaths::ConvertRelativePathToFull("/sdcard/UE4Game/TestProject1");
	FString result;
	IPlatformFile& file = FPlatformFileManager::Get().GetPlatformFile();

	if (file.CreateDirectory(*directory)) {

		FString myFile = directory + "/" + Filename;
		FFileHelper::SaveStringToFile(result, *myFile);

	}
	return Filename;
}

FString UReadWriter::RecordingDirectory(FString Filename) {

	FString directory = FPaths::ConvertRelativePathToFull("/sdcard/UE4Game/TestProject1/TestProject1/Content/Movies");
	IPlatformFile& file = FPlatformFileManager::Get().GetPlatformFile();
	FString result = directory + "/" + Filename;

	return result;
}