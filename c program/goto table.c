#include<stdio.h>
int main()
{
    int num,i=1;
    scanf("%d",&num);
    table:
    printf("%d+%d=%d\n",i,num,num+i);
    i++;
    if(i<=15)
    goto table;
}