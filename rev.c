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
    printf("using array name: ");
    for (int i = *n-1; i >=0; i--)
    {
       printf("%d ",*(arr+i));
    }
    printf("\nusing pointer: ");
    for (int i = *n-1; i >=0; i--)
    {
        printf("%d ",*(ptr+i));
    }
   
    return 0;
}