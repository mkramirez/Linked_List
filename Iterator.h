#pragma once
#include <string>
#include <iostream>
#include <cassert>

#include "List.h"
#include "Node.h"

class List;
class Node;

class Iterator {
public:
    Iterator();
    int get() const;
    void next();
    void previous();
    bool equals(Iterator b) const;

    Node* position;
    List* container;
};