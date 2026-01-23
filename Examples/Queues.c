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
    queue* temp = q;
    node* n = (node*)malloc(sizeof(node));
    n
}
void Dequeue()
{

}
void PrintQueue(queue* q)
{
    if(q==NULL || q->front ==NULL)
        return;

    node* temp = q;
    while(temp->next !=NULL)
    {
        printf("%d\n",temp->data);
        temp=temp->next;
    }
}


int main()
{
    queue* Q = Create();

    Enqueue(Q,15);
    Enqueue(Q,25);
    PrintQueue(Q);

    Enqueue(Q,35);
    Dequeue(Q);
    Dequeue(Q);
}
