#include<stdio.h>
int sum(int m,int n)
{
m=m+5;
n=n+5;
printf("*in sum func: %d \n",m);
printf("*in sum func: %d \n",n);
}
int main()
{
    int a,b;
    printf("enter the value for a&b:\n");
scanf("%d",&a);
scanf("%d",&b);
sum(a,b);
printf("the value of a is %d the value of b is %d\n");
return 0;
}
