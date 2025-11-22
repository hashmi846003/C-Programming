// Finding the middle value in a linked list
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

int main() {
    struct node *head = NULL, *temp = NULL, *newnode = NULL;
    int n, i;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    // Creating the linked list
    for (i = 0; i < n; i++) {
        newnode = (struct node*) malloc(sizeof(struct node));
        if (newnode == NULL) {
            printf("Memory not allocated.\n");
            return 1;
        }
        printf("Enter data for node %d: ", i + 1);
        scanf("%d", &newnode->data);
        newnode->next = NULL;

        if (head == NULL) {
            head = newnode;
            temp = newnode;
        } else {
            temp->next = newnode;
            temp = newnode;
        }
    }

    
    struct node *slow = head, *fast = head;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;          // moves 1 step
        fast = fast->next->next;    // moves 2 steps
    }

    printf("\nMiddle element is: %d\n", slow->data);

    return 0;
}
