#include <stdio.h>
void swap(int arr[], int x, int y)
{
    arr[x] = arr[x] ^ arr[y];
    arr[y] = arr[x] ^ arr[y];
    arr[x] = arr[x] ^ arr[y];
}
void indexSort(int arr[], int n, int index)
{
    int i, j, x, y;
    for (i = index; x != index - 2; i++) // 9 1 3 2 7 4
    {
        x = i % n;
        for (j = x + 1; j > -1; j++)
        {
            y = j % n;
            if (y == index)
                break;
            if (arr[x] >= arr[y])
                swap(arr, x, y);
        }
    }
}
int main()
{
    int i, j, n, index, x, y;
    printf("Enter the size: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the values: ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Enter the index number: ");
    scanf("%d", &index);
    indexSort(arr, n, index);
    printf("sorted elements: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}
