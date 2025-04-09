#include<stdio.h>
void swap();
void main(){
    
    swap();
}
void swap(){
    int a,b;
    printf("Enter two numbers to swap: ");
    scanf("%d %d",&a,&b);
    printf("Before swapping: %d %d\n",a,b);
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("After swapping: %d %d\n",a,b);
}