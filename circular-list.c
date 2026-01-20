#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node* insertEnd(struct node *head, int value);
void display(struct node *head);

int main()
{
    struct node *head = NULL;
    int n, value;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter value: ");
        scanf("%d", &value);
        head = insertEnd(head, value);
    }

    printf("Circular Linked List:\n");
    display(head);

    return 0;
}

struct node* insertEnd(struct node *head, int value)
{
    struct node *newNode = malloc(sizeof(struct node));
    newNode->data = value;

    if (head == NULL)
    {
        newNode->next = newNode;
        return newNode;
    }

    struct node *temp = head;
    while (temp->next != head)
        temp = temp->next;

    temp->next = newNode;
    newNode->next = head;

    return head;
}

void display(struct node *head)
{
    if (head == NULL)
    {
        printf("Empty list\n");
        return;
    }

    struct node *temp = head;
    do {
        printf("%d -> ", temp->data);
        temp = temp->next;
    } while (temp != head);

    printf("(head)\n");
}
