#include "PatternManager.h"


void PatternManager::bomb(int range, string cordinates)
{
	
}

void PatternManager::cross(int range, string cordinates)
{
	
}

void PatternManager::Xshot(int range, string cordinates)
{
	
}

void PatternManager::horizontal(int range, string cordinates)
{
	
}

void PatternManager::vertical(int range, string cordinates)
{
	
}

void PatternManager::coldWarGoneWrong()
{
	
}

void PatternManager::coldWarGoneWrong(int range, string cordinates)
{
	
}


bool PatternManager::checkFirstAxis(char Check)
{
	if (Check == 'A' ||
		Check == 'B' ||
		Check == 'C' ||
		Check == 'D' ||
		Check == 'E' ||
		Check == 'F' ||
		Check == 'G' ||
		Check == 'H')
		return true;
	else
		return false;
}


bool PatternManager::checkSecondAxis(char Check)
{
	if (Check == '1' ||
		Check == '2' ||
		Check == '3' ||
		Check == '4' ||
		Check == '5' ||
		Check == '6' ||
		Check == '7' ||
		Check == '8')
		return true;
	else
		return false;
}
