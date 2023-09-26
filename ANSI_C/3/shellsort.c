#include <stdio.h>

void shellsort(int v[], int n)
{
    int gap, i, j, temp;
    for(gap = n/2; gap > 0; gap /= 2)
        for(i = gap; i < n; i++)
            for(j =i-gap; j>=0 && v[j]>v[j+gap]; j -= gap) {
                temp = v[j];
                v[j] = v[j+gap];
                v[j+gap] = temp;
            }
}

int main()
{
    int arr[] = {10, 9, 8, 7, 5, 11, 2, 3};
    int size = sizeof(arr)/sizeof(int);
    for(int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");

    shellsort(arr, size);

    for(int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}