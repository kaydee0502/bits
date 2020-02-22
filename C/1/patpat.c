#include<stdio.h>

int main(){

int i,j,k,n,t;

printf("enter the rows");
scanf("%d",&n);
t=1;

for(i=n;i>=1;i--){
        for(j=1;j<=i;j++){
            printf("  ");
        }
        for(k=1;k<=t;k++){

            printf(" @");
        }
printf("\n");
t++;


}






}
