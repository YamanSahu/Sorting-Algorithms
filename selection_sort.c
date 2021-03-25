#include <stdio.h>

void swap(int *p, int *q)
{
    int temp;
    temp = *p;
    *p = *q;
    *q = temp;
}

void SelectionSort(int arr[], int n)
{
    int i, j, min, loc;
    for (i = 0; i < n-1; i++)
    {
        min = arr[i];
        loc = i;
        for (j = i+1; j < n; j++)
        {
            if (min > arr[j])
            {
                min = arr[j];
                loc = j;
            }
        }

        if (i != loc)
            swap(arr+i, arr+loc);
        
    }
}

void main()
{
    int arr[] = {50,40,30,20,10};
    printf("before Sorting : ");
    for (int i = 0; i < 5; i++)
        printf("%d ", arr[i]);
    
    SelectionSort(arr, 5);
    printf("\nAfter Sorting : ");
    for (int i = 0; i < 5; i++)
        printf("%d ", arr[i]);
}


/* 
        Important 
        1. Time Complexity = O(n^2) on both best and worst case
        2. Space Complexity = O(1)

        -> Inplace : yes
        -> Stable : no, because we choose min wither from left end or from right end
        -> Adaptive : no, both best and worst case has Time Complexity = O(n^2)
 */