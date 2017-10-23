#include <iostream>
#include "List.h"

int main (int argc, char** argv) {
    List test;
    test.push_back(1);
    test.push_back(2);
    test.push_back(3);
    test.push_back(4);
    test.push_back(5);

    Iterator pos;
    pos = test.begin();
    pos.next();
    pos.next();
    pos.next();
    pos.next();

    test.insert(pos, 5);
    test.erase(pos);

    for (pos = test.begin(); !pos.equals(test.end()); pos.next()) {
        std::cout << pos.get() << std::endl;
    }
    return 0;
}