#include<stdio.h>
#include<stdlib.h>

struct node
{
    char data;
    struct node*next;
}*temp,*head;

void create()
{
    int n;
    scanf("%d",&n);
    while(n-->0)
    {
        struct node*newnode = (struct node*)malloc(sizeof(struct node));
        scanf("%c",&newnode->data);
        newnode->next=NULL;
        if(head==NULL)
        {
            head=newnode;
            temp=head;
        }
        else
        {
            temp->next=newnode;
            temp=temp->next;
        }
    }
}


int main()
{   int t;
scanf("%d",&t);
while(t-->0){
    create();
}
}

