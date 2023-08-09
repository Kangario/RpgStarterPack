// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "GameFramework/Character.h"
#include "CoreMinimal.h"


class FileContainerStats {
public:
	FString stat;
	FString value;
	FileContainerStats();
};
class   Force {
public:
	float forceEntity;
	Force();

};
class Dexterity {
public:
	float dexterityEntity;
	Dexterity();

};
class Intelligence {
public:
	float intelligenceEntity;
	Intelligence();

};
class Constitution {
public:
	float constitutionEntity;
	Constitution();

};
class Wisdom {
public:
	float wisdomEntity;
	Wisdom();

};
class Charisma {
public:
	float charismaEntity;
	Charisma();

};
class RAGANROG2_API Stat
{
public:
	Stat();
	~Stat();
};
