#pragma once
#include <string>
#include <iostream>
#include <cassert>

class List;
class Iterator;

class Node {
public:
    Node(int s);

    Node* previous;
    Node* next;
    int data;
};