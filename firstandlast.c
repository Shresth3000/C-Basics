#include <stdio.h>
int main()
{
    int n, c = 0, k;
    printf("Enter number of strings to enter: ");
    scanf("%d", &n);
    getchar();
    char str[n][100];
    printf("Enter strings : ");
    for (int i = 0; i < n; i++)
    {
        gets(str[i]);
    }
    for (int i = 0; i < n; i++)
    {
        int j = 0;
        printf("%c", str[i][0]);
        while (str[i][j] != '\0')
        {
            j++;
        }
        printf(" %c\n", str[i][j - 1]);
    }
    return 0;
}