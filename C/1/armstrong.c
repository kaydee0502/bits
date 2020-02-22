#include<stdio.h>
#include<math.h>

int main(){

int num,store_a,store_b,count=0,c,op;
int total = 0;

printf("Enter the number : ");
scanf("%d",&num);

store_a = num;
store_b = num;
while(store_a != 0){

    store_a /= 10;

    count++;

}
printf("Integer strength : %d\n",count);
c = count;

for(count;count>0;count--){

    op = store_b%10;

    op = round(pow(op,c));

    total += op;
    store_b/=10;



}


if(total == num){
    printf("\nThe number is an armstrong number");
}
else{
    printf("The number is not an armstrong number");
}


}
