#pragma once

#include <string>

using namespace std;

typedef string Elem; // list element type

class CNode // circularly linked list node
{
private:
    Elem elem; // linked list element value
    CNode* next; // next item in the list

    friend class CircularList; // provide CircularList access
}; // end of class CNode
