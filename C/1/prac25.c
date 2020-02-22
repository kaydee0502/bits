#include<stdio.h>

int main(){

int i,j,k,n=2,l=1;


for(i=3;i>=0;i--){
    for(j=0;j<i;j++){
    printf("   ");
        }
    for(k=1;k<=l;k++){

       if(n<10){
        printf("  %d",n);
       }
       else{
        printf(" %d",n);
       }
       n = n + 2;
    }
    l+=1;
    printf("\n");
}
l-=1;

for(i=0;i<3;i++){
       l-=1;
    for(j=0;j<=i;j++){

        printf("   ");
    }
    for(k=0;k<l;k++){

        printf(" %d",n);
        n = n + 2;
    }




printf("\n");




}


}
