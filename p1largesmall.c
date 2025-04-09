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
    int big = a[0];
    int small = a[0];
    for (int i = 1; i < n; i++)
    {
        if (big < a[i])
        {
            big = a[i];
        }
        if (small > a[i])
        {
            small = a[i];
        }
    }
    printf("%d is biggest and %d is smallest number\n", big, small);
}