//
// Created by Alsawaf on 12/13/2018.
//

#include "Node.h"

    using namespace std;




    Node::Node(int val){

        this->value=val;

    }

    void Node::setValue(int value) {

        this->value = value;

    }

    int Node::getValue() {

        return value;

    }


    void Node::setNext(Node *next) {


        this->next = next;

    }

    Node* Node::getNext() {

        return this->next;

    }

    void Node::setPrev(Node *prev) {

        this->prev=prev;

    }
