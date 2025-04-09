#include<stdio.h>
void main(){
    int n,i=0;
    printf("Enter a multidigit number: ");
    scanf("%d",&n);
    while(n>0){
        n/=10;
        i++;
    }
    switch(i){
        case 0:
            printf("Enter a valid multidigit number\n");
            break;
        case 1:
            printf("It is a Single digit number\n");
            break;
        case 2:
            printf("It is a Two digit number\n");
            break; 
        case 3:
            printf("It is a Three digit number\n");
            break; 
        default:   printf("It has more than three digits\n");      
    }   
    }    
    

