#include <stdio.h>
void main()
{
    char ch;
    int n;
    do
    {
        printf("Enter a number: ");
        scanf("%d", &n);
        if (n % 2 == 0)
            printf("EVEN\n");
        else
            printf("ODD\n");
        printf("Do you want to continue? Y/N: ");
        scanf(" %c", &ch);

    } while (ch != 'N' && ch != 'n');
}