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
    printf("Enter indexes to switch\n");
    int p1,p2;
    scanf("%d %d", &p1,&p2);
    a[p1]=a[p1]+a[p2];
    a[p2]=a[p1]-a[p2];
    a[p1]=a[p1]-a[p2];
       for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
}