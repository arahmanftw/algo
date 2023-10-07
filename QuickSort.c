#include <stdio.h>
void swap(int arr[], int x, int y)
{
    int temp;
    temp = arr[x];
    arr[x] = arr[y];
    arr[y] = temp;
}
void quicksort(int number[], int first, int last)
{
    int i, j, pivot, temp;
    if (first < last)
    {
        pivot = first;
        i = first;
        j = last;
        while (i < j)
        {
            while (number[i] <= number[pivot] && i < last)
                i++;
            while (number[j] > number[pivot])
                j--;
            if (i < j)
            {
                swap(number, i, j);
            }
        }
        swap(number, pivot, j);
        quicksort(number, first, j - 1);
        quicksort(number, j + 1, last);
    }
}
int main()
{
    int i, size;
    printf("How many elements are you going to enter?: ");
    scanf("%d", &size);
    int number[size];
    printf("Enter %d elements: ", size);
    for (i = 0; i < size; i++)
        scanf("%d", &number[i]);
    quicksort(number, 0, size - 1);
    printf("Order of Sorted elements: ");
    for (i = 0; i < size; i++)
        printf(" %d", number[i]);
    return 0;
}
