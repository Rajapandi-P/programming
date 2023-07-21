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
    int choose;
do
{
    printf("1.enqueue:   2.dequeue:   3.display: \n");
    printf("enter your choice\n");
    scanf("%d",&choose);
    switch(choose);
    {
        case1:enqueue();
              break;
       case2:dequeue();
             break;
       case3:display();
             break;
    }
}
while(choose!=0);

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

    void display()
    {
    if(r==0)
      {
        printf("queue is empty\n");
    }
    else
    {
        int i;
        for (i=0;i<=r;i++)
        {

        printf("%d\n",q[r]);
    }
}
}