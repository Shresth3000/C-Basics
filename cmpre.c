#include<stdio.h>
int comparestr(char *str1, char *str2){
while(*str1 !='\0' && *str2 != '\0'){
    if(*str1!=*str2){
        return 0;
    }str1++;
    str2++;
}return (*str1 =='\0' && *str2 == '\0');
}
void main(){
    char str1[200],str2[200];
    printf("Enter First string: ");
    gets(str1);
    printf("Enter Second string: ");
    gets(str2);
    if(comparestr(str1,str2)){
        printf("Strings are equal\n");
    }
    else{
        printf("Strings are unequal\n");
    }

}