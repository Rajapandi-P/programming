#include<stdio.h>
int main()
{
    int arr[size];
    int top=-1;
}
void push()
{
    int d;
    if(top==size-1)
    {)
        printf("stack is full");
    }
    else
    {
        top++;
        scanf("%d",&d);
        arr[top]=d;
    }
void top()
{
    printf(arr[top]);
}
void pop()
{
    if(top==-1)
    {
        printf("Underflow");
    }
    else
    {
        arr[top]=0;
        printf("%d is deleted",arr[top]);
        top--;
    }
}void display()
{
    for(int i=size-1;i>=0,i++)
        printf(arr[i]);
}
}
