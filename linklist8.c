//Reverse a link list using recursion
#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
};
struct Node *create_node(int data){
    struct Node *newNode=(struct Node*)malloc(sizeof(struct Node));
    if(newNode==NULL){
        printf("Memory not allocated.\n");
        exit(1);
    }
    newNode->data=data;
    newNode->next=NULL;
    return newNode;
}
struct Node* reverseList(struct Node* head) {
    if (head == NULL || head->next == NULL) {
        return head;
    }
    struct Node* rest = reverseList(head->next);
    head->next->next = head;
    head->next = NULL;
    return rest;
}
void printList(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
int main(){
    struct Node *head=NULL,*temp=NULL, *newNode=NULL;
    int i,n,data;
    printf("Enter the number of Nodes: ");
    scanf("%d",&n);         
    for(i=0;i<n;i++){
        printf("Enter data for node %d: ",i+1);
        scanf("%d",&data);
        newNode=create_node(data);
        if(head==NULL){
            head=newNode;
            temp=newNode;
        }
        else{
            temp->next=newNode;
            temp=newNode;
        }
    }
    printf("The original linked list is:\n");
    printList(head);
    head = reverseList(head);
    printf("The reversed linked list is:\n");
    printList(head);
    return 0;   
}