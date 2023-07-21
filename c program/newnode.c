#include<Stdio.h>
#include<Stdlib.h>

struct node
{
  int data;
  struct node*next;
};
void main(){

struct node*newnode = (struct node*)malloc(sizeof(struct node));
 printf("ENTER THE DATA:");
 scanf("%d",&newnode->data);
 newnode->next=NULL;
 printf("node is created");
}
