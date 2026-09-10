#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int var){
        data = var;
        next = nullptr;
    }
};

Node* head = nullptr;

void InsertAtEnd(int var){
    Node* newNode = new Node(var);


    if(head == nullptr){
        head = newNode;
    }else{
        Node* temp = head;        
        while(temp->next != nullptr){
            temp = temp->next;
        }

        temp->next = newNode;
    }
}

void InsertAtIndex(int c, int var){
    Node* temp = head;

    for(int i=0; i<c-1; i++){
        temp = temp->next;
    }

    Node* newNode = new Node(var);
    newNode->next = temp->next;
    temp->next = newNode;

}

void deleteAnyPos(int index){
    Node* temp = head;
    if(head == nullptr || index < 0){
        cout << "no element exist!";


    }

    if(index == 0){
        Node* del = head;
        head = head->next;
        delete del;
        return;
    }



        for(int i=0; i<index-1; i++){
            if(temp->next == nullptr){
                cout << "out of range";
                return;
            }
            temp = temp->next;
        }

    
        Node* del = temp->next;
        temp->next = temp->next->next;
        delete del;
    
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
    InsertAtEnd(10);
    InsertAtEnd(20);
    InsertAtEnd(40);
    InsertAtEnd(50);

    InsertAtIndex(2, 30);

    deleteAnyPos(8);
    display();
}



