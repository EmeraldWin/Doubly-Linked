#include <iostream>
#include <cstdlib>

using namespace std;

// Lab2 Partner: Gina M.

#include "IntList.h"

int main() {
    IntList list;

    list.push_front(11);
    list.push_front(72);
    list.push_front(23);
    list.push_front(4);

    cout << "List should be: 4, 23, 72, 11:" << endl;
    cout << list << endl;
    cout << endl;

    list.pop_back();
    cout << "List should be: 4, 23, 72" << endl;
    cout << list << endl;
    cout << endl;

    list.pop_back();
    cout << "List should be: 4, 23" << endl;
    cout << list << endl;
    cout << endl;

    list.pop_front();
    cout << "List should be: 23" << endl;
    cout << list << endl;
    cout << endl;

    list.pop_front();
    cout << "List should be: -nothing-" << endl;
    cout << list << endl;
    cout << endl;

    cout << "Testing empty(): " << endl;
    cout << "Should return: Empty" << endl;
    if (list.empty()) {
        cout << "Empty" << endl;
    }
    cout << endl;

    cout << "Testing pop_back on empty list" << endl;
    list.pop_back();
    cout << "List should be: -nothing-" << endl;
    cout << list << endl;
    cout << endl;

    cout << "Testing pop_front on empty list" << endl;
    list.pop_front();
    cout << "List should be: -nothing-" << endl;
    cout << list << endl;
    cout << endl;

    cout << "Populating list again with push_front and push_back" << endl;
    list.push_front(12);
    list.push_back(22);
    list.push_front(9);
    list.push_front(3);
    list.push_front(34);
    list.push_back(57);
    list.push_back(4);
    list.push_front(1);
    cout << "List should be: 1, 34, 3, 9, 12, 22, 57, 4" << endl;
    cout << list << endl;
    cout << endl;

    cout << "Testing printReverse()" << endl;
    cout << "List should be : 4, 57, 22, 12, 9, 3, 34, 1" << endl;
    list.printReverse();
    cout << endl;
    cout << endl;

    cout << "Pop_front and pop_back until empty" << endl;
    list.pop_front();
    list.pop_back();
    list.pop_front();
    list.pop_back();
    list.pop_front();
    list.pop_back();
    list.pop_front();
    list.pop_back();
    cout << "Checking if list is empty(), should return empty" << endl;
    if (list.empty()) {
        cout << "Empty" << endl;
    }

    list.pop_back();
    list.pop_front();

    cout << "List here:" << endl;
    cout << list;
    

    cout << endl;

}