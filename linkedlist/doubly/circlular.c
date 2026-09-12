#include <stdio.h>
#include <stdlib.h>

struct ListNode{
    int val;
    struct ListNode* next;
    struct ListNode* prev;
};

struct ListNode* head = NULL;
struct ListNode* tail = NULL;

void circular(){
    if(head == NULL){
        return;
    }

    tail->next = head;
    head->prev = tail;
}


int main(){
    struct ListNode* newNode =  malloc(sizeof(struct ListNode));

    newNode->val = 10;
    newNode->prev = NULL;
    newNode->next = NULL;

    head = newNode;
    tail = newNode;
}
