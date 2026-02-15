#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void reversePrint(struct Node* head) {
    if (head == NULL) return;
    reversePrint(head->next);
    printf("%d ", head->data);
}

int main() {
    struct Node *head = NULL, *temp;

    for (int i = 1; i <= 5; i++) {
        temp = malloc(sizeof(struct Node));
        temp->data = i;
        temp->next = head;
        head = temp;
    }

    printf("Reverse traversal: ");
    reversePrint(head);

    return 0;
}