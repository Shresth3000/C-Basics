#include <stdio.h>
void main()
{
    int row, col;
    printf("Enter no. of rows and columns: ");
    scanf("%d %d", &row,&col);
    int a[row][col],s=0;
    printf("Enter Matrix : \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
           
            scanf("%d", &a[i][j]);
        }
    }
     for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if(i==j){
                s=s+a[i][j];
            }
        }
    }
    float avg=s/row;
   printf("Average of diagonal elements is: %f",avg);
}