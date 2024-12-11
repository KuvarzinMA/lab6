#ifndef LISTCLASSES_H
#define LISTCLASSES_H

#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <string>
#include <algorithm>

// Однонаправленный список
class SinglyLinkedList {
private:
    struct Node {
        int data;
        Node* next;
        Node(int value) : data(value), next(nullptr) {}
    };
    Node* head;

public:
    SinglyLinkedList() : head(nullptr) {}
    ~SinglyLinkedList();

    void addElement(int value);
    void removeElement(int value);
    void moveFirstToEnd();
    void printList();
};

// Двунаправленный список
class DoublyLinkedList {
private:
    struct Node {
        int data;
        Node* prev;
        Node* next;
        Node(int value) : data(value), prev(nullptr), next(nullptr) {}
    };
    Node* head;
    Node* tail;

public:
    DoublyLinkedList() : head(nullptr), tail(nullptr) {}
    ~DoublyLinkedList();

    void addElement(int value);
    void removeElement(int value);
    void removeNodesWithEqualNeighbors();
    void printList();
};



#endif // LISTCLASSES_H
