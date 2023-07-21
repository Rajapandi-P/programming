#include<stdio.h>
#include<string.h>
int main()
{
char str[100];
int i,a,j;
printf("enter the input:");
for(i=0;i<10;i++)
{
scanf("%c",&str[i]);
}
printf("enter the range:");
scanf("%d",&a);
for(j=a-1;j>=0;j--)
{
printf("%c",str[j]);
}
for(i=a;i<10;i++)

printf("%c",str[i]);
return 0;
}
