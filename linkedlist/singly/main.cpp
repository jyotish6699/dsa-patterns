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

class LinkedListImp{
    public:
        Node *head = nullptr;
        

        void display(){
            if(head == nullptr){
                cout << "list is empty" << endl;
            }else{
                Node *temp = head;
                while(temp != nullptr){
                    cout << temp->data << "->";
                    temp = temp->next;
                }
            }
        }

        void insertAtBeg(int val){
            Node* newNode = new Node(val);
            if(head == nullptr){
                head = newNode;
            }else{
                newNode->next = head;
                head = newNode;
            }
        }
};


int main(){
    LinkedListImp list;
    list.insertAtBeg(30);
    list.insertAtBeg(60);
    list.insertAtBeg(80);
    list.display();

    return 0;
}