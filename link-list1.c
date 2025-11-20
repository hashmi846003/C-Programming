//SINGLY LINK LIST CREATION

#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};

int main(){
    struct node *head=NULL, *temp=NULL, *newNode=NULL;
    int value;

    while (1) {
        printf("Enter data (0 to stop): ");
        scanf("%d", &value);

        if (value == 0)
            break;   // stop taking inputs

        newNode = (struct node*)malloc(sizeof(struct node));
        newNode->data = value;
        newNode->next = NULL;

        if (head == NULL) {
            head = newNode;   // first node
            temp = newNode;
        } else {
            temp->next = newNode;  // attach new node
            temp = newNode;
        }
    }

    printf("\nLinked List: ");
    temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");

    return 0;
}
