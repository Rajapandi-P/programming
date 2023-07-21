#inclue<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node*next;
}*front,*rear,*temp;

void enque(){
        int n;
    scanf("%d",&n);
    while(n-->0){
    struct node*newnode=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    if(front==NULL){
        front=rear=newnode;
        temp=rear;
    }
    else{
        newnode->next=front;
        rear=newnode;
    }
    }
}
