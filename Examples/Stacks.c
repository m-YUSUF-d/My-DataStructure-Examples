#include <stdio.h>
#include <string.h>
#define MAX 5

typedef struct MyNode
{
    int data;
    struct MyNode* link;
} node;


typedef struct MyStack
{
    int count;
    node* top;
} stack;

stack* Create()
{
    stack* S = (stack*)malloc(sizeof(stack));
    S ->count = 0;
    S->top=NULL;

    return S;
}

void push(stack* S, int value)
{
    node* N = (node*)malloc(sizeof(node));
    N->data=value;
    N->link = S->top;
    S->top =N;
    S->count++;
}
int pop(stack* S)
{
    if(isEmpty(S))
    {
        printf("Stack bos");
        return -1;
    }

    node* temp= S-> top;
    S->top = temp->link;
    S->count--;

    return temp->data;
}
int peak(stack* S)
{
    if(isEmpty()){
        printf("Stack bos");
        return -1;
    }
    return S->top->data;
}


int isEmpty(stack* S)
{
    return (S->top == NULL);
}
void PrintLinkedList(stack* S)
{
    node* temp=S->top;
    while(temp!=NULL)
    {
        printf("%d\n",temp->data);
        temp=temp->link;
    }
    printf("-   -   -   -   -   -   -   -   -   -\n");
}

int main()
{
    stack* S = Create();
    push(S,10);
    push(S,20);
    push(S,30);
    PrintLinkedList(S);
    printf("Removed value %d\n",pop(S));
    printf("Peak value %d\n",peak(S));
    PrintLinkedList(S);
}
