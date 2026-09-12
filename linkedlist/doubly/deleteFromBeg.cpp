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
    public:
        Node* head = nullptr;
        Node* tail = nullptr;

        void deleteFromBeg(){
            
        }
};