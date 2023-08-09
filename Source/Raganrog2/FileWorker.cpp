// Fill out your copyright notice in the Description page of Project Settings.


#include "FileWorker.h"
#include "Stat.h"
#include <Windows.h>
#include <iostream>
#include <string>
using namespace std;
FileWorker::FileWorker()
{
}

FileWorker::~FileWorker()
{
}

OpenFilesStat::OpenFilesStat() {


    HANDLE fileHandle = CreateFileA("C:/Users/kangarion/Documents/Unreal Projects/Raganrog2/Source/Raganrog2/StatsCharactres.gm", GENERIC_READ, 0, NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL);
    DWORD fileSize = GetFileSize(fileHandle, NULL);
    if (fileSize == INVALID_FILE_SIZE)
    {
        CloseHandle(fileHandle);
    }
    else {

        char* fileContent = new char[fileSize];
        DWORD bytesRead;
        if (!ReadFile(fileHandle, fileContent, fileSize, &bytesRead, NULL))
        {

            delete[] fileContent;
            CloseHandle(fileHandle);

        }
        else {
            CloseHandle(fileHandle);




            // Tokenize the fileContent into lines
            char* line = strtok(fileContent, "\r\n");
            while (line != NULL) {
                // Find the colon in the line
                char* colon = strchr(line, ':');
                if (colon != NULL) {
                    // Split the line into stat name and value parts
                    *colon = '\0'; // Null-terminate the stat name part
                    FileContainerStats* contentTemp = new FileContainerStats();
                    contentTemp->stat = line;
                    contentTemp->value = colon + 1;
                    int lasChar = contentTemp->value.Len() - 1;
                    contentTemp->value.RemoveAt(lasChar, 1, true);
                    Variables.Add(contentTemp);


                }

                // Move to the next line
                line = strtok(NULL, "\r\n");
            }

            delete[] fileContent;
        }

    }
}







CreateFileStats::CreateFileStats() {

}