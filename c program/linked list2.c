#include <stdio.h>
#include <stdlib.h>
struct node
{
int data;
struct node*next;
}*head,*newnode;
int main()
{
newnode=(struct node*)malloc(sizeof(struct node));
printf("enter the data\n");
scanf ("%d",&newnode->data);
newnode->next=head;
head=newnode;
}

