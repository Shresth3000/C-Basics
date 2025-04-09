#include <stdio.h>
void main()
{
    int n;
    printf("Enter size of the array: ");
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter element at index %d: ", i);
        scanf("%d", &a[i]);
    }
    int x, j = -1;
    printf("Enter the number to find: ");
    scanf("%d", &x);
    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            j = i;
            break;
        }
    }
    if (j == -1)
        printf("Element is not found in array\n");
    else
        printf("Element is found at index: %d", j);
}