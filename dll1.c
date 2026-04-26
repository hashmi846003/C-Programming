#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *prev;
    struct node *next;
};
void insertEnd(struct node **head, int value) {
    struct node *new = malloc(sizeof(struct node));
    if (new == NULL) {
        printf("Memory allocation failed\n");
        return;
    }
    new->data = value;
    new->next = NULL;
    new->prev = NULL;

    if (*head == NULL) {
        *head = new;   // first node
        return;
    }

    struct node *temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = new;
    new->prev = temp;
}
void printForward(struct node *head) {
    struct node *temp = head;
    printf("Forward: ");
    while (temp != NULL) {
        printf("%d <-> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Print backward
void printBackward(struct node *head) {
    if (head == NULL) {
        printf("Backward: List is empty\n");
        return;
    }


    struct node *temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }

    printf("Backward: ");
    while (temp != NULL) {
        printf("%d <-> ", temp->data);
        temp = temp->prev;
    }
    printf("NULL\n");
}

int main() {
    struct node *head = NULL;
    int n, value;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter value for node %d: ", i + 1);
        scanf("%d", &value);
        insertEnd(&head, value);
    }

    printForward(head);
    printBackward(head);

    return 0;
}