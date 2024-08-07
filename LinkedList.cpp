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
    if(temp == nullptr){
        head = new Node(account);
        length++;
        return;
    }
    while(temp->next != nullptr){
        temp = temp->next;
    }
    temp->next = new Node(account);
    length++;
    return;
}
Account* LinkedList::searchAccount(long accountNumber){
    Node* temp = head;
    if(head == nullptr){
        return nullptr;
    }
    while(temp != nullptr){
        if(temp->account->GetAccountNumber()){
            return temp->account;
        }
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
            return;
        }
    }
    Node* next = head->next;

    while(current != nullptr){
        if(next->account->GetAccountNumber() == accountNumber){
            current->next = next->next;
            length--;
            return;
        }
        current = current->next;
        next = current->next;
    }

    return;
}
