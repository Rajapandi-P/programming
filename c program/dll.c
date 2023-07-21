#include<stdio.h>
#include<stdlib.h>


struct node
{
    int data;
    struct node*next;
    struct node*prev;
}*head,*temp,*tail,*nextnode,*curr;

int main()
{
    create();
    display();
    insertbegin();
    display();
    insertend();
    insertmid();
    display();
    delbegin();
    delend();
    display();
    delmid();
    display();
}

void create()
{
    int n;
    printf("Enter the number of nodes: ");
    scanf("%d",&n);
    while(n-->0)
    {
        struct node*newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter the data: ");
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        newnode->prev=NULL;
        if(head==NULL)
        {
            head=tail=newnode;
        }
        else
        {
            tail->next=newnode;
            newnode->prev=tail;
            tail=newnode;
        }

    }
}

void display()
{
    temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}


void insertbegin()
{

    struct node*newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the data to insert at first: ");
    scanf("%d",&newnode->data);
    newnode->prev=NULL;
    newnode->next=NULL;
    newnode->next=head;
    head->prev=newnode;
    head=newnode;
}
void insertend()
{
    struct node*newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the data to insert at end: ");
    scanf("%d",&newnode->data);
    newnode->prev=NULL;
    newnode->next=NULL;
    tail->next=newnode;
    newnode->prev=tail;
    tail=newnode;
}

void insertmid()
{
    int pos,i=1;
    printf("Enter the position: ");
    scanf("%d",&pos);
    temp=head;

    while(i<pos)
    {
        temp=temp->next;
        i++;
    }
    struct node*newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the data to insert at mid: ");
    scanf("%d",&newnode->data);
    newnode->prev=NULL;
    newnode->next=NULL;
    newnode->next=temp->next;
    newnode->prev=temp;
    temp->next=newnode;
    temp->next->prev=newnode;
}

void delbegin()
{
    temp=head;
    head=temp->next;
    head->prev=NULL;
    free(temp);
}

void delend()
{
    tail=tail->prev;
    tail->next=NULL;
    free(tail->next);
}

void delmid()
{
    int pos;
    printf("Enter the position: ");
    scanf("%d",&pos);
    temp=head;
    for(int i=1; i<pos-1; i++)
    {
        temp=temp->next;
    }
    temp->next=temp->next->next;
    temp->next->prev=temp;
}
