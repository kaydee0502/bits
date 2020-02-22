#include <stdio.h>

int main(){

int i,j,r,p=1;

printf("Enter no. of rows");
scanf("%d",&r);

for(i=1;i<=r;i++){
        for(j=r;j>=i;j--){

            printf(" ");
            }

        for(j=1;j<=p;j++){
            printf("1");
        }
p=p+2;

    printf("\n");

}




}
