//Reverse the link list
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
int main(){
struct node *head=NULL, *temp=NULL,*newNode=NULL,*prev=NULL,*next=NULL;
while(1){
    int n;
    printf("Enter data(0 to stop): ");
    scanf("%d",&n);
    if(n==0)
    break;  
    newNode=(struct node*)malloc(sizeof(struct node));
    newNode->data=n;
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
printf("\nOriginal Linked List: ");
    temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");


    prev=NULL;
    temp=head;
    while(temp!=NULL){
        next=temp->next;
        temp->next=prev;
        prev=temp;
        temp=next;
    }
    head=prev;
    printf("\nReversed Linked List: ");
    temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }               
    printf("NULL\n");
    return 0;   
        

}
