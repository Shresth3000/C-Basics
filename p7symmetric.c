#include <stdio.h>
void main()
{
    int row, col;
    printf("Enter no. of rows and columns: ");
    scanf("%d %d", &row,&col);
    int a[row][col], b[row][col];
    if(row!=col){
    printf("Non symmetric\n");
    }
    else{
    printf("Enter Matrix : \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            
            scanf("%d", &a[i][j]);
        }
    }
      for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
           b[i][j]=a[j][i]; 
        }
    }
    int x=0;
      for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if(b[i][j]!=a[i][j]){
            x=-1;
            break;
        }
           
        }
    }
    if(x==-1) printf("Not Symmetric\n");
    else printf("Symmetric\n");
}
}