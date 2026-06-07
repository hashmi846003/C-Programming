#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

// Function to create a new node
struct node* newNode(int val) {
    struct node* n = (struct node*)malloc(sizeof(struct node));
    n->data = val;
    n->next = NULL;
    return n;
}

struct node* buildList(int n) {
    if (n == 0) return NULL;
    int val;
    printf("Enter %d values (sorted):\n", n);
    scanf("%d", &val);
    struct node* head = newNode(val);
    struct node* tail = head;
    for (int i = 1; i < n; i++) {
        scanf("%d", &val);
        tail->next = newNode(val);
        tail = tail->next;
    }
    return head;
}


void printList(struct node* head) {
    while (head) {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}


struct node* mergeTwoLists(struct node* l1, struct node* l2) {
    if (!l1) return l2;
    if (!l2) return l1;

    struct node* head = NULL;
    if (l1->data < l2->data) {
        head = l1;
        l1 = l1->next;
    } else {
        head = l2;
        l2 = l2->next;
    }

    struct node* tail = head;

    while (l1 && l2) {
        if (l1->data < l2->data) {
            tail->next = l1;
            l1 = l1->next;
        } else {
            tail->next = l2;
            l2 = l2->next;
        }
        tail = tail->next;
    }

    tail->next = (l1) ? l1 : l2;
    return head;
}

int main() {
    int n1, n2;
    printf("Enter number of nodes in list1: ");
    scanf("%d", &n1);
    struct node* head1 = buildList(n1);

    printf("Enter number of nodes in list2: ");
    scanf("%d", &n2);
    struct node* head2 = buildList(n2);

    printf("List1: ");
    printList(head1);
    printf("List2: ");
    printList(head2);

    struct node* merged = mergeTwoLists(head1, head2);
    printf("Merged List: ");
    printList(merged);

    return 0;
}
