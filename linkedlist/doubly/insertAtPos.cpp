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
        void insertAtPos(int index, int val){
            
        }

};