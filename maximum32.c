#include<stdio.h>
int maximum(int a,int b, int c){
    int max;
    max=(a>((b>c)?b:c)?a:((b>c)?b:c));
    
    return max;
}
void main(){
int a,b,c,max;
printf("Enter 3 numbers: ");
scanf("%d %d %d",&a,&b,&c);

printf("Largest number is %d\n",maximum(a,b,c));
}