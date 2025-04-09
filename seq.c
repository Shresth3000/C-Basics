#include <stdio.h>
void main()
{
    int n;
    printf("Enter number of terms: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        int s = 0;
        for (int j = 1; j <= i; j++)
        {
            s = s + j;
        }
        printf("%d ", s);
    }
}