#include<stdio.h>
int main(){
    float sal,finalsal;
    printf("Enter basic salary: ");
    scanf("%f",&sal);
    if(sal<=10000){
        finalsal=sal+(0.2*sal)+(0.8*sal);
        printf("Gross Salary: %f",finalsal);

    }
    else if(sal>10000 && sal<=20000){
        finalsal=sal+(0.25*sal)+(0.9*sal);
        printf("Gross Salary: %f",finalsal);

    }
      else if(sal>20000){
        finalsal=sal+(0.3*sal)+(0.95*sal);
        printf("Gross Salary: %f",finalsal);

    }
    return 0;
}