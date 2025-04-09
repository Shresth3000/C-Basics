#include<stdio.h>
void main(){
    char str1[50],str2[50],str3[100];
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);
    int l=0;
    while(str1[l]!='\0'){
        ++l;
    }
    for(int i=0;str1[i]!='\0';i++){
        str3[i]=str1[i];
    }
    for(int i=0;str2[i]!='\0';i++,++l){
        str3[l]=str2[i];
    }
    str3[l]='\0';
    puts(str3);

}