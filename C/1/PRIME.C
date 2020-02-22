#include <stdio.h>

int main(){

int i,inp,x;

scanf("%d",&inp);


for(i=2;i<=9;i++){
if(inp%i==0&&inp!=i){
    printf("%d is non prime\n\n\n",inp);
    break;}
    if(i==9){
    printf("%d is prime number\n\n\n",inp);
    }
}

    //sec que

  for(i=2;i<=20;i++)
    {
     for(x=2;x<=9;x++)
     {
       if(i%x==0&&i!=x)
        {
    printf("%d is non prime\n",i);
    break;
    }
   if(x==9){
        printf("%d is prime number\n",i);
   }
    }
     }





return 0;

}


