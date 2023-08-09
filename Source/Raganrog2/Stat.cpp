// Fill out your copyright notice in the Description page of Project Settings.


#include "Stat.h"

Stat::Stat()
{
	Force* force = new Force();
	Dexterity* dexterity = new Dexterity();
	Intelligence* intelligence = new Intelligence();
	Constitution* constitution = new Constitution();
	Wisdom* wisdom = new Wisdom();
	Charisma* charisma = new Charisma();
}

Stat::~Stat()
{
}

Force::Force()
{
	forceEntity = 10;

};
Dexterity::Dexterity()
{
	dexterityEntity = 10;

};
Intelligence::Intelligence()
{
	intelligenceEntity = 10;

};
Constitution::Constitution()
{
	constitutionEntity = 10;

};
Wisdom::Wisdom()
{
	wisdomEntity = 10;

};
Charisma::Charisma()
{
	charismaEntity = 10;

};
FileContainerStats::FileContainerStats()
{
}
