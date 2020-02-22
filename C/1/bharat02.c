#include<stdio.h>
int main()
{
    int age;
    scanf("%d", &age);
    if(age<3)
    printf("Infant");
    else if(age>3&&age<18)
    printf("Child");
    else if(age>18&&age<60)
    printf("Adult");
    else
    printf("Senior Citizen");
    return 0;
}




