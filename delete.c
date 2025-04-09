#include<stdio.h>
void main(){
    int n;
    printf("Enter number of elements in array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter array: ");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int pos;
    printf("Enter position of element to delete:  ");
    scanf("%d",&pos);
    for(int j=pos;j<n-1;j++){
        a[j]=a[j+1];
    }
    n--;
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }


}