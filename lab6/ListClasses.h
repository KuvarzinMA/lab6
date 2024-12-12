#ifndef LISTCLASSES_H
#define LISTCLASSES_H

#include <iostream>

// Шаблон класса однонаправленного списка
template <typename T>
class SinglyLinkedList {
private:
    struct Node {
        T data;
        Node* next;
        Node(const T& value) : data(value), next(nullptr) {}
    };
    Node* head;

public:
    SinglyLinkedList() : head(nullptr) {}
    ~SinglyLinkedList();

    void addElement(const T& value);
    void removeElement(const T& value);
    void moveFirstToEnd();
    void printList() const;
};

// Шаблон класса двунаправленного списка
template <typename T>
class DoublyLinkedList {
private:
    struct Node {
        T data;
        Node* prev;
        Node* next;
        Node(const T& value) : data(value), prev(nullptr), next(nullptr) {}
    };
    Node* head;
    Node* tail;

public:
    DoublyLinkedList() : head(nullptr), tail(nullptr) {}
    ~DoublyLinkedList();

    void addElement(const T& value);
    void removeElement(const T& value);
    void removeNodesWithEqualNeighbors();
    void printList() const;
};

#include "ListClasses.tpp" // Реализация методов шаблонных классов

#endif // LISTCLASSES_H
