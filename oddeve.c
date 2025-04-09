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
    for(int j=0;j<c;j++){
        if(*(*(arr+i)+j)%2==0){
            printf("%d is even\n",*(*(arr+i)+j));
        }
        else{
            printf("%d is odd\n",*(*(arr+i)+j));
        }
    }
}

}
