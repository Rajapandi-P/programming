#include <stdio.h>
int sum(int n1,int n2)
{
    n1=n1*2;
   n2=n2*2;
   printf("%d",n1,n2);
    return 0;
}
int main()
{
    int a;
    int b;
    int c;
    scanf("%d",&a);
    scanf("%d",&b);
    c=a+b;
    sum(a,b);
    printf("%d %d",a,b);
    return 0;
}
