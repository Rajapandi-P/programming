#include<stdio.h>
void main()
{
    int r,c;
    scanf("%d %d",&r,&c);
    int a[r][c];
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            scanf("%d ",&a[i][j]);
        }
    }
    int start=0;
    for(int i=0; i<r; i++)
    {
        if(start<=a[i][c-2])
        {
            printf("(%d,%d) ",a[i][c-2],a[i][c-1]);
            start=a[i][c-1];
        }
    }
}




