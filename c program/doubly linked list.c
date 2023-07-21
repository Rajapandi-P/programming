#include<stdio.h>
#include<stdlib.h>
Struct node
{
    struct node *prev;
    int data;
    struct node *next;
}*head,*ptr;
void deletebegining()
{
    ptr=head;
    ptr=head->next;
    free(ptr);
}
void deleteatend()
{
    ptr=head;
    while()
}
