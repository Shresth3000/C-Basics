#include <stdio.h>
int main()
{
    int size;
    int *n = &size;
    printf("Enter size of array: ");
    scanf("%d", n);
    int arr[*n];
    int *ptr = arr;
    printf("Enter array elements: ");
    for (int i = 0; i < *n; i++)
    {
        scanf("%d", (arr + i));
    }
    int s = 0;
    int *sum = &s;
    printf("Sum using array name: ");
    for (int i = 0; i < *n; i++)
    {
        *sum += *(arr + i);
    }
    printf("%d\n", *sum);

    *sum = 0;
    printf("Sum using pointer: ");
    for (int i = 0; i < *n; i++)
    {
        *sum += *(ptr + i);
    }
    printf("%d\n", *sum);
    return 0;
}