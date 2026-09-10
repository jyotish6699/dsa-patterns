#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node *next;
        Node(int val){
            data = val;
            next = nullptr;
        }
};

Node* head = nullptr;

void insertAtBeg(int val){
    Node* newNode = new Node(val);

    if(head == nullptr){
        head = newNode;
    }else{
        newNode->next = head;
        head = newNode;
    }
}

void display(){
    if(head == nullptr){
        cout << "list is empty";
    }else{
        Node* temp = head;
        while(temp != nullptr){
            cout << temp->data << endl;
            temp = temp->next;
        }
    }
}

int main(){
    insertAtBeg(10);
    insertAtBeg(20);
    insertAtBeg(30);
    display();
}