#include <stdio.h>

int main(){

int fact,i;

printf("Enter value\n");
scanf("%d",&fact);
printf("%d",fact);

for (i=fact-1;i>0;--i){

    fact *= i;
    printf("x%d",i);



}

printf(" = %d",fact);
return 0;

}
