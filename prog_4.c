#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *prev, *next;
};


void insertAfter(struct Node* node, int value) {
    struct Node* newNode = malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = node->next;
    newNode->prev = node;

    if (node->next != NULL)
        node->next->prev = newNode;

    node->next = newNode;
}

void deleteNode(struct Node** head, struct Node* del) {
    if (*head == del)
        *head = del->next;

    if (del->next)
        del->next->prev = del->prev;

    if (del->prev)
        del->prev->next = del->next;

    free(del);
}

void printList(struct Node* head) {
    while (head) {
        printf("%d ", head->data);
        head = head->next;
    }
}