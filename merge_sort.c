#include <stdio.h>

void Merge(int arr[], int p, int q, int r)
{
    int nl = q - p + 1;
    int nr = r - q;

    int L1[nl], R1[nr];

    int i, j, k;
    for (i = 0; i < nl; i++)
        L1[i] = arr[p + i];

    for (i = 0; i < nr; i++)
        R1[i] = arr[q + i + 1];

    i = 0;
    j = 0;
    k = p;

    while(i < nl && j < nr)
    {
        if (L1[i] < R1[j])
        {
            arr[k] = L1[i];
            i++;
        }
        else 
        {
            arr[k] = R1[j];
            j++;
        }
        k++;
    }


    /* For remaning element */

    while (i < nl)
    {
        arr[k] = L1[i];
        i++;
        k++;
    }
    while (j < nr)
    {
        arr[k] = R1[j];
        j++;
        k++;
    }
}

void MergeSort(int arr[], int p, int r)
{
    if (p < r)
    {
        int q = (p + r) / 2;
        MergeSort(arr, p, q);
        MergeSort(arr, q + 1, r);
        Merge(arr, p, q, r);
    }
}

void main()
{
    int arr[] = {50, 40, 30, 20, 10};
    printf("Before Sorting : ");
    for (int i = 0; i < 5; i++)
        printf("%d ", arr[i]);

    MergeSort(arr, 0, 4);
    printf("\nAfter Sorting : ");
    for (int i = 0; i < 5; i++)
        printf("%d ", arr[i]);
}

/* 
        Important 
        1. Time Complexity = 
                O(nlogn) 
        2. Space Complexity = 
                O(n)

        -> Inplace : no
        -> Stable : yes
        -> Adaptive : no
 */
