#include<stdio.h>
int main()
{
    int i, j, k;
    printf("enter number of rows");
    scanf("%d", &k);
    for(i=k; i>0; i--)
    {
        for(j=i; j>0; j--)
        {
            printf("$");
        }
    printf("\n");
    }

}
