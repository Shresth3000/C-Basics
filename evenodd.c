#include <stdio.h>
int main()
{
    int size;
    int *n = &size;
    printf("Enter size of array: ");
    scanf("%d", n);
    int arr[*n];
    int *ptr = arr;
    printf("Enter integers: ");
    for (int i = 0; i < *n; i++)
    {
        scanf("%d", (arr + i));
    }
    printf("using array name: \n");
    for (int i = 0; i < *n; i++)
    {
        if (*(arr + i) % 2 == 0)
        {
            printf("%d is even\n", *(arr + i));
        }
        else
        {
            printf("%d is odd\n", *(arr + i));
        }
    }

    printf("using pointer: \n");
    for (int i = 0; i < *n; i++)
    {
        (*(ptr + i) % 2 == 0)?printf("%d is even\n", *(ptr + i)):printf("%d is odd\n", *(ptr + i));
    }

    return 0;
}