#pragma once

#include "StringNode.hpp"
#include <string>

class StringLinkedList
{
	public:
		StringLinkedList();
		~StringLinkedList();
		bool empty() const;
		const std::string& front() const;
		void addFront(const std::string& e);
		void removeFront();
	private:
		StringNode* head;
};