#include<stdio.h>
int main()
{
    int mat1[100][100];
    int i,j,row,col;
    printf("enter tha value for row:");
    scanf("%d",& row);
    printf("enter the value for col:");
    scanf("%d", & col);
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {

            scanf("%d", & mat1[i][j]);
        }

    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {

            printf("%d",mat1[i][j]);
        }
        printf("\n");

    }

return 0;
}
