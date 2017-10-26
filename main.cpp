#include <iostream>
#include <cassert>
#include "List.h"

void test1(){
    List a;
    assert(a.empty());
    assert(a.size() == 0);

    Iterator it = a.begin();
    Iterator end = a.end();

    assert(it == end);
    assert(it.operator==(end));

    a.push_back(3);

    assert(!a.empty());
    assert(a.size() == 1);
}

void test2(){
    List a;
    a.push_back(1);
    a.push_back(2);

    assert(!a.empty());
    assert(a.size() == 2);

    a.push_back(3);
    a.push_back(4);
    a.push_front(0);

    assert(a.size() == 5);
}

void test3(){
    List a;
    Iterator it = a.begin();
    Iterator end = a.end();
    assert(it == end);

    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    it = a.begin();
    assert(*it == 1);
    ++it;
    assert(*it == 2);
    ++it;
    assert(*it == 3);
}

void pop_back(){
    List a;
    Iterator it = a.begin();
    Iterator end = a.end();
    assert(it.operator == (end));

    a.push_back(2);
    a.push_front(3);
    a.push_back(1);
    a.push_back(0);
    assert(a.size() == 4);

    a.pop_back();
    a.pop_front();
    a.pop_back();
    assert(a.size() == 1);
    it = a.begin();
    assert(*it == 2);
}

int erase(){
    List a;
    Iterator it = a.begin();
    Iterator end = a.end();

    a.push_back(0);
    it = a.begin();
    it = a.erase(it);

    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    it = a.begin();
    assert(*it == 1);
    ++it;
    it = a.erase(it);
    assert(*it == 3);
    assert(a.size() == 2);
    return 0;
}

void insert(){
    List a;
    Iterator it = a.begin();
    Iterator end = a.end();

    it = a.insert(it, 1);
    assert(*it == 1);
    ++it;

    it = a.insert(it, 2);
    assert(*it == 2);
    assert(a.size() == 2);
}

int main(int argc, char * args[]) {
    test1();
    std::cout << "Test 1 passed" << std::endl;
    test2();
    std::cout << "Test 2 passed" << std::endl;
    test3();
    std::cout << "Test 3 passed" << std::endl;
    pop_back();
    std::cout << "Test popback passed" << std::endl;
    erase();
    std::cout << "Test erase passed" << std::endl;
    insert();
    std::cout << "All Tests Passed" << std::endl;
}