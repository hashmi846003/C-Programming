//deletion of node at any given position
#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
};
int main(){
    struct Node *head=NULL,*temp=NULL, *newNode=NULL,*delNode;
    int i,n,pos;
    printf("Enter the number of Nodes\n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        newNode=(struct Node*)malloc(sizeof(struct Node));
        if (newNode==NULL){
            printf("Memory not allocated.\n");
            return 1;
        }
        printf("Enter data for node %d:",i+1);
        scanf("%d",&newNode->data);
        newNode->next=NULL;
        if (head==NULL){
            head=newNode;
            temp=newNode;
        }

        else{
            temp->next=newNode;
            temp=newNode;
        }
    }
    printf("Enter the position to delete the node:\n");
    scanf("%d", &pos);

    if(pos < 1 || pos > n){
        printf("Invalid position\n");
        return 1;
    }

    // CASE 1: delete from beginning
    if(pos == 1){
        delNode = head;
        head = head->next;
        free(delNode);
    }

    // CASE 2: delete from middle or end
    else {
        temp = head;
        for(i=1; i<pos-1; i++){
            temp = temp->next;
        }
        delNode = temp->next;
        temp->next = delNode->next;
        free(delNode);
    }

    // print after deletion
    printf("The linked list after deletion is:\n");
    temp = head;
    while(temp != NULL){
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");

    return 0;
}