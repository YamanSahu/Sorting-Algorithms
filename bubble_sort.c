#include <stdio.h>

void BubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n-1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void main()
{
    int arr[] = {50,40,30,20,10};
    printf("before Sorting : ");
    for (int i = 0; i < 5; i++)
        printf("%d ", arr[i]);
    
    BubbleSort(arr, 5);
    printf("\nAfter Sort : ");
    for (int i = 0; i < 5; i++)
        printf("%d ", arr[i]);
}


/* 
        Important 
        1. Time Complexity = O(n^2) in worst case
                             O(n^2) in best case
        2. Space Compleexity = O(1)

        -> Inplace : yes
        -> Stable : yes
        -> Adaptive : no
 */