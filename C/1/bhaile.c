#include <stdio.h>


int main(){

int a = 5,i=0;

while(i<=a){
i++;
    if(i==3){
       //printf("skipping 3\n");
        continue;
    }
    printf("%d\n",i);

}



}
