#include<stdio.h>
#include<conio.h>

int main()
{
    int a,b,c,max;

    a=12;
    b=15;
    c=14;

    max = a>b?(a>c?a:c):(b>c?b:c);

    printf("max-%d",max);

    return 0;

}
