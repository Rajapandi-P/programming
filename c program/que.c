#include<stdio.h>
int size=4;
int r=-1;
int f=-1;
int q[4];
void dequeue();
void enqueue();
void display();
int main()
{
    enqueue();
    dequeue();
    display();
}
void enqueue()
{
    if(r==size-1)
    {
    printf("queue is full");
}
    else if(f==-1)
{
    f++;
    r++;
    scanf("%d",&q[r]);
}
    else
{
    r++;
    scanf("%d\n",&q[r]);
}
}
void dequeue()
{
    if(f==-1)
    {
        printf("queue is empty");
    }
    else
    {
        printf("deleted elements are:%d \n",q[f]);
        f++;
    }
}
{
    void display()
    {
    if(r==-1)
      {
        printf("queue isempty\n");
    }
    else
    {
        int i;
        for (i=r;i>=0;i++) 
        {
        
        printf("%d\n",q[r]);
    }
}
}
}
