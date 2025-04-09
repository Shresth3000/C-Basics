#include <stdio.h>
int noDigit(int);
void main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    int p = noDigit(n);
    int num = n, s = 0;
    while (num > 0)
    {
        int prod = 1;
        int r = num % 10;
        for (int i = 1; i <= p; i++)
        {
            prod *= r;
        }
        s += prod;
        num /= 10;
    }
    if (s == n)
        printf("Armstrong\n");
    else
        printf("Not Armstrong\n");
}
int noDigit(int n)
{
    int c = 0;
    while (n > 0)
    {
        c++;
        n /= 10;
    }
    return c;
}