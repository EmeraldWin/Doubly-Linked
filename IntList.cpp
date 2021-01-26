#include <iostream>
#include <cstdlib>

using namespace std;

#include "IntList.h"

IntList::IntList() {
    dummyHead = new IntNode(0);
    dummyTail = new IntNode(0);
    dummyHead->next = dummyTail;
    dummyTail->prev = dummyHead;
}

IntList::~IntList() {
    cout << "Entering destructor" << endl;

    IntNode* curr = dummyHead;
    IntNode* temp = dummyHead;
    while (curr != nullptr) {
        curr = curr->next;
        delete temp;
        temp = curr;
    }

    cout << "Exiting destructor" << endl;
}

void IntList::push_front(int value) {
    IntNode* newNode = new IntNode(value);
    IntNode* secondNode = dummyHead->next;
    newNode->next = dummyHead->next;
    newNode->prev = dummyHead;
    dummyHead->next = newNode;
    secondNode->prev = newNode;
}

void IntList:: push_back(int value) {
    IntNode* newNode = new IntNode(value);
    IntNode* secondLastNode = dummyTail->prev;
    newNode->prev = dummyTail->prev;
    newNode->next = dummyTail;
    dummyTail->prev = newNode;
    secondLastNode->next = newNode;
}

void IntList::pop_front() {
    if (!empty()) {
        IntNode* curr = dummyHead->next;
        IntNode* follow = curr->next;
        dummyHead->next = curr->next;
        follow->prev = dummyHead;
        delete curr;
    }
}

void IntList::pop_back() {
    if (!empty()) {
        IntNode* curr = dummyTail->prev;
        IntNode* before = curr->prev;
        dummyTail->prev = curr->prev;
        before->next = curr->next;
        delete curr;
    }
}

bool IntList::empty() const {
    if (dummyHead->next == dummyTail) {
        return true;
    }
    return false;
}

void IntList::printReverse() const {
    IntNode* curr = dummyTail->prev;
    while (curr != dummyHead) {
        cout << curr->data << " ";
        curr = curr->prev;
    }
}

ostream& operator<<(ostream &out, const IntList &rhs) {
    if (rhs.empty()) {
        return out;
    }
    IntNode* curr = rhs.dummyHead;
    while(curr->next != rhs.dummyTail) {
        if (curr == rhs.dummyHead) {
            curr = curr->next;
            out << curr->data;
        }
        else {
            curr = curr->next;
            out << " " << curr->data;
        }
    }
    return out;
}