#include<stdio.h>

int main(){

int i,j,k,p,l=1;


for(i=4;i>=0;i--){
    for(j=0;j<=i;j++){
        printf(" ");
        }
    for(k=1;k<l;k++){

        printf("%d",k);

    }


     for(p=l;p>=1;p--){

        printf("%d",p);

    }

    printf("\n");
    l++;
}





}
