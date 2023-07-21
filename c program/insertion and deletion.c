#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node*next;
};
void insert(struct node*headref, int newdata)
{
    newnode = malloc(sizeof(struct node));
    newnode->next = NULL;
    newnode->next = head;
    head= newnode;
}
void deleteNode(struct node*head, int key)
{
    struct node *temp = *head_ref, *prev;
   if (temp != NULL && temp->data == key)
    {
        *headref = temp->next;
        free(temp);
        return;
    }

    while (temp != NULL && temp->data != key)
    {
        prev = temp;
        temp = temp->next;
    }
    if (temp == NULL)
    return 0;
    prev->next = temp->next;
    free(temp);
}
void printList(struct node *node)
{
    while (node != NULL)
    {
        printf("%d ", node->data);
        node = node->next;
    }
}
int main()
{
    struct node *head = NULL;
    insert(&head, 1);
    insert(&head, 2);
    insert(&head, 3);
    printf("A: ");
    scanf("%d",&head);
    printList(head);
    printf("\n");

    deleteNode(&head, 2);

    printf("B: ");
    printList(head);
    printf("\n");

    return 0;
}
