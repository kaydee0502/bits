#include <stdio.h>

int main(){
int i,c,j,k;
int num;

printf("enter the number");
scanf("%d",&num);

for (i=1;i<=num;i++)
{

    printf(" /");
    for(c=1;c<=num;c++){
      if(i!=1&&i!=num){
        break;
      }
        printf(" /");
    }
    for(j=1;j<=num;j++){
            if(i==1||i==num){
                break;
            }
        printf("  ");
    }
    printf(" /");

    printf("\n");
}
}









