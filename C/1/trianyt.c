#include <stdio.h>
#include <conio.h>

int main(){

int x,y,k,l=1,i,j,n,r=1;


/*
x defines columns
y defines rows
i,n and j are for loops
k defines intial print
l defines range
*/
printf("enter rows(MAX 60):-\n");
scanf("%d",&y);

x = y*2-1;//deciding columns
k = y;//deciding mid or initial position


for(i=1;i<=y;i++){
     for(j=1;j<=x;j++){
            r++;
       if(j!=k){
            printf(" ");
       }
       if(j==k){
         for(n=1;n<=l;n++){
            printf("%d ",r);
         }
         }
         }

     l=l+2;// increasing the range
     x=x-2;// limiting the range
     k--;//  reseting location
     printf("\n");
    }



return 0;
}




//

