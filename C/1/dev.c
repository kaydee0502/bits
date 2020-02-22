#include <stdio.h>
#include <conio.h>
int main()
{
    int a,b,c;
    char sign;
    printf("enter the values");
    scanf("%d%d",&a,&b);

    printf("chose operation(+,-,*,/)");
    scanf(" %c",&sign);

    switch(sign){

case '+':
    c = a+b;
    printf("\n\n%d + %d = %d",a,b,c);
    break;

case '-':
    c = a-b;
    printf("\n\n%d - %d = %d",a,b,c);
    break;


    case '*':
    c = a*b;
    printf("\n\n%d X %d = %d",a,b,c);
    break;


    case '/':
    c = a/b;
    printf("\n\n%d / %d = %d",a,b,c);
    break;



default:
    printf("fuck you and your input xD");



    }

}









