#include<stdio.h>
long int fact(int *n){
    long int p=1;
    while(*n>0){
        p*=*n;
        *n-=1;;
    }return p;
}
void main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("%ld",fact(&n));
}