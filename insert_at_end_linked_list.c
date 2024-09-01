#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node
struct Node {
    int data;
    struct Node* next;
};

// Function to insert a node at the end
void insertAtEnd(struct Node** head, int Data) {
    // Step 1: Create a new node
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = Data;
    newNode->next = NULL;  

    
    if (*head == NULL) {
        *head = newNode;
        return;
    }

  
    struct Node* last = *head;
    while (last->next != NULL) {
        last = last->next;
    }

  
    last->next = newNode;
}

// Function to print the linked list
void printList(struct Node* head) {
    struct Node* current = head;
    while (current != NULL) {
        printf("%d -> ", current->data);
       current = current->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* head = NULL;  // Initialize an empty list

    // Insert some nodes at the end
    insertAtEnd(&head, 1);
    insertAtEnd(&head, 2);
    insertAtEnd(&head, 3);

    // Print the list
    printList(head);

   

    return 0;
}
