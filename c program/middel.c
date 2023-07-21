#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node*next;
}*head,*temp,*prev,*nextnode;

int create(int n)
{
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

int del(int mid){
    temp=head;
    int i=1;
    while(i<m){
        temp=temp->next;
        i++;
    }
    temp->next=temp->next->next;
}

int main(){
    int n,mid;
    printf("Enter the number of nodes: ");
    scanf("%d",&n);
    create(n);
    mid=n/2;
    del(mid);
    //printf("%d",m);
    display();
}
