#include<stdio.h>
int main(){
    char str[100];
    char *ptr=str;
    int c=0;
   
    printf("Enter string: ");
    gets(ptr);
    printf("Using string name\n");
    int i=0;
    while(*(str+i)!='\0'){
        if (*(str+i) == 'A' || *(str+i) == 'E' || *(str+i) == 'I' || *(str+i) == 'O' || *(str+i) == 'U' || *(str+i) == 'a' || *(str+i) == 'e' || *(str+i) == 'i' || *(str+i) == 'o' || *(str+i) == 'u')
        {
            c++;
        }
        i++;
    }
    printf("No. of vowels is %d\n",c);
    c=0;
    printf("Using pointer \n");
    int j=0;
    while(*(ptr+j)!='\0'){
        if (*(ptr+j) == 'A' || *(ptr+j) == 'E' || *(ptr+j) == 'I' || *(ptr+j) == 'O' || *(ptr+j) == 'U' || *(ptr+j) == 'a' || *(ptr+j) == 'e' || *(ptr+j) == 'i' || *(ptr+j) == 'o' || *(ptr+j) == 'u')
        {
            c++;
        }
        j++;
    }
    printf("No. of vowels is %d\n",c);
    return 0;
}