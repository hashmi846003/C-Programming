#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *prev;
    struct node *next;
};
int main(){
    struct node *head=NULL,*temp=NULL,*newNode=NULL;
    int n,i,value;
    printf("Enter number of nodes: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid node count.\n");
        return 0;
    }
    for (i = 0; i < n; i++) {
        printf("Enter data for node %d: ", i + 1);
        scanf("%d", &value);
        newNode = (struct node*)malloc(sizeof(struct node));
        newNode->data = value;
        newNode->prev = NULL;
        newNode->next = NULL;
         if (head == NULL) {
            head = temp = newNode;
        } else {
            temp->next = newNode;
            newNode->prev = temp;
            temp = newNode;
        }

    }
     printf("\nList (forward): ");
    temp = head;
    while (temp != NULL) {
        
        printf("%d ", temp->data);
        temp = temp->next;
    }
    temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }

    // Print backward
    printf("\nList (backward): ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->prev;
    }

    return 0;
}
