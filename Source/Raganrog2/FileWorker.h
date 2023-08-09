// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "Stat.h"
#include "Containers/Array.h"
#include "CoreMinimal.h"


class OpenFilesStat {
public:
	TArray<FileContainerStats*> Variables;
	OpenFilesStat();

};
class CreateFileStats {
public:
	CreateFileStats();

};
class RAGANROG2_API FileWorker
{
public:
	FileWorker();
	~FileWorker();
};
