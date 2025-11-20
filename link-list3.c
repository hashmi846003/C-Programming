#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};

int main() {
    struct node *head=NULL, *temp=NULL, *newNode=NULL;
    int value;

    scanf("%d", &value);

    while (value != 0) {
        newNode = (struct node*)malloc(sizeof(struct node));
        newNode->data = value;
        newNode->next = NULL;

        if (head == NULL) {
            head = newNode;
            temp = head;
        } else {
            temp->next = newNode;
            temp = newNode;
        }

        scanf("%d", &value);
    }

    // PRINT LIST
    temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");

    return 0;
}

