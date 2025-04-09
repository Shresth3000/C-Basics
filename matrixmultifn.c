#include <stdio.h>

void matrixMulti(int (*a)[100], int (*b)[100], int (*c)[100], int r1, int c1, int r2, int c2)
{

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            *(*(c + i) + j) = 0;
        }
    }
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            for (int k = 0; k < c1; k++)
            {
                *(*(c + i) + j) += *(*(a + i) + k) * *(*(b + k) + j);
            }
        }
    }
}

void main()
{
    int r1, c1, r2, c2;

    printf("Enter size of matrix A (rows and columns): ");
    scanf("%d %d", &r1, &c1);
    int A[100][100];
    printf("Enter matrix A elements:\n");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
    printf("Enter size of matrix B (rows and columns): ");
    scanf("%d %d", &r2, &c2);
    int B[100][100];
    if (c1 != r2)
    {
        printf("Matrix multiplication not possible\n");
        return;
    }
    printf("Enter matrix B elements:\n");
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }

    int C[100][100];

    matrixMulti(A, B, C, r1, c1, r2, c2);
    printf("Resultant Matrix:\n");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
}