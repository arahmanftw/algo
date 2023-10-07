#include <stdio.h>
void swap(int number[], int i, int j)
{
    number[i] = number[i] ^ number[j];
    number[j] = number[i] ^ number[j];
    number[i] = number[i] ^ number[j];
}
void bubblesort(int arr[], int size) // 9 4 3 11 15 20 2 24 30 1 35
{
    int i, j, flag;
    for (i = 0; i < size - 1; i++)
    {
        flag = 0;
        for (j = 0; j < size - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr, j, j + 1);
                flag = 1;
            }
        }
        if (flag == 0)
        {
            break;
        }
    }
}
int main()
{
    int i, size;
    printf("How many elements are you going to enter?: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter %d elements: ", size);
    for (i = 0; i < size; i++)
        scanf("%d", &arr[i]);
    bubblesort(arr, size);
    printf("Order of Sorted elements: ");
    for (i = 0; i < size; i++)
        printf(" %d", arr[i]);
    return 0;
}
