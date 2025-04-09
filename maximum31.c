#include<stdio.h>
void maximum(){
    int a,b,c;
printf("Enter 3 numbers: ");
scanf("%d %d %d",&a,&b,&c);
    int max;
    max=(a>((b>c)?b:c)?a:((b>c)?b:c));
    printf("Largest number is %d\n",max);
}
void main(){

maximum();
}