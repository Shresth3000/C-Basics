#include <stdio.h>
int main()
{
    int n, c = 0;
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
       
        for (int k = 0; k < n; k++){
            int j = 0;
        while ( k!=i && str[i][j] != '\0' && str[k][j] != '\0')
        {
            j++;
        }
        if(str[i][j] == '\0' && str[k][j] == '\0'){
            printf("%s and %s are of same length\n",str[i],str[k]);
        }
        
    }
    }
    return 0;
}