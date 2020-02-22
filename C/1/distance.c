#include <stdio.h>
#include <conio.h>
#include <math.h>


int main()
{
    int x1,x2,y1,y2;
    float dist;

    printf("Input the first coordinates-\n");
    scanf("%d%d",&x1,&y1);

    printf("Input the second coordinates-\n");
    scanf("%d%d",&x2,&y2);

    dist = pow(pow((x2-x1),2) + pow((y2-y1),2),0.5);

    printf("The distance is - %f",dist);



    getch();

}
