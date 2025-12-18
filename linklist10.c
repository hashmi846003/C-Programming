//Reverse a link list
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next; 
};
struct node* reverse(struct node* head){
    struct node *prev=NULL,*curr=head,*next=NULL; 
    while(curr!=NULL){
        next=curr->next;
        curr->next=prev;
        prev = curr;
        curr=next;
    }
    return prev;
}
int main(){

struct node *head = NULL, *temp = NULL, *newNode = NULL;
    int n, i;

    
    printf("Enter number of nodes: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        newNode = (struct node*)malloc(sizeof(struct node));
        printf("Enter data %d: ", i + 1);
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

    // Print original list
    printf("\nOriginal List: ");
    temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");

    // Reverse the list
    head = reverse(head);

    // Print reversed list
    printf("\nReversed List: ");
    temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");

    return 0;
}