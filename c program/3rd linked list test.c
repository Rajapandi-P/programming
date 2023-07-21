#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
};
void insertAtEnd(struct Node** headRef, int newData) {
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    newNode->data = newData;
    newNode->next = NULL;
    if (*headRef == NULL) {
        *headRef = newNode;
        return;
    }
    struct Node* lastNode = *headRef;
    while (lastNode->next != NULL) {
        lastNode = lastNode->next;
    }
    lastNode->next = newNode;
}
void printList(struct Node* node) {
    while (node != NULL) {
        printf("Data = %d\n", node->data);
        node = node->next;
    }
}
int main() {
    int numNodes,i, newData;
    struct Node* head = NULL;
    printf("Input the number of nodes: ");
    scanf("%d", &numNodes);
    for (i = 1; i <= numNodes; i++) {
        printf("Input data for node %d: ", i);
        scanf("%d", &newData);
        insertAtEnd(&head, newData);
    }
    printf("\nData entered in the list are:\n");
    printList(head);
    printf("\nInput data to insert at the end of the list: ");
    scanf("%d", &newData);
    insertAtEnd(&head, newData);
    printf("\nData, after inserted in the list are:\n");
    printList(head);
    return 0;
}
