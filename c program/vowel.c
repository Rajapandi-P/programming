#include<stdio.h>

void swap(int *a, int *b);

void segregateEvenOdd(int arr[], int size)
{
    int left = 0, right = size-1;
    while (left < right)
    {
        while (arr[left]%2 == 1 && left < right)
            left++;

        while (arr[right]%2 == 0 && left < right)
            right--;

        if (left < right)
        {
            swap(&arr[left], &arr[right]);
            left++;
            right--;
        }
    }
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int arr_size;
    scanf("%d",&arr_size);
    int arr[arr_size];
    for(int i = 0; i < arr_size; ++i)
    {
        scanf("%d", &arr[i]);
    }
    segregateEvenOdd(arr, arr_size);

    printf("Array after segregation ");
    for (int i = 0; i < arr_size; i++)
        printf("%d ", arr[i]);

    return 0;
}
