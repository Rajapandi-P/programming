#include<stdio.h>
#include<stdlib.h>
int main()
{
    char ch[100];
   // printf("enter your string:");
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%c",&ch[i]);

    }
    int arr[100];
    for(int i=0 ,j=i+1;i<n;i++)
    {


        if(ch[i]==ch[j])
        {
            count++;

        }
        else
        {


        }
    }

}
