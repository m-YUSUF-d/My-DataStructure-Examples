#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Node structure (Linked List node)
typedef struct Node
{
    int number;
    struct Node* next;
} Node;

// List ADT with defined operations
typedef struct List
{
    Node* head;  // Head node
    void (*append)(struct List*, int); // Add element
    void (*remove)(struct List*, int); // Remove element
    void (*print)(struct List*);       // Print list
    bool (*search)(struct List*, int); // Search for element
} List;

// Add element operation
void append(List* list, int value)
{
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->number = value;
    newNode->next = NULL;

    if(list->head == NULL)
    {
        list->head = newNode; // Add the first node if the list is empty
    }
    else
    {
        Node* temp = list->head;

        while (temp->next != NULL)
        {
            temp = temp->next; // Go to the end of the list
        }
        temp->next = newNode; // Add the new node at the end
    }
}

// Remove element operation
void removeNode(List* list, int value)
{
    if (list->head == NULL)
    {
        printf("Deletion process failed. The list is empty.\n");
        return;
    }

    Node* temp = list->head;
    Node* prev = NULL;

    // Search for the element to remove
    while (temp != NULL && temp->number != value)
    {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL)
    {
        printf("%d not found in the list.\n", value);
        return;
    }

    // Remove the element from the list
    if (prev == NULL)
    {
        list->head = temp->next; // If the first element is being removed
    }
    else
    {
        prev->next = temp->next; // If an element in the middle is being removed
    }

    free(temp); // Free the memory
    printf("%d has been removed from the list.\n", value);
}

// Print the list operation
void printList(List* list)
{
    Node* temp = list->head;
    if (temp == NULL)
    {
        printf("The list is empty.\n");
        return;
    }
    printf("List: ");
    while (temp != NULL)
    {
        printf("%d -> ", temp->number);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Search for an element operation
bool search(List* list, int value)
{
    Node* temp = list->head;
    while (temp != NULL)
    {
        if (temp->number == value)
        {
            return true; // Element found
        }
        temp = temp->next;
    }
    return false; // Element not found
}

// Create the List ADT
List* createList()
{
    List* list = (List*)malloc(sizeof(List));
    list->head = NULL;
    list->append = append;
    list->remove = removeNode;
    list->print = printList;
    list->search = search;
    return list;
}
