#include <stdio.h>
#include <stdlib.h>
struct node
{
int data;
struct node*next;
}*head,*newnode,*tail,*temp;
int main()
{
   int i,loc,item;
   newnode= (struct node *) malloc (sizeof(struct node));
   printf("\nEnter element value");  
        scanf("%d",&item);  
        newnode->data = item;  
        printf("\nEnter the location:");  
        scanf("\n%d",&loc);  
        temp=head;
        newnode->next=temp->next;   
        temp->next=newnode;
        printf("milddle insert node:",newnode);
}