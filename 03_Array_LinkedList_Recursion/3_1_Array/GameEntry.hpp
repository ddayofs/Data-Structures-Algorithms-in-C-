#pragma once

#include <string>

class GameEntry
{
	public:
		GameEntry(const std::string& name = "", int score = 0);
		std::string getName() const;
		int getScore() const;
	private:
		std::string name;
		int score;
};
