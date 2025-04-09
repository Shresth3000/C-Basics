#include<stdio.h>
void main(){
    int a,b,c;
    printf("Enter three numbers: ");
    scanf("%d %d %d",&a,&b,&c);
    if(a<b){
        if(a<c){
            printf("Smallest number is %d\n",a);
        }
        else{
            printf("Smallest number is %d\n",c);
        }
    }
    else{
        if(b<c){
             printf("Smallest number is %d\n",b);
        }
        else{
            printf("Smallest number is %d\n",c);
        }
    }
}