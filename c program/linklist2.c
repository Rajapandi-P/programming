#include<stdio.h>
#include<stdlib.h>
void insert();
void display();
void delection();
struct node
{
    int data;
    int newnode;
    struct node*next;
    struct node*prev;
    *newnode,*temp,*head;
};
void main()
{
    insert();
    display();
    delection();-
    display();
}
void insert()
{
    int choice=1;
    while(choice==1)
    {
        newnode=malloc(sizeof(struct node));
        printf(enter the data);
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if(head==0)
        {
            head=newnode;
        }
        else
        {
            temp=head;
            while(temp->next!=0)
            {
                temp=temp->next;
            }
            temp->next=newnode;
            newnode->prev=temp;
        }
    }
    void delection()
    {

        int element;
        printf("enter the element");
        scanf("%d",&element);
        temp=head;
        while(temp->data=element)
        {
            temp=temp->next;
        }
        temp->prev->next=temp->next;
        temp->next->prev=temp->prev;
        free(temp);
    }
    void display()
{
   temp=head;
   while(temp->next!=head)
{
   printf("%d  ",temp->data);
   temp=temp->next;
}
   printf("%d  ",temp->data);
}
}
