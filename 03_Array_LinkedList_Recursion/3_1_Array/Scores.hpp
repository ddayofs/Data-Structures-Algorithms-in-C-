#pragma once

#include "GameEntry.hpp"
#include <string>
#include <exception>

class IndexOutOfBounds : public std::exception
{
	public:
		const char* what() const throw()
		{
			return "Invalid index";
		}
};

class Scores
{
public:
	Scores(int maxEnt = 10);
	~Scores();
	void add(const GameEntry& e);
	GameEntry remove(int i);
	


private:
	int maxEntries;
	int numEntries;
	GameEntry *entries;
};