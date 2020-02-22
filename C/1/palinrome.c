#include<stdio.h>

int main(){

int num,store_a,store_b,count=0,rem=0,total=0;


printf("Enter the number to check palinrome : ");
scanf("%d",&num);

store_a=num;
store_b=num;


while(store_a!=0){
    store_a /= 10;
    count++;
}

for(count;count>0;count--){
    total *= 10;
    rem = store_b%10;
    rem *= 10;
    total += rem;
    store_b /= 10;
    if(store_b < 10){
        total += store_b;
        break;
    }
}

    if(total == num){

        printf("\n\nYes,this is a palinrome number\n");
        printf("Palinromity : Reverse of %d is %d. Which is equal!\n\n",num,total);

        }

else{
         printf("\n\nNo,this is not a palinrome number\n");
        printf("Palinromity : Reverse of %d is %d. Which is not equal\n\n",num,total);


}




}
