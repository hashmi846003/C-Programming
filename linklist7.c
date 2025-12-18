//count the number of nodes
#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
};
int main(){
    struct Node *head=NULL,*temp=NULL,*newNode=NULL;
    int i,n,count=0;
    scanf("%d",&n);
    if(n<0){
        return 1;
    }
    for (i=0;i<n;i++){
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
   // count++;
    }
   // printf("The number of nodes in the linked list is:%d\n",count);
    //return 0;
//int count = 0;
    temp = head;

    while (temp != NULL) {
        count++;
        temp = temp->next;
    }

    printf("The number of nodes in the linked list is: %d\n", count);

    return 0;        
}