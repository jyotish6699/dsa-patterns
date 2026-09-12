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
        void insertFromEnd(int val){
            Node* newNode = new Node(val);

            if(head == nullptr){
                head = newNode;
                tail = newNode;
            }else{
                tail->next = newNode;
                newNode->prev = tail;
                tail = tail->next;
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
    list.insertFromEnd(10);
    list.insertFromEnd(20);
    list.insertFromEnd(30);
    list.displayFromEnd();
    cout << "---------------" << endl;
    list.displayFromFirst();
}