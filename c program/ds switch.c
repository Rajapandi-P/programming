#include <stdio.h>
int top=-1;
int s[3];
int size=3;
void push();
void pop();
void peek();
void isempty();
void display();
int main()
{
    int choose;
do
{
    printf("1.push:2.pop:3.peak:4.isempty:5.display\n");
    printf("enter yourchoice\n");
    scanf("%d",&choose);
    switch(choose);
    {
        case1:push();
    break;
       case2:pop();
    break;
       case3:peek();
    break;
       case4:isempty();
    break;
       case5:display();
    break;
    }
}while(choose!=0);
}
void push()
{
if(top==size)
printf("overflow\n");
else
{
top++;
scanf("%d",&s[top]);
}
}
void pop()
{
    if(top==-1)
    {
        printf("underflow");
    }
    else
    {
        printf("deleted element;%d\n",s[top]);
        top--;
    }
}
void peek()
{
    if(top==-1)
    {
        printf("stack is empty\n");
    }
    else
    {
        printf("%d\n",s[top]);
    }
    

}
void isempty()
{
    if(top==-1)
    {
        printf("stack isempty\n");
    }
    else
    {
        printf("stack has some elements\n");
    }
    

}
void display()
{
    if(top==-1)
      {
        printf("stack isempty\n");
    }
    else
    {
        int i;
        for (i=top;i>=0;i++) 
        {
        
        printf("%d\n",s[top]);
    }
}
}


