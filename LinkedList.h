//
// Created by Alsawaf on 12/13/2018.
//

#ifndef FINALLINKEDLIST_LINKEDLIST_H
#define FINALLINKEDLIST_LINKEDLIST_H


class LinkedList {

    public:


        void pushFront(Node node);
        void popFront();
        void pushBack(Node node);
        void popBack();
        Node getFront();
        Node getBack();
        Node getByValue(int value);
        bool empty();
        int getSize();



    private:

        Node* head= nullptr;
        Node* tail = nullptr;
        int size=0;



};


#endif //FINALLINKEDLIST_LINKEDLIST_H
