#include<stdio.h>
void swap(int,int);
void main(){
    int a,b;
    printf("Enter two numbers to swap: ");
    scanf("%d %d",&a,&b);
    printf("Before swapping: %d %d\n",a,b);
    swap(a,b);
}
void swap(int x,int y){
    int temp;
    temp=x;
    x=y;
    y=temp;
    printf("After swapping: %d %d\n",x,y);
}