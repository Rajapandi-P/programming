#include<stdio.h>
void lab()
{
int a=3;
int b=2;
int c=5;
int sum=a*b*c;
printf("multiply value\n");
printf("%d\n",sum);
}
void class()
{
int s=10;
int r=5;
int d=s/r;
printf("divided value\n");
printf("%d\n",d);
}
void board()
{ 
int i;
printf("\nboard value\n");
for(i=1;i<=10;i++)
printf("%d\t",i);
}
void head()
{
int j;
printf("\nhead value\n");
for(j=1;j<=20;j++)
if (j%2==0)
printf("%d\t",j);

}
void main()
{
lab();
class();
board();
head();
}
