#include<stdio.h>
void main(){
    int n;
    printf("Enter number of elements in array: ");
    scanf("%d",&n);
   int a[n+1];
    printf("Enter array: ");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    
    int x,pos;
    printf("Enter number to insert and position: ");
    scanf("%d %d",&x,&pos);
    for(int j=n;j>=pos;j--){
        a[j+1]=a[j];
    }
    n++;
    a[pos]=x;
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }


}