// WAP to find out the same length strings

#include <stdio.h>

int main()
{
    int n;
    printf("Enter no. of strings you wish to input: ");
    scanf("%d", &n);
    char str[n][100];
    int length[n];

    printf("Enter the strings:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%s", str[i]);
    }

    for (int i = 0; i < n; i++)
    {
        length[i] = 0;
        for (int j = 0; str[i][j] != '\0'; j++)
        {
            length[i] += 1;
        }
    }

    for (int i = 0; i <= 100; i++)
    {
        int count = 0;
        int indices[n];
        for (int j = 0; j < n; j++)
        {
            if (length[j] == i)
            {
                indices[count] = j;
                count++;
            }
        }

        if (count > 1)
        {
            printf("\nStrings with length %d: \n", i);
            for (int k = 0; k < count; k++)
            {
                printf("%s\n", str[indices[k]]);
            }
        }
    }

    return 0;
}