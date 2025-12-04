#include <stdio.h>
#include <string.h>

typedef struct MyNode
{
    int number;
    struct MyNode* next;

} node;


struct MyNode* CreateLinkedList(int i)
{
    if (i <= 0) return NULL;

    int counter = 0;
    node* head = NULL;
    node* tail = NULL;

    while(counter < i)
    {
        node* temp = (node*)malloc(sizeof(node));
        temp->number = 5 * counter;
        temp->next = NULL;

        if (head == NULL)
        {
            head = temp;
            tail = temp;
        }
        else
        {
            tail->next = temp;
            tail = temp;
        }
        counter++;
    }
    return head;
}

void AddHeadOfList(struct MyNode** list,int num)
{
    node* temp = (node*)malloc(sizeof(node));
    temp->number=num;
    temp->next = *list;
    *list = temp;
}

void AddEndofList(struct MyNode* list, int num)
{
    while(list->next !=NULL)
    {
        list=list->next;
    }
    list->next = (node*)malloc(sizeof(node));
    list= list->next;
    list ->number=num;
    list->next=NULL;
}

void Delete(struct MyNode** head, int value)
{
    node* temp = *head;
    node* prev = NULL;

    if (temp != NULL && temp->number == value)
    {
        *head = temp->next;
        free(temp);
        return;
    }

    while (temp != NULL && temp->number != value)
    {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL)
    {
        printf("Değer bulunamadı!\n");
        return;
    }

    prev->next = temp->next;
    free(temp);
}

void ReverseList(struct MyNode** head)
{
    node* prev = NULL;
    node* current = *head;
    node* next = NULL;

    while (current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    *head = prev;
}

void PrintLinkedList(struct MyNode* N)
{
    node* temp=N;
    while(temp!=NULL)
    {
        printf("%d\n",temp->number);
        temp=temp->next;
    }
    printf("-   -   -   -   -   -   -   -   -   -\n");
}


int main()
{
    node* N = CreateLinkedList(7);
    PrintLinkedList(N);

    AddHeadOfList(&N,35);
    AddEndofList(N,75);
    PrintLinkedList(N);

    Delete(&N,35);
    Delete(&N,20);
    Delete(&N,75);
    PrintLinkedList(N);

    ReverseList(&N);
    PrintLinkedList(N);
}
