#include<stdio.h>
int main(){
    int a;
    printf("Enter a number : ");
    scanf("%d",&a);
    if(a%5==0 && a%11==0){
        printf("%d is divisible by both 5 and 11\n",a);
    }
    else  if(a%5==0 && a%11!=0){
        printf("%d is divisible by 5 and not by 11\n",a);
    }
       else  if(a%11==0 && a%5!=0){
        printf("%d is divisible by 11 and not by 5\n",a);
    }
       else  {
        printf("%d is not divisible by both 5 and 11\n",a);
    }
    return 0;

}