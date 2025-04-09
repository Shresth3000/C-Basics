#include <stdio.h>
void main()
{
    int r,c;
    printf("Enter no. of rows and columns: ");
    scanf("%d %d", &r, &c);
    int a[r][c];
    printf("Enter matrix: \n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {

            scanf("%d", &a[i][j]);
        }
    }
    int s=0;
    for(int i=0;i<r;i++){
    for(int j=i;j<c;j++){
        if(j!=i){
            s+=a[i][j];
        }
    }
    }printf("%d",s);
}