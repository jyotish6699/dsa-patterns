#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data = val;
        next = nullptr;
    }
};

void deleteFromEnd(Node*& head){
    if(head == nullptr){
        return;

    }else if(head->next == nullptr){
        delete head;
        head = nullptr;
        return ;
    
    }else{
        Node* temp = head;
        while(temp->next->next != nullptr){
            temp = temp->next;
        }
        delete temp->next;
        temp->next = nullptr;

    }
}