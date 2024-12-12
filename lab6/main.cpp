#include <iostream>
#include <string>
#include "ListClasses.h"

int main() {
    // Задание 1: Однонаправленный список с int
    SinglyLinkedList<int> sList;
    sList.addElement(10);
    sList.addElement(20);
    sList.addElement(30);
    std::cout << "Однонаправленный список (int) до переноса: ";
    sList.printList();

    sList.moveFirstToEnd();
    std::cout << "Однонаправленный список (int) после переноса: ";
    sList.printList();

    // Задание 2: Двунаправленный список с std::string
    DoublyLinkedList<std::string> dList;
    dList.addElement("apple");
    dList.addElement("banana");
    dList.addElement("apple");
    dList.addElement("cherry");
    dList.addElement("apple");
    std::cout << "\nДвунаправленный список (std::string) до удаления: ";
    dList.printList();

    dList.removeNodesWithEqualNeighbors();
    std::cout << "Двунаправленный список (std::string) после удаления: ";
    dList.printList();

    return 0;
}
