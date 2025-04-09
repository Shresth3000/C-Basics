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
        str3[i]=str1[i];
        ++c;
    }
    printf("%d\n",c);
    for (int i = c; str2[i-c] != '\0'; i++)
    {
        str3[i]=str2[i-c];
    }
    printf("%s\n",str3);
    return 0;
}