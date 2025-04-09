// problem-7
#include <stdio.h>
int main()
{
    int p, t, n;
    float a = 1, r;
    int *pr = &p, *ti = &t, *nt = &n;
    float *am = &a, *ra = &r;
    printf("Enter principal amount: ");
    scanf("%d", pr);
    printf("enter rate: ");
    scanf("%f", ra);
    printf("enter no of time period: ");
    scanf("%d", ti);
    printf("enter no of times interest applied per time period : ");
    scanf("%d", nt);

    for (int i = 0; i < (*nt * (*ti)); i++)
    {
        *am = *am * (1 + ((*ra) / (100 * (*nt))));
    }
    *am *= *pr;
    printf("amount is: %f\n", *am);
    return 0;
}