#include <stdio.h>
#include <conio.h>
#include <math.h>


int main()
{
    int a,b,c;
    float area,x;

    printf("Area of the Triangle Enter the value of all three sides of triangle seperating by \"ENTER\"-\n\n");
    scanf("%d%d%d",&a,&b,&c);





    x = float(a+b+c)/2;
    printf("\nx-%f\n\n",x);



    area = pow(x*(x-a)*(x-b)*(x-c),0.5);

    printf("The area of the triangle is - %f",area);
    getch();


}
