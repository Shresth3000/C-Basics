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
        int c=0;
        for(int k=1;k<*(*(arr+i)+j);k++){
            if(*(*(arr+i)+j)%k==0){
                c++;
            }
        }if(c==1){
            printf("%d is prime\n",*(*(arr+i)+j));
        }
    }
}

}