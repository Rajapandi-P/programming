#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node*next;
    struct node*prev;
}*head,*temp,*tail,*nextnode,*curr;

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

void count()
{
    int cntfi
    ,cntten
    ,cnttwe=0,
    res=0,res1=0;
    temp=head;

    while(temp!=NULL)
    {
        if(temp->data==5)
        {
            cntfi++;
            temp=temp->next;
        }
        else if(temp->data==10)
        {
            cntten++;
            if(cntfi>=1)
            {
                cntfi--;
                res++;
            }

            temp=temp->next;
        }
        else if(temp->data==20) {

        cnttwe++;
        if((cntfi>=1 && cntten>=1)||(cntfi>=3)){
             if((cntfi>=1 && cntten>=1)){
                cntfi--;
                cntten--;
                res1++;
             }
             else if((cntfi>=3)){
                cntfi=cntfi-3;
                res1++;
             }

        }
        temp=temp->next;
        }
    }
    if(res>0&&res1>0){
        printf("%s","True");
    }
    else{
        printf("%s","False");
    }
}




int main()
{
    create();
    count();
}
