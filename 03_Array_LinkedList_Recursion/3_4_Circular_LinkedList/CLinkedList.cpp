#include "CLinkedList.hpp"

CircularList::CircularList() // constructor
{
    cursor = NULL; // cursor is initially NULL
}

CircularList::~CircularList() // destructor
{
    while (!empty()) // remove all but sentinels
        remove();
}

bool CircularList::empty() const // is list empty?
{
    return cursor == NULL;
}

const Elem& CircularList::back() const // get back element
{
    return cursor->elem;
}

const Elem& CircularList::front() const // get front element
{
    return cursor->next->elem;
}

void CircularList::advance() // advance cursor
{
    cursor = cursor->next;
}

void CircularList::add(const Elem& e) // add after cursor
{
    CNode* v = new CNode; // create a new node
    v->elem = e;
    if (cursor == NULL) // list is empty?
    {
        v->next = v; // v points to itself
        cursor = v; // cursor points to v
    }
    else // list is nonempty?
    {
        v->next = cursor->next; // link in v after cursor
        cursor->next = v;
    }
}

void CircularList::remove() // remove node after cursor
{
    CNode* old = cursor->next; // the node being removed
    if (old == cursor) // removing the only node?
        cursor = NULL; // list is now empty
    else
        cursor->next = old->next; // link out the old node
    delete old; // delete the old node
}
