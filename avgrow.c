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
        scanf("%d",(*(arr+i)+j));
    }
}
for(int i=0;i<r;i++){
    int s=0;
    float avg=0;
    for(int j=0;j<c;j++){
        s+=*(*(arr+i)+j);
    }
    avg=s/c;
    printf("Average of row %d is %0.2f\n",i+1,avg);
}

}