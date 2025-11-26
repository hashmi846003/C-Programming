//Finding whether the particular element is present in link list or not
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
int main(){
    struct node *head=NULL, *temp=NULL,*newNode=NULL;
   int n,i,found=0;
   printf("Enter number of nodes");
   scanf("%d",&n);
   if (n<0){
    return 1;
   }
   for(i=0;i<n;i++){
    newNode=(struct node*)malloc(sizeof(struct node));

    if(newNode==NULL){
        return -1;
    }
    printf("Enter data in Node %d",i+1);
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
    
    temp=head;
    while(temp!=NULL){
          printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
    int e;
    printf(" given value is \n");
    scanf("%d",&e);
 while(temp=head){
        if (temp->data==e){
             found=1;
            break;
     //   } else{
       //     printf("Absent");
        //}  
       //   printf("%d -> ", temp->data);
        temp = temp->next;
    }
    if (found)
        printf("Given element is PRESENT\n");
    else
        printf("Given element is ABSENT\n");

    return 0;
}
}