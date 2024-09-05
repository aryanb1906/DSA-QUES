#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node
struct Node
{
    int data;
    struct Node *next;
};

void insertAtBeginning(struct Node **head, int Data)
{

    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = Data;

    newNode->next = *head;

    *head = newNode;
}

// Function to insert a node at the end
void afternode(struct Node **head, int Data, int pos)
{
    // Step 1: Create a new node
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = Data;
    newNode->next = NULL;

    struct Node *last = *head;
    for (int i = 1; i < pos; i++)
    {
        last = last->next; // to traverse the linked list
    }
    newNode->next = last->next;
    last->next = newNode;
}

// Function to print the linked list
void printList(struct Node *head)
{
    struct Node *current = head;
    while (current != NULL)
    {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

int main()
{
    struct Node *head = NULL; // Initialize an empty list

    insertAtBeginning(&head, 5);
    insertAtBeginning(&head, 4);
    insertAtBeginning(&head, 3);
    insertAtBeginning(&head, 2);
    insertAtBeginning(&head, 1);

    // Insert some nodes at the end
    afternode(&head, 9, 3);

    // Print the list
    printList(head);

    return 0;
}
