#pragma once

#include <string>

class StringNode
{
	private:
		std::string elem;
		StringNode* next;

		friend class StringLinkedList;
};
