#include<stdio.h>
int matrixmulti(int (*a)[100],int (*b)[100],int (*c)[100],int r1,int c1,int r2,int c2){
  
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            *(*(c+i)+j)=0;
            for(int k=0;k<c1;k++){
                *(*(c+i)+j)+=*(*(a+i)+k)*(*(*(b+k)+j));
            }  
        }
    }
}
void main(){
    int r1,c1,r2,c2;
    int A[100][100],B[100][100],C[100][100];
    printf("Enter size of matrix A: ");
    scanf("%d %d",&r1,&c1);
    printf("Enter matrix A: \n");
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            scanf("%d",&A[i][j]);
        }
    }
    printf("Enter size of matrix B: ");
    scanf("%d %d",&r2,&c2);
    if(c1!=r2){
        printf("Not possible\n");
    }
    else{
        printf("Enter matrix B: \n");
        for(int i=0;i<r2;i++){
            for(int j=0;j<c2;j++){
                scanf("%d",&B[i][j]);
            }
        }
        matrixmulti(A,B,C,r1,c1,r2,c2);
        for(int i=0;i<r1;i++){
            for(int j=0;j<c1;j++){
                printf("%d ",C[i][j]);
            }printf("\n");
        }
        
    }

}