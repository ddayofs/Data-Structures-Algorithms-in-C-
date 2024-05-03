#include "GameEntry.hpp"

GameEntry::GameEntry(const std::string& name, int score)
	: name(name), score(score)
{
}

std::string GameEntry::getName() const
{
	return name;
}

int GameEntry::getScore() const
{
	return score;

}
