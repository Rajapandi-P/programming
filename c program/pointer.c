#include<stdio.h>
int sum(int *m,int *n)
{
*m=*m+5;
*n=*n+5;
printf("*in sum func: %d \n",*m);
printf("*in sum func: %d \n",*n);
}
int main()
{
    int a,b,*a1,*b1;
    printf("enter the value for a&b:\n");
scanf("%d",&a);
scanf("%d",&b);

a1=&a;
b1=&b;
printf("the value of a before func %d\n the value of b before func %d\n",a,b);

sum(a1,b1);
printf("the value of a is %d\n the value of b is %d\n",a,b);
return 0;
}
