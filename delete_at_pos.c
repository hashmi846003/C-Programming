#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

/* Function prototypes */
void display(struct node *head);
struct node* deleteBegin(struct node *head);
struct node* deleteEnd(struct node *head);
struct node* deleteAtPosition(struct node *head, int pos);

int main() {
    struct node *head = NULL, *temp = NULL, *newNode = NULL;
    int n, value;

    printf("Enter the number of nodes: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        newNode = (struct node *)malloc(sizeof(struct node));
        printf("Enter the value %d: ", i + 1);
        scanf("%d", &value);

        newNode->data = value;
        newNode->next = NULL;

        if (head == NULL) {
            head = newNode;
            temp = newNode;
        } else {
            temp->next = newNode;
            temp = newNode;
        }
    }

    printf("\nOriginal list:\n");
    display(head);

    head = deleteBegin(head);
    printf("\nAfter deleting at beginning:\n");
    display(head);

    head = deleteEnd(head);
    printf("\nAfter deleting at end:\n");
    display(head);

    head = deleteAtPosition(head, 2);
    printf("\nAfter deleting at position 2:\n");
    display(head);

    return 0;
}

/* Display function */
void display(struct node *head) {
    struct node *temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

/* Delete at beginning */
struct node* deleteBegin(struct node *head) {
    if (head == NULL) {
        printf("List is empty\n");
        return head;
    }
    struct node *temp = head;
    head = head->next;
    free(temp);
    return head;
}

/* Delete at end */
struct node* deleteEnd(struct node *head) {
    if (head == NULL) {
        printf("List is empty\n");
        return head;
    }
    if (head->next == NULL) {
        free(head);
        return NULL;
    }
    struct node *temp = head;
    while (temp->next->next != NULL) {
        temp = temp->next;
    }
    free(temp->next);
    temp->next = NULL;
    return head;
}

/* Delete at given position */
struct node* deleteAtPosition(struct node *head, int pos) {
    if (head == NULL) {
        printf("List is empty\n");
        return head;
    }
    if (pos == 1) {
        struct node *temp = head;
        head = head->next;
        free(temp);
        return head;
    }

    struct node *temp = head;
    for (int i = 1; i < pos - 1 && temp->next != NULL; i++) {
        temp = temp->next;
    }

    if (temp->next == NULL) {
        printf("Invalid position\n");
        return head;
    }

    struct node *del = temp->next;
    temp->next = del->next;
    free(del);

    return head;
}
