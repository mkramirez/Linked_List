#include "Iterator.h"

Iterator::Iterator() {
    position = nullptr;
    container = nullptr;
}

int Iterator::get() const {
    assert (position != nullptr);
    return position->data;
}

void Iterator::next() {
    assert (position != nullptr);
    position = position->next;
}

void Iterator::previous() {
    assert (position != container-> first);
    if (position == nullptr) {
        position = container->last;
    }
    else {
        position = position->previous;
    }
}

bool Iterator::equals(Iterator b) const {
    return position == b.position;
}