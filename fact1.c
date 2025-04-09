#include<stdio.h>
long int fact1(int n){
    long int p=1;
    while(n>0){
        p*=n;
        n--;
    }return p;
}
long int fact2(int *n){
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
    printf("Factorial by call by value is %ld\n",fact1(n));
    printf("Factorial by call by address is %ld\n",fact2(&n));
}