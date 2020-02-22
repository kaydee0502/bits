#include<stdio.h>

int main(){

   int amount,rem,n2k,n5h,n1h,n50,n10,n5,n2,n1;
   printf("enter amount");
   scanf("%d",&amount);

   n2k = amount/2000;
   if(amount>=2000){
    rem = amount%2000;
   }
   else{
    rem = amount;
   }

   n5h = rem/500;

   if(rem>=500){
    rem = rem%500;
   }

   n1h = rem/100;
   if(rem>=100){
    rem = rem%100;

   }


   n50 = rem/50;
   if(rem>=50){
    rem = rem%50;

   }


   n10 = rem/10;
   if(rem>=10){
    rem = rem %10;
   }

   n5 = rem/5;
   if(rem>=5){
    rem = rem %5;
   }

n2 = rem/2;
   if(rem>=2){
    rem = rem %2;
   }

   n1 = rem/1;
   if(rem>=1){
    rem = rem %1;
   }


printf("\n2000 notes - %d",n2k);
printf("\n500 notes - %d",n5h);
printf("\n100 notes - %d",n1h);
printf("\n50 notes - %d",n50);
printf("\n10 notes - %d",n10);
printf("\n5 coins - %d",n5);
printf("\n2 coins - %d",n2);
printf("\n1 coins - %d",n1);




















}
