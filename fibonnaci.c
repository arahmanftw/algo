#include <stdio.h>
int main()
{
    int n1, n2, n3, i, number;
    printf("Enter the frist two numbers of the series: ");
    scanf("%d %d", &n1, &n2);
    printf("Enter the number of elements: ");
    scanf("%d", &number);
    printf("Fibonacci Series: ");
    printf("%d %d", n1, n2);     // printing 0 and 1
    for (i = 2; i < number; ++i) // loop starts from 2 because 0 and 1 are already printed
    {
        n3 = n1 + n2;
        printf(" %d", n3);
        n1 = n2;
        n2 = n3;
    }
    return 0;
}