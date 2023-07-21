#include<stdio.h>
#include<stdlib.h>
void insert();
void display();
struct node
{
 int data;
 struct node*next;
}
 *newnode,*temp,*head;
 void main()
{
    insert();
    display();
}
void insert()
{
    int choice=1;
    while (choice==1)
{
    newnode=malloc(sizeof(struct node));
    printf("enter the data\n");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    if(head==0)
    {
        head=newnode;
        newnode->next=head;
    }
 else
 {
     temp=head;
     while(temp->next!=head)
 {
     temp=temp->next;
 }
temp->next=newnode;
newnode->next=head;
}
printf("enter the choice\n");
scanf("%d",&choice);
}
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
