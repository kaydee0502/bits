#include<stdio.h>
int main()
{
    int i;
    scanf("%d", &i);
    switch(i%2)
    {
    case 0 : printf("even number"); break;
    case 1 : printf("odd number"); break;
    default : printf("unknown error"); break;
    }
}
