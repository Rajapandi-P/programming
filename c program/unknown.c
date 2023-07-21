#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {

        int a,b,c;
        scanf("%d%d",&a,&b);
        c=a+b;
        if(c%2==0)
        {

            printf("no");
        }
        else
        {

            printf("yes");
        }
    }
}
