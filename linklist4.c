//Circular link-list
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
        if(head == NULL) {
            head = newnode;
            temp = newnode;
        } else {
            temp->next = newnode;
            temp = newnode;
        }
    }
    // Making the linked list circular
    if(temp != NULL) {
        temp->next = head;
    }
    // Displaying the circular linked list
    printf("The circular linked list is:\n");
    temp = head;
    if(temp != NULL) {
        do {
            printf("%d -> ", temp->data);
            temp = temp->next;
        } while(temp != head);
    }
    printf("(back to head %d)\n", head->data);
    return 0;
}   