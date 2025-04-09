#include<stdio.h>
int sum1(int n){
    int s=0;
    while(n!=0){
        s+=(n%10);
        n/=10;
    }return s;
}
int sum2(int* n){
    int s=0;
    while(*n!=0){
        s+=(*n%10);
        *n/=10;
    }return s;
}
void main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Using call by value: %d\n",sum1(n));
    printf("Using call by address: %d\n",sum2(&n));
    
}