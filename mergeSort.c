// C program for Merge Sort
#include <stdio.h>
void merge(int arr[], int l, int mid, int h)
{
    int i, j, k;
    int temp[25];
    i = l;
    j = mid + 1;
    k = l;
    while (i <= mid && j <= h)
    {
        if (arr[i] <= arr[j])
        {
            temp[k] = arr[i];
            i++;
            k++;
        }
        else
        {
            temp[k] = arr[j];
            j++;
            k++;
        }
    }
    if (i > mid)
    {
        while (j <= h)
        {
            temp[k] = arr[j];
            j++;
            k++;
        }
    }
    else
    {
        while (i <= mid)
        {
            temp[k] = arr[i];
            i++;
            k++;
        }
    }
    for (k = l; k <= h; k++)
    {
        arr[k] = temp[k];
    }
}
void mergeSort(int arr[], int l, int h)
{
    if (l < h)
    {
        int m = l + (h - l) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, h);
        merge(arr, l, m, h);
    }
}

int main()
{
    int i, size;
    printf("How many elements are you going to enter?: "); // 9 3 4 3 11 15 20 2 24 30 1 35
    scanf("%d", &size);
    int number[size];
    printf("Enter %d elements: ", size);
    for (i = 0; i < size; i++)
        scanf("%d", &number[i]);
    mergeSort(number, 0, size - 1);
    printf("Order of Sorted elements: ");
    for (i = 0; i < size; i++)
        printf(" %d", number[i]);
    return 0;
}
