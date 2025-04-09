#include<stdio.h>
int main(){
    float m1,m2,m3,m4,m5,m;
    printf("Enter marks of five subjects: ");
    scanf("%f",&m1);
    scanf("%f",&m2);
    scanf("%f",&m3);
    scanf("%f",&m4);
    scanf("%f",&m5);
    m=(m1+m2+m3+m4+m5)/5;
    if(m>=90 && m<=100){
        printf("O Grade");
    }
    else  if(m>=80 && m<=89){
        printf("E Grade");
    }
     else  if(m>=70 && m<=79){
        printf("A Grade\n");
    }
     else  if(m>=60 && m<=69){
        printf("B Grade");
    }
     else  if(m>=50 && m<=59){
        printf("C Grade");
    }
     else  if(m>=40 && m<=49){
        printf("D Grade");
    }
     else  if(m>=30 && m<=39){
        printf("F Grade");
    }
     else  if(m<30){
        printf("Fail");
    }
printf("%f",m/10);
    return 0;
}