#include "List.h"

List::List() {
    first = nullptr;
    last = nullptr;
}

void List::push_back(int data) {
    Node* new_node = new Node(data);
    if (last == nullptr) {
        first = new_node;
        last = new_node;
    }
    else {
        new_node->previous = last;
        last->next = new_node;
        last = new_node;
    }
}

void List::insert(Iterator iter, int s) {
    if (iter.position == nullptr) {
        push_back(s);
        return;
    }

    Node* after = iter.position;
    Node* before = after->previous;
    Node* new_node = new Node(s);
    new_node->previous = before;
    new_node->next = after;
    after->previous = new_node;
    if (before == nullptr) {
        first = new_node;
    }
    else {
        before->next = new_node;
    }
}

Iterator List::erase(Iterator iter) {
    assert (iter.position != nullptr);
    Node* remove = iter.position;
    Node* before = remove->previous;
    Node* after = remove->next;
    if (remove == first) {
        first = after;
    }
    else {
        before->next = after;
    }
    if (remove == last) {
        last = before;
    }
    else {
        after->previous = before;
    }
    delete remove;
    Iterator r;
    r.position = after;
    r.container = this;
    return r;
}

Iterator List::begin() {
    Iterator iter;
    iter.position = first;
    iter.container = this;
    return iter;
}

Iterator List::end() {
    Iterator iter;
    iter.position = nullptr;
    iter.container = this;
    return iter;
}