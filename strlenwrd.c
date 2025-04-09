#include<stdio.h>
void largestword(char *str){
char largest[200]="";
char current[200]="";
int ml=0,cl=0,i=0,j=0;
for( i=0;str[i]!='\0';i++){
    if(str[i]!=' '&& str[i]!='\n'){
        current[cl]=str[i];
        cl++;
    }
    else{
        current[cl]='\0';
        if(cl>ml){
            ml=cl;
            j=0;
            while(current[j]!=0){
                largest[j]=current[j];
                j++;
            }largest[j]='\0';
        }cl=0;
    }

}
current[cl]='\0';
if(cl>ml){
    ml=cl;
    j=0;
    while(current[j]!=0){
        largest[j]=current[j];
        j++;
    }largest[j]='\0';

}printf("The largest word is: %s\n",largest);
}
void main(){
    char str[200];
    printf("Enter a string: ");
    gets(str);
    largestword(str);
}