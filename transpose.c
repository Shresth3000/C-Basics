#include <stdio.h>
void main()
{
    int r, c;
    printf("Enter no. of rows and columns: ");
    scanf("%d %d", &r,&c);
    int a[r][c], b[c][r];
    printf("Enter Matrix : \n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            
            scanf("%d", &a[i][j]);
        }
    }
      for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
           b[i][j]=a[j][i]; 
        }
    }
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
          printf("%d ",b[i][j]);
        }printf("\n");
    }
}