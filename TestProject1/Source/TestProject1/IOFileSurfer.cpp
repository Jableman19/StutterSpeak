// Fill out your copyright notice in the Description page of Project Settings.


#include "IOFileSurfer.h"

 /**
 Gets all the files in a given directory.
 @param directory The full path of the directory we want to iterate over.
 @param fullpath Whether the returned list should be the full file paths or just the filenames.
 @param onlyFilesStartingWith Will only return filenames starting with this string. Also applies onlyFilesEndingWith if specified.
 @param onlyFilesEndingWith Will only return filenames ending with this string (it looks at the extension as well!). Also applies onlyFilesStartingWith if specified.
 @return A list of files (including the extension).
 */
TArray<FString> UIOFileSurfer::GetAllFilesInDirectory(const FString directory, const bool fullPath, const FString onlyFilesStartingWith, const FString onlyFilesWithExtension)
{
    // Get all files in directory
    TArray<FString> directoriesToSkip;
    IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();
    FLocalTimestampDirectoryVisitor Visitor(PlatformFile, directoriesToSkip, directoriesToSkip, false);
    PlatformFile.IterateDirectory(*directory, Visitor);
    TArray<FString> files;

    for (TMap<FString, FDateTime>::TIterator TimestampIt(Visitor.FileTimes); TimestampIt; ++TimestampIt)
    {
        const FString filePath = TimestampIt.Key();
        const FString fileName = FPaths::GetCleanFilename(filePath);
        bool shouldAddFile = true;

        // Check if filename starts with required characters
        if (!onlyFilesStartingWith.IsEmpty())
        {
            const FString left = fileName.Left(onlyFilesStartingWith.Len());

            if (!(fileName.Left(onlyFilesStartingWith.Len()).Equals(onlyFilesStartingWith)))
                shouldAddFile = false;
        }

        // Check if file extension is required characters
        if (!onlyFilesWithExtension.IsEmpty())
        {
            if (!(FPaths::GetExtension(fileName, false).Equals(onlyFilesWithExtension, ESearchCase::IgnoreCase)))
                shouldAddFile = false;
        }

        // Add full path to results
        if (shouldAddFile)
        {
            files.Add(fullPath ? filePath : fileName);
        }
    }

    return files;
}
