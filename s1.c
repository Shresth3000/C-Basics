#include <stdio.h>
int main()
{
    char str1[50];
    printf("enter first string: ");
    scanf("%s", str1);
    char str2[50];
    printf("enter second string: ");
    scanf("%s", str2);
    char str3[100];
    int c = 0;
    for (int i = 0; str1[i] != '\0'; i++)
    {
        if (str1[i] != str2[i])
        {
            c++;
            break;
        }
    }
    if (c > 0)
    {
        printf("are not equal");
    }

    else
    {
        printf("Strings are equal");
    }
    return 0;
}