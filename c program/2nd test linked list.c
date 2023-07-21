#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};
int main() {
    int n, i;
    struct node *head = NULL;
    struct node *current = NULL;
    printf("Input the number of nodes: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        struct node *new_node = (struct node*) malloc(sizeof(struct node));
        printf("Input data for node %d: ", i);
        scanf("%d", &new_node->data);
        new_node->next = NULL;
        if (head == NULL) {
            head = new_node;
            current = new_node;
        } else {
            current->next = new_node;
            current = new_node;
        }
    }
    int count = 0;
    current = head;
    printf("\nData entered in the list are:\n");
    while (current != NULL) {
        printf("Data = %d\n", current->data);
        count++;
        current = current->next;
    }
    printf("\nTotal number of nodes = %d\n", count);
    return 0;
}
