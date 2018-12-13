//
// Created by Alsawaf on 12/13/2018.
//

#include "LinkedList.h"


    void LinkedList::pushFront(Node node){

        if(size==0){

            this->head = this->tail = &node;

            node.setPrev(nullptr);
            node.setNext(nullptr);

            size++;

        }

        else{

            Node* oldHead = head;
            head = &node;
            head->setNext(nullptr);
            oldHead->setNext(head);
            head->setPrev(oldHead);
            size++;

        }

    }


    void LinkedList::popFront() {

        if(size!=0){

            Node* oldFront = head;
            head = head->getPrev();
            head->setNext(nullptr);
            delete oldFront;
            size--;
        }
    }

    void LinkedList::pushBack(Node node) {

        if(size==0){

            this->head = this->tail = &node;

            node.setPrev(nullptr);
            node.setNext(nullptr);

            size++;

        }
        else{

            Node* oldTail = tail;
            tail = &node;
            tail->setPrev(nullptr);
            oldTail->setPrev(tail);
            tail->setNext(oldTail);
            size++;

        }
    }

    void LinkedList::popBack() {

        if(size!=0){

            Node* oldTail = tail;
            tail = tail->getNext();
            delete oldTail;
            tail->setPrev(nullptr);
            size--;
        }

    }

    Node LinkedList::getFront() {

        if(head!= nullptr)
            return *head;

    }

    Node LinkedList::getBack(){

        if(tail!= nullptr)
            return *tail;

    }

    Node LinkedList::getByValue(int value) {

        Node* iterator = tail;
        while (iterator!= nullptr){

            if (iterator->getValue()==value)
                return *iterator;
        }
    }

    bool LinkedList::empty(){

        return size;

    }

    int LinkedList::getSize() {

        return size;

    }
