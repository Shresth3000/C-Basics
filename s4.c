#include <stdio.h>

int main() {
    char str1[50];
    printf("enter first string: ");
    scanf("%s", str1);
    
    char str2[50];
    printf("enter second string: ");
    scanf("%s", str2);
    
    char str3[100]; 
    
    int c = 0;
    
    
    for (int i = 0; str1[i] != '\0'; i++) {
        str3[c++] = str1[i];
    }
    
   
    for (int i = 0; str2[i] != '\0'; i++) {
        str3[c++] = str2[i];
    }
    
   
    str3[c] = '\0';
    printf("Concatenated string: %s\n", str3);
    
    return 0;
}
