#include<stdio.h>
int main(){
    int n;
    printf("Enter number of strings: ");
    scanf("%d",&n);
    char str[n+1][100];
    char res[200]="";
    printf("Enter %d strings: ",n);
    for(int i=0;i<=n;i++){
        gets(str[i]);
    }
    int i=0;
    for(int j=0;j<=n;j++){
        int l=0;
        while(str[j][l]!='\0'){
            res[i]=str[j][l];
            i++;
            l++;
        }
    }res[i]='\0';
puts(res);
return 0;
}
  