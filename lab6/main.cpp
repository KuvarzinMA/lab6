#include <iostream>
#include "ListClasses.h"

int main() {
    setlocale(LC_ALL, "RUSSIAN");
    // Задание 1: Однонаправленный список
    SinglyLinkedList sList;
    sList.addElement(10);
    sList.addElement(20);
    sList.addElement(30);
    sList.addElement(52);
    sList.addElement(30333);
    sList.addElement(2024);
    std::cout << "Однонаправленный список до переноса: ";
    sList.printList();

    sList.moveFirstToEnd();
    std::cout << "Однонаправленный список после переноса: ";
    sList.printList();



    // Задание 2: Двунаправленный список
    DoublyLinkedList dList;
    dList.addElement(1);
    dList.addElement(2);
    dList.addElement(1);
    dList.addElement(5);
    dList.addElement(1);
    dList.addElement(6);
    dList.addElement(1);
    std::cout << "\nДвунаправленный список до удаления: ";
    dList.printList();

    dList.removeNodesWithEqualNeighbors();
    std::cout << "Двунаправленный список после удаления: ";
    dList.printList();

    return 0;
}
