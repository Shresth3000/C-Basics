#include<stdio.h>
void vowelconsonat(char str[100]){
    int vowelCount=0,consonantCount=0;
for(int i=0;str[i]!='\0';i++){
    if(str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' || str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
        vowelCount++;
    }
    else if(str[i]>='A'&& str[i]<='Z'||str[i]>='a'&& str[i]<='z'){
        consonantCount++;
    }
}
printf("Number of vowels is %d and consonants is %d\n",vowelCount,consonantCount);
}
void main(){
    char str[100];
    puts("Enter string: ");
    gets(str);
    vowelconsonat(str);
}