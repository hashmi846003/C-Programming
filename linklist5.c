//insertion of node at any given position
#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
};
int main(){
    struct Node *head=NULL,*temp=NULL, *newNode=NULL;
    int i,n;
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
    int pos,data,j;
    printf("Enter the position to insert the new node:\n");
    scanf("%d",&pos);
    if(pos<1 || pos>n+1){
        printf("Invalid position\n");
        return 1;
    }
    printf("Enter data for the new node:\n");
    scanf("%d",&data);
    newNode=(struct Node*)malloc(sizeof(struct Node));
    if(newNode==NULL){
        printf("Memory not allocated.\n");
        return 1;
    }
    newNode->data=data;
    newNode->next=NULL;
    if(pos==1){
        newNode->next=head;
        head=newNode;
    }
    else{
        temp=head;
        for(j=1;j<pos-1;j++){
            temp=temp->next;
        }
        newNode->next=temp->next;
        temp->next=newNode;
    }
    printf("The linked list after insertion is:\n");
    temp=head;
    while(temp!=NULL){
        printf("%d -> ",temp->data);
        temp=temp->next;
    }
    printf("NULL\n");
    return 0;   
}