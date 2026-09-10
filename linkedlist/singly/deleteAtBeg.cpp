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

void deleteFromBeg(Node*& head){
    if(head == nullptr){
        return;
    }

    Node* temp = head;
    head = head->next;
    delete temp;
}