#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
int main(){
struct node *head=NULL,*new=NULL;
//new=malloc(sizeof(struct node));
int n,data;
printf("enter the number of nodes");
scanf("%d",&n);
for(int i=0;i<n;i++){
    new=malloc(sizeof(struct node));
    printf("enter the data value\n");
    scanf("%d",&data);

    new->data=data;
    new->next=NULL;
    new->data = data;
        new->next = head; 
        head = new;
    }
}

