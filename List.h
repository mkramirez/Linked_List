#pragma once
#include <string>
#include <iostream>
#include <cassert>

#include "Node.h"
#include "Iterator.h"

class Node;
class Iterator;

class List {
public:
    List();
    void push_back(int data);
    void insert(Iterator iter, int s);
    Iterator erase(Iterator iter);
    Iterator begin();
    Iterator end();

    Node* first;
    Node* last;
};