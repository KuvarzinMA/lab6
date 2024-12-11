#include <iostream>
#include "ListClasses.h"

int main() {
    setlocale(LC_ALL, "RUSSIAN");
    // ������� 1: ���������������� ������
    SinglyLinkedList sList;
    sList.addElement(10);
    sList.addElement(20);
    sList.addElement(30);
    sList.addElement(52);
    sList.addElement(30333);
    sList.addElement(2024);
    std::cout << "���������������� ������ �� ��������: ";
    sList.printList();

    sList.moveFirstToEnd();
    std::cout << "���������������� ������ ����� ��������: ";
    sList.printList();



    // ������� 2: ��������������� ������
    DoublyLinkedList dList;
    dList.addElement(1);
    dList.addElement(2);
    dList.addElement(1);
    dList.addElement(5);
    dList.addElement(1);
    dList.addElement(6);
    dList.addElement(1);
    std::cout << "\n��������������� ������ �� ��������: ";
    dList.printList();

    dList.removeNodesWithEqualNeighbors();
    std::cout << "��������������� ������ ����� ��������: ";
    dList.printList();

    return 0;
}
