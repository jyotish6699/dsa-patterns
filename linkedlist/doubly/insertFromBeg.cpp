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

class LinkList{

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

        void displayFromEnd(){
            Node* temp = tail;
            
            if(tail == nullptr){
                cout << "List is empty";
            }else{
                while(tail != nullptr){
                    cout << tail->data << endl;
                    tail = tail->prev;
                }
            }
        }
 
        void displayFromFirst(){
            Node* temp = head;

            if(head == nullptr){
                cout << "list is empty";
            }else{
                while(head != nullptr){
                    cout << head->data << endl;
                    head = head->next;
                }
            }
        }
};

int main(){
    LinkList list;
    list.insertFromBeg(10);
    list.insertFromBeg(20);
    list.insertFromBeg(30);
    list.displayFromEnd();
    cout << "---------------" << endl;
    list.displayFromFirst();
}