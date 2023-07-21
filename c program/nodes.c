#include<Stdio.h>
#include<Stdlib.h>

struct node
{
   int data;
    struct node *next;
}*head,*temp;
void main()
{
    create();
    display();
    insertbegining();
    display();
    insertend();
    display();
    insermid();
    display();
    }




void create()
{
    int n=1;
    //scanf("%d",&n);
    // for(int i=0; i<n; i++)
    while(n==1)
    {
        struct node*newnode = (struct node*)malloc(sizeof(struct node));
        printf("Enter the Data:");
        scanf("%d",&newnode->data);
        //scanf("%d",&data);
        //newnode = newnode->data;
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
        printf("1 to continue or 0 to break: ");
        scanf("%d",&n);
    }
}
void display()
{
    temp=head;
    while(temp!=NULL)
    {
        printf("%d\n", temp->data);
        temp=temp->next;
    }
}

void insertbegining()
{
    struct node*newnode= (struct node*)malloc(sizeof(struct node));
    printf("Enter an element to insert at first: ");
    scanf("%d",&newnode->data);
    newnode->next=head;
    head = newnode;
}

void insertend()
{
    struct node*newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter an element to insert at end: ");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;

    }
    temp->next=newnode;
}


void insermid(){
    int pos;
    printf("Enter the position to insert: ");
    scanf("%d",&pos);
    struct node*newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the data to insert: ");
    scanf("%d",&newnode->data);
    temp=head;
    int i=1;
    while(i<pos-1){
        temp=temp->next;
        i++;
    }
    newnode->next=temp->next;
    temp->next=newnode;
}

