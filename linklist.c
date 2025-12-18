#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
};
int main(){
    struct Node *head=NULL,*temp=NULL, *newNode=NULL;
    int n,i;
    printf("Enter the number of Nodes");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        newNode=(struct Node*)malloc(sizeof(struct Node));
        if(newNode==NULL){
            printf("Memory not allocated.\n");
            return 1;
        }
        printf("Enter data for node %d: ",i+1);
        scanf("%d",&newNode->data);
        newNode->next=NULL;
        if(head==NULL){
            head=newNode;
            temp=newNode;
        }
        else{
            temp->next=newNode;
            temp=newNode;
        }
    }
    printf("The linked list is:\n");
    temp=head;
    while(temp!=NULL){
        printf("%d -> ",temp->data);
        temp=temp->next;
    }
    printf("NULL\n");
    return 0;   
}