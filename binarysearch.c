#include <stdio.h>
void main()
{
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter sorted array: ");
    for (int i = 0; i < n; i++)
    { 
        scanf("%d", &a[i]);
    }
    int x;
    printf("Enter element to search: ");
    scanf("%d", &x);
    int low = 0, high = n, mid;
    while (low <= high)
    {
        mid = low + (high - low) / 2;
        if (a[mid] == x)
        {
            printf("Element found at: %d\n", mid);
            break;
        }
        else if (a[mid] > x)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
}