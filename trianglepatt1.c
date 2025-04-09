#include<stdio.h>
void main(){
    int n;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    printf("Pattern 1: \n");
    for(int i=0;i<n;i++){
        for (int j=0;j<=i;j++){
            printf("*");
        }printf("\n");
    }printf("Pattern 2: \n");
     for(int i=1;i<=n;i++){
        for (int j=i;j<n;j++){
            printf(" ");
        }
        for(int k=1;k<=i;k++){
            printf("*");
        }
        printf("\n");
    }
}