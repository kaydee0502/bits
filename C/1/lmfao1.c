#include<stdio.h>
int func(int m, int n);
int main()
{
int a,b,mul;
printf("enter the values for multiplication \n");
scanf("%d%d",&a, &b);
mul=func(a, b);
printf("%d \n", mul);
}
int func(int m, int n)
{
int c;
c = m*n;
return c;
}

