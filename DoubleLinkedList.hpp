/****************************************************
** Author: Jessica Speigel
** Assignment: CS162 cs162_lab_6
** Date: 02/16/2018
** Description: Declaration for DoublyLinkedList class.
****************************************************/

#ifndef CS162_LAB_6_DOUBLYLINKEDLIST_HPP
#define CS162_LAB_6_DOUBLYLINKEDLIST_HPP

#include "Node.hpp"

class DoubleLinkedList {

private:
    Node* head;
    Node* tail;
    void setHead(Node* n);
    void setTail(Node* n);
    //bool deleteNode(Node *garbage);
    bool deleteNodeByValue(int val);

public:
    DoubleLinkedList();
    ~DoubleLinkedList();
    void addToHead(int val);
    void addToTail(int val);
    bool deleteHead();
    bool deleteTail();
    void printItem(Node* item);
    void printList();
    void printListInReverse();
    Node* getHead();
    Node* getTail();
    void clearList();

};


#endif //CS162_LAB_6_DOUBLYLINKEDLIST_HPP
