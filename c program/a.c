#include<stdio.h>
int main()
{
    int num;
    int rem,digit=0;
    scanf("%d",&num);
    while(num!=0)
    {
        rem=num%10;
        digit=digit*10+rem;
        num=num/10;
    }


    for(;digit>0;digit=digit/10)
    {
        rem=digit%10;
        printf("%d ",rem);
    }
}
