#include<stdio.h>
void main(){
    int a,b;
    scanf("%d %d",&a,&b);
    switch(a>b){
        case 1: 
        printf("%d",a);
        break;
        case 0: 
        printf("%d",b);
        break;
    }
}