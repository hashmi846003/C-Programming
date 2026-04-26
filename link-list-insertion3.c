#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

// Function to insert at the end
void insertEnd(struct node **head, int value) {
    struct node *new = malloc(sizeof(struct node));
    new->data = value;
    new->next = NULL;

    if (*head == NULL) {
        *head = new;
        return;
    }

    struct node *temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = new;
}

// Function to insert after a given key
void insertAfter(struct node *head, int key, int value) {
    struct node *temp = head;
    while (temp != NULL && temp->data != key) {
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Key %d not found in the list.\n", key);
        return;
    }

    struct node *new = malloc(sizeof(struct node));
    new->data = value;
    new->next = temp->next;
    temp->next = new;
}

// Function to print the list
void printList(struct node *head) {
    struct node *temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    struct node *head = NULL;
    int n, value, key, newValue;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter value for node %d: ", i + 1);
        scanf("%d", &value);
        insertEnd(&head, value);
    }

    printf("Current list: ");
    printList(head);

    printf("Enter the value after which to insert: ");
    scanf("%d", &key);
    printf("Enter new value to insert: ");
    scanf("%d", &newValue);

    insertAfter(head, key, newValue);

    printf("Updated list: ");
    printList(head);

    return 0;
}
