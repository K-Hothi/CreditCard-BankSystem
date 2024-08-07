#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>
#include "Account.h"
using namespace std;

class LinkedList{
    private:
        class Node{
            public:
                Node* prev;
                Node* next;
                Account* account;

                Node(){
                    prev = nullptr;
                    next = nullptr;
                    account = nullptr;
                }

                Node(Account* a){
                    account = a;
                    next = nullptr;
                    prev = nullptr;
                }

        };
        Node* head;
        Node* tail;
        long length;
    public:
        LinkedList();
        void addNode(Account* account);
        Account* removeNode(long accountNumber);
        Account* searchAccount(long accountNumber);

};

#endif