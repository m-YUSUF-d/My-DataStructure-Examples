#include <stdio.h>
#include <stdlib.h>

typedef struct MyNode
{
    int data;
    struct MyNode* next;
} node;
typedef struct MyQueue
{
    int counter;
    node* front;
    node* rear;

} queue;


queue* Create()
{
    queue* Q = (queue*)malloc(sizeof(queue));
    Q->counter=0;
    Q->front=NULL;
    Q->rear=NULL;
    return Q;
}
void Enqueue(queue* q,int num)
{
    node* newNode = (node*)malloc(sizeof(node));
    newNode->data= num;
    newNode-> next=NULL;

    if(q->front ==NULL)
    {
        q->front=newNode;
        q->rear=newNode;
    }
    else
    {
        q->rear->next =newNode;
        q->rear=newNode;
    }
    q->counter++;
    return 1;
}
void Dequeue(queue* q)
{
    if(q->front == NULL)
        return 0;

    node* temp = q->front;


    q->front = q->front->next;
    q->counter--;

    if(q->front ==NULL)
        q->rear =NULL;

    free(temp);

    return 1;
}
void PrintQueue(queue* q)
{
    if(q==NULL || q->front ==NULL)
        return;

    node* temp = q->front;
    while(temp!=NULL)
    {
        printf("Data: %d , counter: %d \n", temp->data,q->counter);
        temp=temp->next;
    }
}


int main()
{
    queue* Q = Create();

    Enqueue(Q,15);
    Enqueue(Q,30);
    Enqueue(Q,45);

    PrintQueue(Q);

    Dequeue(Q);
    Dequeue(Q);

    PrintQueue(Q);
}
