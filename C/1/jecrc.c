#include<stdio.h>
#include<conio.h>



int main()

{
int sum,mult,sub,mod,a,b,div;
printf("\t\t\t\tEnter your both inputs seperating by \"ENTER\"-\n");
scanf("%d %d",&a,&b);
sum = a+b;
mult = a*b;
sub = a-b;
mod = a%b;
div = a/b;
printf("\n\n\nSum-%d\nMultiplication-%d\nSubstraction-%d\nModulus-%d\nDivision-%d\n",sum,mult,sub,mod,div);

sum = b+a;
mult = b*a;
sub = b-a;
mod = b%a;
div = b/a;

printf("\n\n\nSum-%d\nMultiplication-%d\nSubstraction-%d\nModulus-%d\nDivision-%d\n",sum,mult,sub,mod,div);

getch();

}//
