// insert and delete of a link-list(Singly)
#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;
struct Node
{
    int data;
    struct Node*next;
};
struct Node*head=NULL,*newnode,*temp,*tail;
void insert_first(int value)
{
    struct Node*newnode=(struct Node*)malloc(sizeof(struct Node));
    newnode->data=value;
    newnode->next=NULL;
    if(head==NULL)
    {
        head=temp=newnode;
    }
    else
    {
        newnode->next=head;
        head=newnode;

    }
}
void insert_last(int value)
{
    struct Node*newnode=(struct Node*)malloc(sizeof(struct Node));
    newnode->data=value;
    newnode->next=NULL;
    if(head==NULL)
    {
        head=temp=newnode;
    }
    else
    {
        temp->next=newnode;
        temp=newnode;
    }

}
void insert_at(int pos,int value)
{
    struct Node*cur=head,*prev=NULL,*newnode=(struct Node*)malloc(sizeof(struct Node));
    newnode->data=value;
    int count=1;
    while(count < pos && cur != NULL)
    {
        prev=cur;
        cur=cur->next;
        count++;
    }
    prev->next=newnode;
    newnode->next=cur;
}
void delete_first()
{
    struct Node*temp;
    temp = head;
    head = head->next;
    free(temp);

}
void delete_last()
{
    struct Node*prev;
    temp=head;
    while(temp->next != NULL)
    {
        prev=temp;
        temp=temp->next;
    }
    if(temp == head)
    {
        head = NULL;
        //free(temp);
    }
    else
    {
        prev->next=NULL;
        //free(temp);
    }
    free(temp);

}
void display()
{
    struct Node*temp;
    temp=head;
    while(temp != NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    printf("Insert the link-list (Any Position) :\n");
    insert_first(12);
    insert_first(15);
    insert_first(17);
    insert_last(45);
    insert_at(3,88);
    display();

    printf("After Deletion the link-list(Only first and last position):\n");
    delete_first();
    delete_last();
    display();
}

