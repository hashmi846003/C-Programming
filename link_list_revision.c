#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
int main(){
    struct node *head = NULL, *temp = NULL, *newNode = NULL;
    int value;

    printf("Enter numbers (Ctrl+D to stop):\n");
    while (scanf("%d", &value) != EOF) {
        newNode = (struct node *)malloc(sizeof(struct node));
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
    printf("Linked list elements:\n");
    temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");

    return 0;


}