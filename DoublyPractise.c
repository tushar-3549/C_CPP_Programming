#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node* next;
    struct Node* previous;
};
struct Node *head=NULL;
struct Node *last=NULL;
void insertAtfirst(int value)
{
    struct Node*newNode = (struct Node)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    newNode->previous = NULL;
    if(head == NULL)
    {
        head = newNode;
        last = head;
    }
    else
    {
        newNode->next = head;
        head->previous = newNode;
        head = newNode;
    }
}
void insertAtEnd(int value)
{
    struct Node newNode = (struct Node)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    newNode->previous = NULL;
    if(head == NULL)
    {
        head = newNode;
        last = head;
    }
    else
    {
        last->next = newNode;
        newNode->previous = last;
        last = newNode;
    }
}
void print()
{
    struct Node *newNode = head;
    do
    {
        printf("%d ",newNode->data);
        newNode = newNode->next;
    }
    while(newNode != NULL);
    printf("\n");
}
void main()
{
    insertAtfirst(2);
    insertAtfirst(4);
    insertAtfirst(5);
    print();
    insertAtEnd(9);
    print();
}
