#include<stdio.h>
int maximum(){
    int a,b,c,max;
    printf("Enter 3 numbers: ");
    scanf("%d %d %d",&a,&b,&c);
    max=(a>((b>c)?b:c)?a:((b>c)?b:c));
    
    return max;
}
void main(){
int max;
max=maximum();
printf("Largest number is %d\n",max);
}