#include <stdio.h>

void swap(int *p, int *q)
{
    int temp;
    temp = *p;
    *p = *q;
    *q = temp;
}

int Partition(int arr[], int p, int r)
{
    int x = arr[r];
    int i = r;

    for (int j = i - 1; j >= p; j--)
    {
        if (arr[j] > x)
        {
            i = i - 1;
            swap(arr + i, arr + j);
        }
    }
    swap(arr + i, arr + p);
    return i;
}

void QuickSort(int arr[], int p, int r)
{
    if (p < r)
    {
        int q = Partition(arr, p, r);
        QuickSort(arr, p, q - 1);
        QuickSort(arr, q + 1, r);
    }
}

void main()
{
    int arr[] = {50, 40, 30, 20, 10};
    printf("Before Sorting : ");
    for (int i = 0; i < 5; i++)
        printf("%d ", arr[i]);

    QuickSort(arr, 0, 4);
    printf("\nAfter Sorting : ");
    for (int i = 0; i < 5; i++)
        printf("%d ", arr[i]);
}

/* 
        Important 
        1. Time Complexity = 
                O(nlogn) in avg or best case
                O(n^2) in worst case
        2. Space Complexity = 
                O(logn) because of stack

        -> Inplace : yes
        -> Stable : no
        -> Adaptive : yes
 */
