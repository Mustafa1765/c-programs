#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

// Function to reverse the linked list
struct Node* reverse(struct Node* head) {
    struct Node* prev = NULL;
    struct Node* current = head;
    struct Node* next = NULL;
    while (current != NULL) {
        next = current->next;   // Store next node
        current->next = prev;   // Reverse current node's pointer
        prev = current;         // Move prev one step forward
        current = next;         // Move current one step forward
    }
    head = prev;                // Update head
    return head;
}

// Utility function to print the linked list
void printList(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Utility function to add node at the beginning
void push(struct Node** head_ref, int new_data) {
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
    if (new_node == NULL) {
        fprintf(stderr, "Error: malloc failed in push()\n");
        exit(EXIT_FAILURE);
    }
    new_node->data = new_data;
    new_node->next = (*head_ref);
    *head_ref = new_node;
}

int main() {
    struct Node* head = NULL;
    // Create list: 1->2->3->4->NULL
    push(&head, 4);
    push(&head, 3);
    push(&head, 2);
    push(&head, 1);

    printf("Original List:\n");
    printList(head);

    head = reverse(head);

    printf("Reversed List:\n");
    printList(head);

    return 0;
}
