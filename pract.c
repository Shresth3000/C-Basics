#include<stdio.h>
void main(){
    int m=0;
    do{
        if(m>10)
            continue;
        m=m+10;
    
    }while(m<50);
    printf("%d",m);
}