#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node* next;
};

int main() {
    struct node *head=NULL, *temp=NULL, *newNode=NULL;
    int n, i, found = 0;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    if (n < 0) {
        return 1;
    }

    for (i = 0; i < n; i++) {
        newNode = (struct node*)malloc(sizeof(struct node));

        if (newNode == NULL) {
            return -1;
        }

        printf("Enter data in Node %d: ", i + 1);
        scanf("%d", &newNode->data);

        newNode->next = NULL;

        if (head == NULL) {
            head = newNode;
            temp = newNode;
        } else {
            temp->next = newNode;
            temp = newNode;
        }
    }

    // Print list
    temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");

    int e;
    printf("Enter value to search: ");
    scanf("%d", &e);

    
    temp = head;
    while (temp != NULL) {
        if (temp->data == e) {
            found = 1;
            break;
        }
        temp = temp->next;
    }

    if (found == 1)
        printf("Given element is PRESENT\n");
    else
        printf("Given element is ABSENT\n");

    return 0;
}
