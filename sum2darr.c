#include<stdio.h>
void main(){
int r,c;
printf("Enter number of rows and columns: ");
scanf("%d %d",&r,&c);
int arr[r][c];
int (*ptr)[c]=arr;
printf("Enter array elements: ");
for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        scanf("%d",(*(ptr+i)+j));
    }
}
int s=0;
for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        s+=*(*(ptr+i)+j);
    }
}
printf("Sum of elements of array is: %d",s);
}