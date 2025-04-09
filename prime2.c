#include<stdio.h>
void prime(){
    int a,b;
    printf("Enter start and stop: ");
    scanf("%d %d",&a,&b);
    for(int i=a;i<=b;i++){
        int c=0;
        for(int j=2;j<=i;j++){
            if(i%j==0){
                c++;
            }

        }if(c==1){
            printf("%d is prime\n",i);
        }
    }
}
void main(){
   
    prime();
}