#include<stdio.h>
int addition(int num1,int num2)
{
 int answer;
 answer=num1+num2;
 return answer;
}
int main()
{
 int s=403,m=304;
 int answer=addition(s,m);
 printf("%d",answer);
 return 0;
}
