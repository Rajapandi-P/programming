#include<stdio.h>
#include<stdlib.h>
    void insertatbegin();
    void creatennode();
struct node
{
    int data;
    struct node *next;
}*head,*tail,*newnode,*temp;
int main()
{
    insertatbegin();
    creatennode();
}
    void insertatbegin()
    {
        int value;
        
        printf("Enter the value of the node : \n");
        scanf("%d\n",&value);
        newnode=(struct node*)malloc(sizeof(struct node));
        newnode->data=value;
        newnode->next=NULL;
        head=newnode;
        tail=newnode;
    }
    void creatennode()
    {
        int i,n,value;
        printf("enter data\n");
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            newnode=(struct node*)malloc(sizeof(struct node));
            scanf("%d",&value);
            newnode->data=value;
            newnode->next=NULL;
            if(head==NULL)
            {
                head=newnode;
                tail=newnode;
            }
            else
            {
                tail->next=newnode;
                tail=newnode;
            }
        }
       
       
    }