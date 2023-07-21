#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*next;
    struct node*prev;
}*head,*temp,*tail,*nextnode,*curr;

int main(){
    int n,mid;
    printf("Enter the number of nodes: ");
    scanf("%d",&n);
    create(n);
    mid=n/2;
    del(mid);
    //printf("%d",mid);
    display();
}
void create(int n)
{


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
    temp=tail;

    while(temp->prev!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->prev;
    }
printf("%d",head->data);
    printf("\n");
}

void del(int m){
        temp=head;
    int i=1;
    while(i<m){
        temp=temp->next;
        i++;
    }
    temp->next=temp->next->next;
    temp->next->prev=temp;
}
