#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node*next;
}*head,*temp,*prev,*nextnode;

int create()
{
    int n;
    printf("Enter the number of nodes: ");
    scanf("%d",&n);
    while(n-->0)
    {
        struct node*newnode = (struct node*)malloc(sizeof(struct node*));
        printf("Enter the values: ");
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if(head==NULL)
        {
            head=newnode;
            temp=newnode;
        }
        else
        {
            temp->next=newnode;
            temp=temp->next;
        }
    }
}

int display()
{
    temp = head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp= temp->next;
    }
    printf("\n");
}

int insertfirst()
{
    struct node *newnode = (struct node*)malloc(sizeof(struct node*));
    printf("Enter the value to insert at first: ");
    scanf("%d",&newnode->data);
    newnode->next=head;
    head = newnode;

}
int insertend()
{

    struct node*newnode =(struct node*)malloc(sizeof(struct node*));
    printf("Enter the value to insert at end: ");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newnode;
}
void insermid()
{
    int pos;
    int count=0;
    temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
        count++;
    }
    printf("Enter the position to insert: ");
    scanf("%d",&pos);

    if(pos-1>count)
    {
        printf("Invalid Position!\n");
    }
    else
    {
        int i=1;
        temp=head;
        while(i<pos-1)
        {
            temp=temp->next;
            i++;
        }
        struct node*newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter the data to insert: ");
        scanf("%d",&newnode->data);
        newnode->next=temp->next;
        temp->next=newnode;
    }
}

void delbegin()
{
    printf("Deletion at Begining!\n");
    temp=head;
    head=head->next;
    free(temp);
}
void delend()
{
    temp=head;
    while(temp->next!=NULL)
    {
        prev=temp;
        temp=temp->next;
    }
    if(temp==head)
    {
        temp=NULL;
    }
    else
    {
        printf("Deletion at End!\n");
        prev->next=NULL;

    }
    free(temp);
}


void delmid()
{
    int pos,count=0;
    printf("Enter the position to delete: ");
    scanf("%d",&pos);
    int i=1;
    temp=head;
    while(i<pos-1)
    {
        temp=temp->next;
        i++;
    }

    temp->next=temp->next->next;

}


void search()
{
    int ele,count=0;
    printf("Enter the element to search: ");
    scanf("%d",&ele);
    temp=head;
    while(temp->next!=NULL)
    {
        if(temp->data==ele)
        {
            count++;
        }
        temp=temp->next;
    }
    if(count==1){
        printf("Yes");
    }
    else{
        printf("No");
    }
}

int main()
{
    create();
    display();
    insertfirst();
    display();
    insertend();
    display();
    insermid();
    display();
    delbegin();
    display();
    delend();
    display();
    delmid();
    display();
    search();
}
