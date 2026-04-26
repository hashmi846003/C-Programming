#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
int main(){
    struct node *head=NULL,*temp=NULL,*new=NULL;
    int n,value;
    printf("enter the no of nodes\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        new=malloc(sizeof(struct node));
        scanf("%d",&value);
        new->data=value;
        new->next=NULL;
        if(head==NULL){
            head=new;
        }else{
            temp=head;
            while(temp->next!=NULL){
                temp=temp->next;
                
            }
            temp->next=new;
        }
    }

}