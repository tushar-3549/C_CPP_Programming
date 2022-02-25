/* Program to reverse a doubly linked list */
#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
}*head,*tail;
void reverse()
{
    struct Node*current,*nextnode;
    current=head;
    while(current!=NULL)
    {
        nextnode=current->next;
        current->next=current->prev;
        current->prev=nextnode;
        current=nextnode;
    }
    current=head;
    head=tail;
    tail=current;
}
void push(int value)
{
    struct Node *newnode = (struct Node*)malloc(sizeof(struct Node));
    newnode->data = value;
    newnode->next = NULL;
    newnode->prev = NULL;
    if(head == NULL)
    {
        head = newnode;
        tail = head;
    }
    else
    {
        tail->next=newnode;
        newnode->prev=tail;
        tail=newnode;
    }
}
void display()
{
    struct Node *temp = head;
    do
    {
        printf("%d ",temp->data);
        temp = temp->next;
    }
    while(temp);
    printf("\n");
}
int main()
{

    struct Node* head = NULL;
    push(2);
    push(4);
    push(8);
    push(10);
    printf("\n Original Linked list ");
    display();
    printf("\n Reversed Linked list ");
    reverse();
    display();
}
