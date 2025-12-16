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
}
void Enqueue()
{
}
void Dequeue()
{
}


int main()
{
}
