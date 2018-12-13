//
// Created by Alsawaf on 12/13/2018.
//

#ifndef FINALLINKEDLIST_NODE_H
#define FINALLINKEDLIST_NODE_H


class Node {

    public:

        Node(int val);
        void setValue(int value);
        int getValue();
        void setNext(Node* next);
        Node* getNext();
        void setPrev(Node* prev);
        Node* getPrev();


    private:

        int value;
        Node *next,*prev;

};


#endif //FINALLINKEDLIST_NODE_H
