#include<stdio.h>
int main(){
    int a,b;
    int *p1=&a,*p2=&b;
    printf("Enter first no: ");
    scanf("%d",p1);
    printf("Enter second no: ");
    scanf("%d",p2);
    *p1=*p1+*p2;
    *p2=*p1-*p2;
    *p1=*p1-*p2;
    printf("first no: %d\n",*p1);
    printf("second no: %d\n",*p2);

  
    return 0;
}