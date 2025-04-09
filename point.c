#include<stdio.h>
void main(){
int a=10;
int *p=&a;
int **pp=&p;
**pp=20;
printf("%d\n",**pp+1);

}