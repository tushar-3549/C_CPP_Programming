// implement queue
#include <bits/stdc++.h>
using namespace std;

#define CAPACITY 5
int ourQueue[CAPACITY];
int front=0,rear=-1,totalItem=0;
bool isFull()
{
    if(totalItem==CAPACITY)
    {
        return true;
    }
    return false;
}
bool isEmpty()
{
    if(totalItem==0)
    {
        return true;
    }
    return false;
}
void enqueue(int x)
{
    if(isFull())
    {
        printf("Sorry, The List is Full\n");
        return;
    }
    rear=(rear+1)%CAPACITY;
    ourQueue[rear]=x;
    totalItem++;

}
int dequeue()
{
    if(isEmpty())
    {
        cout << "Sorry ! Queue is Empty\n";
        return -1;
    }

    int frontItem=ourQueue[front];
    ourQueue[front]=-1;
    front=(front+1)%CAPACITY;
    totalItem--;
    return frontItem;
}
void printQueue()
{
    for(int i=0; i<CAPACITY; i++)
    {
        printf("%d ",ourQueue[i]);
    }
    cout << endl;
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    //Implementation of Array of Queue
    enqueue(10);
    enqueue(15);
    enqueue(20);
    enqueue(25);
    enqueue(30);
    printQueue();
    enqueue(35);
    dequeue();
    printQueue();
    enqueue(40);
    printQueue();

}

