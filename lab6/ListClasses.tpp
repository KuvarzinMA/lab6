#ifndef LISTCLASSES_TPP
#define LISTCLASSES_TPP

#include "ListClasses.h"

// ----------- Реализация однонаправленного списка -----------
template <typename T>
SinglyLinkedList<T>::~SinglyLinkedList() {
    Node* current = head;
    while (current) {
        Node* toDelete = current;
        current = current->next;
        delete toDelete;
    }
}

template <typename T>
void SinglyLinkedList<T>::addElement(const T& value) {
    Node* newNode = new Node(value);
    if (!head) {
        head = newNode;
    } else {
        Node* temp = head;
        while (temp->next) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

template <typename T>
void SinglyLinkedList<T>::removeElement(const T& value) {
    if (!head) return;
    if (head->data == value) {
        Node* toDelete = head;
        head = head->next;
        delete toDelete;
        return;
    }
    Node* current = head;
    while (current->next && current->next->data != value) {
        current = current->next;
    }
    if (current->next) {
        Node* toDelete = current->next;
        current->next = current->next->next;
        delete toDelete;
    }
}

template <typename T>
void SinglyLinkedList<T>::moveFirstToEnd() {
    if (!head || !head->next) return;

    Node* first = head;
    head = head->next;
    first->next = nullptr;

    Node* temp = head;
    while (temp->next) {
        temp = temp->next;
    }
    temp->next = first;
}

template <typename T>
void SinglyLinkedList<T>::printList() const {
    Node* current = head;
    while (current) {
        std::cout << current->data << " ";
        current = current->next;
    }
    std::cout << std::endl;
}

// ----------- Реализация двунаправленного списка -----------
template <typename T>
DoublyLinkedList<T>::~DoublyLinkedList() {
    Node* current = head;
    while (current) {
        Node* toDelete = current;
        current = current->next;
        delete toDelete;
    }
}

template <typename T>
void DoublyLinkedList<T>::addElement(const T& value) {
    Node* newNode = new Node(value);
    if (!head) {
        head = tail = newNode;
    } else {
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
}

template <typename T>
void DoublyLinkedList<T>::removeElement(const T& value) {
    if (!head) return;

    Node* current = head;
    while (current && current->data != value) {
        current = current->next;
    }
    if (!current) return;

    if (current == head) {
        head = head->next;
        if (head) head->prev = nullptr;
    } else if (current == tail) {
        tail = tail->prev;
        if (tail) tail->next = nullptr;
    } else {
        current->prev->next = current->next;
        current->next->prev = current->prev;
    }
    delete current;
}

template <typename T>
void DoublyLinkedList<T>::removeNodesWithEqualNeighbors() {
    if (!head || !head->next) return;

    Node* current = head->next;
    while (current && current->next) {
        if (current->prev->data == current->next->data) {
            Node* toDelete = current;
            current->prev->next = current->next;
            current->next->prev = current->prev;
            current = current->next;
            delete toDelete;
        } else {
            current = current->next;
        }
    }
    if (head && head->next && head->data == tail->data) {
        removeElement(head->data);
    }
}

template <typename T>
void DoublyLinkedList<T>::printList() const {
    Node* current = head;
    while (current) {
        std::cout << current->data << " ";
        current = current->next;
    }
    std::cout << std::endl;
}

#endif // LISTCLASSES_TPP
