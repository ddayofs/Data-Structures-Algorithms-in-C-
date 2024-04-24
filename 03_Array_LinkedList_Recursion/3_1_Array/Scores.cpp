#include "Scores.hpp"

Scores::Scores(int maxEnt)
	: maxEntries(maxEnt), numEntries(0), entries(new GameEntry[maxEnt])
{
}

Scores::~Scores()
{
	delete[] entries;
}

void Scores::add(const GameEntry& e)
{
	int newScore = e.getScore();
	if (numEntries == maxEntries)
	{
		if (newScore <= entries[maxEntries - 1].getScore())
		{
			return;
		}
	}
	else
	{
		++numEntries;
	}

	int i = numEntries - 2;
	while (0 <= i && entries[i].getScore() < newScore)
	{
		entries[i + 1] = entries[i];
		i--;
	}
	entries[i + 1] = e;
}

GameEntry Scores::remove(int i)
{
	if (i < 0 || numEntries <= i)
	{
		throw IndexOutOfBounds();
	}

	GameEntry e = entries[i];// Save the removed entry
	for (int j = i + 1; j < numEntries; j++)
	{
		entries[j - 1] = entries[j];
	}
	numEntries--;
	return e;
}