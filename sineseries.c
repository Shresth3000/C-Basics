#include <stdio.h>
double fact(int a)
{
    double p = 1;
    while (a > 0)
    {
        p *= a;
        a--;
    }
    return p;
}
double power(double a, int p)
{
    double x = 1;
    for (int i = 0; i < p; i++)
    {
        x *= a;
    }
    return x;
}
int main()
{
    int t;
    double n;
    printf("Enter the value of X in Sin(x): ");
    scanf("%lf", &n);
    printf("Enter number of terms: ");
    scanf("%d", &t);
    int p = 0;
    double s = 0;
    for (int i = 1; i <= t; i++)
    {
        p = 2 * i - 1;
        if (i % 2 == 0)
        {
            s -= (power(n, p) / fact(p));
        }
        else
        {
            s += (power(n, p) / fact(p));
        }
    }
    printf("%lf\n", s);
    return 0;
}
