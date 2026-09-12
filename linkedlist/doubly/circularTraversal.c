#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
};

struct Node* createNode(int value){
    struct Node* newNode = malloc(sizeof(struct Node));

    if(newNode == NULL){
        printf("Memory allocation failed/n");
        exit(1);
    }

    newNode->data = value;
    newNode->next = NULL;
    newNode->prev = NULL;

    return newNode;
}

void insertAtEnd(struct Node** head, struct Node** tail, int val){

    struct Node* newNode = createNode(val);

    if(*head == NULL){
        *head = newNode;
        *tail = newNode;
        return;
    }

    newNode->prev = *tail;
    (*tail)->next = newNode;

    *tail = newNode;
}

void makeCircular(struct Node* head, struct Node* tail){
    if(head == NULL){
        return;
    }

    tail->next = head;
    head->prev = tail;
}

void traverseCircular(struct Node* head){
    if(head = NULL){
        printf("List is empty\n");
        return;
    }

    struct Node* temp = head;

    do {
        printf("%d ", temp->data);
        temp = temp->next;
    } while(temp != head);

    printf("\n");
    
}

int main(){

    struct Node* head = NULL;
    struct Node* tail = NULL;

    insertAtEnd(&head, &tail, 10);
    insertAtEnd(&head, &tail, 20);
    insertAtEnd(&head, &tail, 30);
    insertAtEnd(&head, &tail, 40);
    
    makeCircular(head, tail);

    traverseCircular(head);

    return 0;

}