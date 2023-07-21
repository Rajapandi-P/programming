#include <stdio.h>

int main()
{
    int i;
    for(i=1;i<=16;i++)
    if(i==4 ||i==6 ||i==9 ||i==12 ||i==14)
    {
        printf("%d\t",i);
    }
    return 0;
}