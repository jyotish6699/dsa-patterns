#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
        Node* prev;

        Node(int val){
            data = val;
            next = nullptr;
            prev = nullptr;
        }
};

class LinkedList{
    Node* head = nullptr;
    Node* tail = nullptr;

    public:


        void insertFromBeg(int val){
            Node* newNode = new Node(val);

            if(head == nullptr){
                head = newNode;
                tail = newNode;
            }else{
                newNode->next = head;
                head->prev = newNode;
                head = newNode;
            }
        }


        void reverseDLL(){
            Node* temp = head;

            if(temp == nullptr){
                cout << "no list exist";
            }else{
                while(temp != nullptr){
                    Node* next = temp->next;
                    temp->next = temp->prev;
                    temp->prev = temp;
                    temp = next;               
                }

                Node* newHead = head;
                head = tail;
                tail = newHead;
            }
        }

};

int main(){
    LinkedList list;
    list.insertFromBeg(10);
    list.insertFromBeg(20);
    list.insertFromBeg(30);

    list.reverseDLL();
}