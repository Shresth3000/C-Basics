#include<stdio.h>
int main(){
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);
    if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U' || ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
        printf("Consonant next to %c is %c\n",ch,ch+1);
    }
    else{
        printf("%c is a consonant\n",ch);
    }
    return 0;
}