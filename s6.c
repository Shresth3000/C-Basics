#include<stdio.h>
void main(){
    char str1[100],str2[50];
    int length=0;
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);
    while(str1[length]!='\0'){
        ++length;
    }
    for(int i=0;str2[i]!='\0';i++,++length){
        str1[length]=str2[i];
    }
    str1[length]='\0';
    puts(str1);
}