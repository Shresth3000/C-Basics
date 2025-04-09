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
    int big2 = -2147483648; 
    for (int i = 1; i < n; i++)
    {
        if (big < a[i])
        {
            big = a[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] != big && big2 < a[i])
        {
            big2 = a[i];
        }
    }
    printf("Second biggest is : %d", big2);
}
