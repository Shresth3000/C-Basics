#include <stdio.h>
void main()
{
    int n;
    printf("Enter thr number of natural numbers: ");
    scanf("%d", &n);
    int i = 1, s = 0;
    while (i <= n)
    {
        s = s + (i * i);
        i++;
    }
    printf("Sum of squares of %d natural numbers is %d\n", n, s);
}