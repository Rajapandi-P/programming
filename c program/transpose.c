#include<stdio.h>
#include<math.h>
int main()
{
    int arr[100][100];
    int i,j,k,l;
    scanf("%d",&k);
    scanf("%d",&l);
    for(i=0;i<k;i++)
    {
        for(j=0;j<l;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(j=0;j<l;j++)
    {
        for(i=0;i<k;i++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
