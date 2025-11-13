#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node* next;
};

struct Node* createNode(int data){
    struct Node* newNode=(struct Node *)malloc(sizeof(struct Node));
    if (!newNode) {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    newNode->data=data;
    newNode->next=NULL;
    return newNode;
}
struct Node* createLinkedList(int n) {
    struct Node *head = NULL, *temp = NULL, *newNode = NULL;
    int data;

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &data);
        newNode = createNode(data);
        if (head == NULL)
            head = newNode;
        else
            temp->next = newNode;

        temp = newNode;
    }
    return head;
}

// Function to display the linked list
void displayLinkedList(struct Node* head) {
    struct Node* temp = head;
    printf("Linked List: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Main function
int main() {
    int n;
    struct Node* head = NULL;

    printf("Enter the number of nodes: ");
    scanf("%d", &n);

    head = createLinkedList(n);
    displayLinkedList(head);

    return 0;
}
