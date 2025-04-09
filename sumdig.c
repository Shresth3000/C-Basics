#include<stdio.h>
void main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int s=0;
    while(n>0){
        int r=n%10;
        s+=r;
        n/=10;
    }
    if(s%3==0&&s%4==0){
        printf("%d is divisible by both 3 and 4\n",s);
    }
    else{
         printf("%d is not divisible by both 3 and 4\n",s);
    }
}