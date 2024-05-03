#pragma once
#include <string>

class DLinkedList; // class declaration

using namespace std;

typedef string Elem; // list element type

class DNode  // doubly linked list node   
{
private:
    Elem elem; // node element value
    DNode* prev; // previous node in list
    DNode* next; // next node in list
    friend class DLinkedList; // allow DLinkedList access
};
