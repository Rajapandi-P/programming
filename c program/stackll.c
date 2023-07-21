#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node*next;
}*temp,*top;

int main(){
    push();
    show();
    pop();
    show();
}

void push(){
    int n;
    scanf("%d",&n);
    while(n-->0){
    struct node*newnode=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    if(top==NULL){
        top=newnode;
        temp=top;
    }
    else{
        newnode->next=top;
        top=newnode;
    }
    }
}

void show(){
    if(top==NULL){
        printf("Underflow");
    }
    else{
        temp=top;
        while(temp!=NULL){
            printf("%d ",temp->data);
            temp=temp->next;
        }
        printf("\n");
    }
}

void pop(){
    temp=top;
    top=top->next;
    free(temp);
}
