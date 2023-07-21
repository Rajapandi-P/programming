#include <stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
}*head,*tail;

void insert()
{
    int value;
    struct node *newnode=malloc(sizeof(struct node));
    scanf("%d",&value);
    newnode->data=value;
    newnode->next=NULL;
    if(head==NULL)
    {
        head=newnode;
        tail=newnode;
    }
    else
    {
        tail->next=newnode;
        tail=newnode;
    }
}

void display()
{
    struct node *temp;
    temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
void delete_from_beggining()
{
    struct node *temp;
    temp=head;
    head=temp->next;
    free(temp);
}
void insert_from_beggining()
{
    int value;
    struct node *newnode=malloc(sizeof(struct node));
…
