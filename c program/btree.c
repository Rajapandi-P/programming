#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node*left;
    struct node*right;
}*root,*temp,*temp1,*temp2;


void create(int n)
{
    int flag=0;
    struct node*newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=n;
    newnode->left=NULL;
    newnode->right=NULL;
    if(root==NULL)
    {
        root=newnode;
        temp=temp1=newnode;
    }
    else
    {
        if(temp->left==NULL)
        {
            temp->left=newnode;
            break;
        }
        else if(temp->right==NULL)
        {
            temp->right=newnode;
            break;
        }
        else if(flag==0){
            temp=temp1->left;
            flag=1;
        }
        else{
            temp=temp1->right;
            flag=0;
            temp1=temp1->left;
        }
    }
}

void inorder(){

}

int main()
{
    int n;

    do
    {
        scanf("%d",&n);
        create(n);
    }
    while(n>0);
}
