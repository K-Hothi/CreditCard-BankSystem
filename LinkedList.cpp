#include <iostream>
#include "LinkedList.h"

using namespace std;

LinkedList::LinkedList(){
    head = nullptr;
    tail = nullptr;
    length = 0;
}
void LinkedList::addNode(Account* account){
    Node* temp = head;
    Node* newNode = new Node(account);
    if(temp == nullptr){
        head = newNode;
        tail = newNode;
        length++;
        return;
    }

    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;

    length++;

    return;
    
}
Account* LinkedList::searchAccount(long accountNumber){
    Node* temp = head;
    if(head == nullptr){
        return nullptr;
    }
    while(temp != nullptr){
        if(temp->account->GetAccountNumber() == accountNumber){
            return temp->account;
        }
        temp = temp->next;
    }
    return nullptr;

}
Account* LinkedList::removeNode(long accountNumber){
    Node* current = head;
    if(current == nullptr){
        return nullptr;
    }
    if(current->next == nullptr){
        if(current->account->GetAccountNumber() == accountNumber){
            length--;
            delete current;
            current = nullptr;
            return current->account;
        }
    }
    

    while(current != nullptr){
        if(current->account->GetAccountNumber() == accountNumber){
            if(current->account == tail->account){
                Node* toRemove = tail;
                tail = tail->prev;
                return toRemove->account;
            }
            current->prev = current->next;
            current->next->prev = current->prev;
            length--;
            return current->account;
        }
        current = current->next;
    }

    return nullptr;
}
