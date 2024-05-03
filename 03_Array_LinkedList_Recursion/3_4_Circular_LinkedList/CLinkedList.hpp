#pragma once

#include "CNode.hpp"
#include <string>

using namespace std;

typedef string Elem; // list element type

class CircularList // a circularly linked list
{
public:
    CircularList(); // constructor
    ~CircularList(); // destructor
    bool empty() const; // is list empty?
    const Elem& front() const; // get front element
    const Elem& back() const; // get back element
    void advance(); // advance
    void add(const Elem& e); // add after cursor
    void remove(); // remove node after cursor

private:
    CNode* cursor; // the cursor
}; // end of class CircularList
