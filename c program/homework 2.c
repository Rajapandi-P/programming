#include <stdio.h>

void main()
{
    int arr[] = {20, 36, 14, 20, 50, 32, 20, 19, 46, 20, 31};
    int size = sizeof(arr) / sizeof(arr[0]);
    int i, j, maxElement, count;
    int maxCount = 0;
    for (i = 0; i < size; i++)
    {
        count = 1;
        for (j = i + 1; j < size; j++)
        {
            if (arr[j] == arr[i])
            {
                count++;
                if (count > maxCount)
                {
                    maxElement = arr[j];
                }
            }
        }
    }
    count = 0;
    for(int i = 0;i < size;i++)
    {
        if(arr[i] == maxElement)
        {
            count++;
        }
    }
    printf("%d\n",maxElement);
    printf("%d",count);
}