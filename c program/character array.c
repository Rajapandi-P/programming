#include<stdio.h>
#include<string.h>
int main()
{
char str[100];
int i;
printf("enter the input:");
for(i=0;i<10;i++)
{
scanf("%c",&str[i]);
}
for(i=0;i<10;i++)
{
printf("%c",str[i]);
}
return 0;
}
