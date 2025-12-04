#include <stdio.h>
#include <string.h>

typedef struct MyNode
{
    int number;
    struct MyNode* next;

} node;


struct MyNode* CreateLinkedList(int i)
{
    int counter=0;
    node* temp =NULL;

    while(counter<i)
    {
        temp =(node*)malloc(sizeof(node));
        temp->number = 5*counter;
        temp-=temp->next;
        counter++;
    }
    node* N =temp;
    return N;
}

void AddHeadOfList(struct MyNode** list,int num)
{
    node* temp = (node*)malloc(sizeof(node));
    temp->number=num;
    temp->next = *list;
    *list = temp;
}

void AddEndofList()
{

}

void Delete()
{

}

void PrintLinkedList(struct MyNode* N)
{
    node* temp=N;
    while(temp!=NULL)
    {
        printf("%d\n",temp->number);
        temp=temp->next;
    }
}


int main()
{
    node* N = CreateLinkedList(4);
    AddHeadOfList(&N,77);
    PrintLinkedList(N);
}
